// Generated by Apple Swift version 5.5.2 (swiftlang-1300.0.47.5 clang-1300.0.29.30)
#ifndef NBMAPCORENAVIGATION_SWIFT_H
#define NBMAPCORENAVIGATION_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreLocation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NbmapCoreNavigation",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



SWIFT_CLASS("_TtC19NbmapCoreNavigation23AlternativeRouteManager")
@interface AlternativeRouteManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end





@class NSNumber;
@class NSCoder;
@class NSString;

SWIFT_CLASS("_TtC19NbmapCoreNavigation29ConfigurationApiQueryInterval")
@interface ConfigurationApiQueryInterval : NSObject <NSSecureCoding>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL supportsSecureCoding;)
+ (BOOL)supportsSecureCoding SWIFT_WARN_UNUSED_RESULT;
+ (void)setSupportsSecureCoding:(BOOL)value;
- (nonnull instancetype)init;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)encodeWithCoder:(NSCoder * _Nonnull)coder;
@property (nonatomic, readonly) NSInteger queryInterval;
@property (nonatomic, readonly, copy) NSString * _Nonnull unit;
@end


SWIFT_CLASS("_TtC19NbmapCoreNavigation21ConfigurationMapStyle")
@interface ConfigurationMapStyle : NSObject <NSSecureCoding>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL supportsSecureCoding;)
+ (BOOL)supportsSecureCoding SWIFT_WARN_UNUSED_RESULT;
+ (void)setSupportsSecureCoding:(BOOL)value;
- (nonnull instancetype)initWithStyleId:(NSInteger)styleId styleBright:(NSString * _Nonnull)styleBright styleDark:(NSString * _Nonnull)styleDark styleSatellite:(NSString * _Nonnull)styleSatellite OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)encodeWithCoder:(NSCoder * _Nonnull)coder;
@property (nonatomic, readonly) NSInteger styleId;
@property (nonatomic, readonly, copy) NSString * _Nonnull styleBright;
@property (nonatomic, readonly, copy) NSString * _Nonnull styleDark;
@property (nonatomic, readonly, copy) NSString * _Nonnull styleSatellite;
@end


SWIFT_CLASS("_TtC19NbmapCoreNavigation26ConfigurationRequestParams")
@interface ConfigurationRequestParams : NSObject
- (nonnull instancetype)init;
@property (nonatomic, readonly, copy) NSString * _Nonnull baseUrl;
@end

@class ConfigurationValue;

SWIFT_CLASS("_TtC19NbmapCoreNavigation21ConfigurationResponse")
@interface ConfigurationResponse : NSObject <NSSecureCoding>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL supportsSecureCoding;)
+ (BOOL)supportsSecureCoding SWIFT_WARN_UNUSED_RESULT;
+ (void)setSupportsSecureCoding:(BOOL)value;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)encodeWithCoder:(NSCoder * _Nonnull)coder;
@property (nonatomic, readonly) NSInteger id;
@property (nonatomic, readonly, copy) NSString * _Nonnull sdkVersion;
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nonnull platform;
@property (nonatomic, readonly, strong) ConfigurationValue * _Nonnull value;
@property (nonatomic, readonly) NSInteger orgId;
@property (nonatomic, readonly) int64_t createdAt;
@property (nonatomic, readonly) int64_t updatedAt;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC19NbmapCoreNavigation18ConfigurationValue")
@interface ConfigurationValue : NSObject <NSSecureCoding>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL supportsSecureCoding;)
+ (BOOL)supportsSecureCoding SWIFT_WARN_UNUSED_RESULT;
+ (void)setSupportsSecureCoding:(BOOL)value;
- (nonnull instancetype)init;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)encodeWithCoder:(NSCoder * _Nonnull)coder;
@property (nonatomic, readonly, strong) ConfigurationApiQueryInterval * _Nonnull configurationApiQueryInterval;
@property (nonatomic, readonly, copy) NSArray<ConfigurationMapStyle *> * _Nonnull mapStyles;
@property (nonatomic, readonly) NSInteger defaultStyleId;
@property (nonatomic, readonly, copy) NSString * _Nonnull baseUrl;
@end


/// The <code>EventsManager</code> is responsible for being the liaison between the RouteController and the telemetry framework.
/// <code>SessionState</code> is a struct that stores all memoized statistics that we later send to the telemetry engine.
SWIFT_CLASS_NAMED("DataTracking")
@interface NBEventsManager : NSObject
/// When set to <code>false</code>, flushing of telemetry events is not delayed. Is set to <code>true</code> by default.
@property (nonatomic) BOOL delaysEventFlushing;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSUUID;
enum NBFeedbackType : NSInteger;
enum NBFeedbackSource : NSInteger;

@interface NBEventsManager (SWIFT_EXTENSION(NbmapCoreNavigation))
/// Update the feedback event with a specific feedback identifier. If you implement a custom feedback UI that lets a user elaborate on an issue, you can use this to update the metadata.
/// Note that feedback is sent 20 seconds after being recorded, so you should promptly update the feedback metadata after the user discards any feedback UI.
- (void)updateFeedbackWithUuid:(NSUUID * _Nonnull)uuid type:(enum NBFeedbackType)type source:(enum NBFeedbackSource)source description:(NSString * _Nullable)description;
/// Discard a recorded feedback event, for example if you have a custom feedback UI and the user canceled feedback.
- (void)cancelFeedbackWithUuid:(NSUUID * _Nonnull)uuid;
@end


@class NSUnitLength;
@class NSAttributedString;

/// Provides appropriately formatted, localized descriptions of linear distances.
SWIFT_CLASS_NAMED("DistanceFormatter")
@interface NBDistanceFormatter : NSLengthFormatter
/// Intializes a new <code>DistanceFormatter</code>.
/// \param approximate approximates the distances.
///
- (nonnull instancetype)initWithApproximate:(BOOL)approximate OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)decoder OBJC_DESIGNATED_INITIALIZER;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
/// Returns a more human readable <code>String</code> from a given <code>CLLocationDistance</code>.
/// The user’s <code>Locale</code> is used here to set the units.
- (NSString * _Nonnull)stringFrom:(CLLocationDistance)distance SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)stringFromMeters:(double)numberInMeters SWIFT_WARN_UNUSED_RESULT;
- (NSMeasurement<NSUnitLength *> * _Nonnull)measurementOfDistance:(CLLocationDistance)distance SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=10.0);
/// Returns an attributed string containing the formatted, converted distance.
/// <code>NSAttributedStringKey.quantity</code> is applied to the numeric quantity.
- (NSAttributedString * _Nullable)attributedStringForObjectValue:(id _Nonnull)obj withDefaultAttributes:(NSDictionary<NSAttributedStringKey, id> * _Nullable)attrs SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Feedback Model Object for End Of Route Experience.
SWIFT_CLASS("_TtC19NbmapCoreNavigation18EndOfRouteFeedback")
@interface EndOfRouteFeedback : NSObject
- (nonnull instancetype)initWithRating:(NSNumber * _Nullable)ratingNumber comment:(NSString * _Nullable)comment;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM_NAMED(NSInteger, NBFeedbackSource, "FeedbackSource", open) {
  NBFeedbackSourceUser = 0,
  NBFeedbackSourceReroute = 1,
  NBFeedbackSourceUnknown = 2,
};

/// Feedback type is used to specify the type of feedback being recorded with <code>RouteController.recordFeedback()</code>.
typedef SWIFT_ENUM_NAMED(NSInteger, NBFeedbackType, "FeedbackType", open) {
/// Indicates general feedback. You should provide a <code>description</code> string to <code>RouteController.recordFeedback()</code> to elaborate on the feedback if possible.
  NBFeedbackTypeGeneral = 0,
/// Identifies the feedback as the location of an accident or crash
  NBFeedbackTypeAccident = 1,
/// Identifies the feedback as the location of a road hazard such as debris, stopped vehicles, etc.
  NBFeedbackTypeHazard = 2,
/// Identifies the feedback as the location of a closed road that should not allow vehicles
  NBFeedbackTypeRoadClosed = 3,
/// Identifies the feedback as a maneuver that isn’t allowed. For example, if a user is instructed to make a left turn, but the turn isn’t allowed.
  NBFeedbackTypeNotAllowed = 4,
/// Identifies the feedback as the location of a road that should exist along the route.
  NBFeedbackTypeMissingRoad = 5,
/// Identifies the feedback as a maneuver with missing exit information such as an exit number or destination sign.
  NBFeedbackTypeMissingExit = 6,
/// Identifies the feedback as the location of a poor instruction or route choice. This could be used to indicate an ambiguous or poorly-timed turn announcement, or a set of confusing turns.
  NBFeedbackTypeRoutingError = 7,
/// Identifies the feedback as the location of a confusing instruction.
  NBFeedbackTypeConfusingInstruction = 8,
/// Identifies the feedback as a place where traffic should have been reported.
  NBFeedbackTypeReportTraffic = 9,
/// Identifies the feedback as a general map issue.
  NBFeedbackTypeMapIssue = 10,
};


SWIFT_CLASS("_TtC19NbmapCoreNavigation19NBNavigationService")
@interface NBNavigationService : NSObject
/// Stops monitoring the user’s location along the route.
- (void)suspendLocationUpdates;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@class CLLocationManager;
@class CLHeading;
@class CLLocation;

@interface NBNavigationService (SWIFT_EXTENSION(NbmapCoreNavigation)) <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateHeading:(CLHeading * _Nonnull)newHeading;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)locationManagerDidChangeAuthorization:(CLLocationManager * _Nonnull)manager;
@end

@class RouteController;
@class NBNavRoute;
@class NBWaypoint;

@interface NBNavigationService (SWIFT_EXTENSION(NbmapCoreNavigation))
- (BOOL)routeController:(RouteController * _Nonnull)routeController shouldRerouteFrom:(CLLocation * _Nonnull)location SWIFT_WARN_UNUSED_RESULT;
- (void)routeController:(RouteController * _Nonnull)routeController willRerouteFrom:(CLLocation * _Nonnull)location;
- (void)routeController:(RouteController * _Nonnull)routeController didRerouteAlong:(NBNavRoute * _Nonnull)route at:(CLLocation * _Nullable)location proactive:(BOOL)proactive;
- (void)routeController:(RouteController * _Nonnull)routeController didFailToRerouteWith:(NSError * _Nonnull)error;
- (BOOL)routeController:(RouteController * _Nonnull)routeController shouldDiscard:(CLLocation * _Nonnull)location SWIFT_WARN_UNUSED_RESULT;
- (void)routeController:(RouteController * _Nonnull)routeController didArriveAt:(NBWaypoint * _Nonnull)waypoint;
@end


SWIFT_CLASS("_TtC19NbmapCoreNavigation18NBTelemetryManager")
@interface NBTelemetryManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP19NbmapCoreNavigation23NavigationEventTracking_")
@protocol NavigationEventTracking
- (void)trackingRouteDataWithRoute:(NSDictionary<NSString *, id> * _Nonnull)route;
- (void)trackingRawLocationWithRawLocation:(NSDictionary<NSString *, id> * _Nonnull)rawLocation;
- (void)trackingSnapLocationWithSnapLocation:(NSDictionary<NSString *, id> * _Nonnull)snapLocation;
- (void)trackingSpokenWithSponken:(NSDictionary<NSString *, id> * _Nonnull)sponken;
- (void)trackingBannerInfoWithBannerInfo:(NSDictionary<NSString *, id> * _Nonnull)bannerInfo;
- (void)trackingSummaryWithSummary:(NSDictionary<NSString *, id> * _Nonnull)summary;
- (void)trackingStartRerouteWithReroute:(NSDictionary<NSString *, id> * _Nonnull)reroute;
- (void)trackingRerouteErrorWithReRouteError:(NSDictionary<NSString *, id> * _Nonnull)reRouteError;
- (void)trackingRerouteResponseWithRerouteResponse:(NSDictionary<NSString *, id> * _Nonnull)rerouteResponse;
- (void)trackingNavigationFinish;
@end


/// <code>NavigationLocationManager</code> is the base location manager which handles permissions and background modes.
SWIFT_CLASS_NAMED("NavigationLocationManager")
@interface NBNavigationLocationManager : CLLocationManager <NSCopying>
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// <code>NavigationSettings</code> provides a wrapper for UserDefaults.
/// Properties are prefixed and before they are stored in UserDefaults.standard.
SWIFT_CLASS_NAMED("NavigationSettings")
@interface NBNavigationSettings : NSObject
/// The volume that the voice controller will use.
/// This volume is relative to the system’s volume where 1.0 is same volume as the system.
@property (nonatomic) float voiceVolume;
/// Specifies whether to mute the voice controller or not.
@property (nonatomic) BOOL voiceMuted;
/// Specifies the preferred distance measurement unit.
/// note:
/// Anything but <code>kilometer</code> and <code>mile</code> will fall back to the default measurement for the current locale.
/// Meters and feets will be used when the presented distances are small enough. See <code>DistanceFormatter</code> for more information.
@property (nonatomic) NSLengthFormatterUnit distanceUnit;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
@end



/// <code>ReplayLocationManager</code> replays an array of locations exactly as they were
/// recorded with the single exception of the location’s timestamp which will be
/// adjusted by interval between locations.
SWIFT_CLASS_NAMED("ReplayLocationManager")
@interface NBReplayLocationManager : NBNavigationLocationManager
/// <code>speedMultiplier</code> adjusts the speed of the replay.
@property (nonatomic) NSTimeInterval speedMultiplier;
/// <code>locations</code> to be replayed.
@property (nonatomic, copy) NSArray<CLLocation *> * _Null_unspecified locations;
@property (nonatomic, readonly, strong) CLLocation * _Nullable location;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC19NbmapCoreNavigation17RerouteController")
@interface RerouteController : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// A <code>RouteController</code> tracks the user’s progress along a route, posting notifications as the user reaches significant points along the route. On every location update, the route controller evaluates the user’s location, determining whether the user remains on the route. If not, the route controller calculates a new route.
/// <code>RouteController</code> is responsible for the core navigation logic whereas
/// <code>NavigationViewController</code> is responsible for displaying a default drop-in navigation UI.
SWIFT_CLASS("_TtC19NbmapCoreNavigation15RouteController")
@interface RouteController : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end








@interface RouteController (SWIFT_EXTENSION(NbmapCoreNavigation)) <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateHeading:(CLHeading * _Nonnull)newHeading;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
@end

@class NBNavRouteLeg;
@class NBRouteStep;
@class NBRouteStepProgress;

/// <code>RouteLegProgress</code> stores the user’s progress along a route leg.
SWIFT_CLASS_NAMED("RouteLegProgress")
@interface NBRouteLegProgress : NSObject
/// Returns the current <code>RouteLeg</code>.
@property (nonatomic, readonly, strong) NBNavRouteLeg * _Nonnull leg;
/// Index representing the current step.
@property (nonatomic) NSInteger stepIndex;
@property (nonatomic) BOOL currentLegComplete;
/// The remaining steps for user to complete.
@property (nonatomic, readonly, copy) NSArray<NBRouteStep *> * _Nonnull remainingSteps;
/// Total distance traveled in meters along current leg.
@property (nonatomic, readonly) CLLocationDistance distanceTraveled;
/// Duration remaining in seconds on current leg.
@property (nonatomic, readonly) NSTimeInterval durationRemaining;
/// Distance remaining on the current leg.
@property (nonatomic, readonly) CLLocationDistance distanceRemaining;
/// Number between 0 and 1 representing how far along the current leg the user has traveled.
@property (nonatomic, readonly) double fractionTraveled;
@property (nonatomic) BOOL userHasArrivedAtWaypoint;
/// Returns the <code>RouteStep</code> before a given step. Returns <code>nil</code> if there is no step prior.
- (NBRouteStep * _Nullable)stepBefore:(NBRouteStep * _Nonnull)step SWIFT_WARN_UNUSED_RESULT;
/// Returns the <code>RouteStep</code> after a given step. Returns <code>nil</code> if there is not a step after.
- (NBRouteStep * _Nullable)stepAfter:(NBRouteStep * _Nonnull)step SWIFT_WARN_UNUSED_RESULT;
/// Returns the <code>RouteStep</code> before the current step.
/// If there is no <code>priorStep</code>, nil is returned.
@property (nonatomic, readonly, strong) NBRouteStep * _Nullable priorStep;
/// Returns the current <code>RouteStep</code> for the leg the user is on.
@property (nonatomic, readonly, strong) NBRouteStep * _Nonnull currentStep;
/// Returns the upcoming <code>RouteStep</code>.
/// If there is no <code>upcomingStep</code>, nil is returned.
@property (nonatomic, readonly, strong) NBRouteStep * _Nullable upComingStep;
/// Returns step 2 steps ahead.
/// If there is no <code>followOnStep</code>, nil is returned.
@property (nonatomic, readonly, strong) NBRouteStep * _Nullable followOnStep;
/// Return bool whether step provided is the current <code>RouteStep</code> the user is on.
- (BOOL)isCurrentStep:(NBRouteStep * _Nonnull)step SWIFT_WARN_UNUSED_RESULT;
/// Returns the progress along the current <code>RouteStep</code>.
@property (nonatomic, strong) NBRouteStepProgress * _Nonnull currentStepProgress;
/// Intializes a new <code>RouteLegProgress</code>.
/// \param leg Leg on a <code>Route</code>.
///
/// \param stepIndex Current step the user is on.
///
- (nonnull instancetype)initWithLeg:(NBNavRouteLeg * _Nonnull)leg stepIndex:(NSInteger)stepIndex spokenInstructionIndex:(NSInteger)spokenInstructionIndex OBJC_DESIGNATED_INITIALIZER;
/// Returns an array of <code>CLLocationCoordinate2D</code> of the prior, current and upcoming step geometry.
@property (nonatomic, readonly, copy) NSArray<NSValue *> * _Nonnull nearbyCoordinates;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// <code>RouteProgress</code> stores the user’s progress along a route.
SWIFT_CLASS_NAMED("RouteProgress")
@interface NBRouteProgress : NSObject
/// Returns the current <code>Route</code>.
@property (nonatomic, readonly, strong) NBNavRoute * _Nonnull route;
/// Index representing current <code>RouteLeg</code>.
@property (nonatomic) NSInteger legIndex;
/// If waypoints are provided in the <code>Route</code>, this will contain which leg the user is on.
@property (nonatomic, readonly, strong) NBNavRouteLeg * _Nonnull currentLeg;
/// Total distance traveled by user along all legs.
@property (nonatomic, readonly) CLLocationDistance distanceTraveled;
/// Total seconds remaining on all legs.
@property (nonatomic, readonly) NSTimeInterval durationRemaining;
/// Number between 0 and 1 representing how far along the <code>Route</code> the user has traveled.
@property (nonatomic, readonly) double fractionTraveled;
/// Total distance remaining in meters along route.
@property (nonatomic, readonly) CLLocationDistance distanceRemaining;
/// Number of waypoints remaining on the current route.
@property (nonatomic, readonly, copy) NSArray<NBWaypoint *> * _Nonnull remainingWaypoints;
/// Number of waypoints remaining on the current route.
- (NSArray<NBWaypoint *> * _Nonnull)remainingWaypointsWithoutLegWithRemoveIndex:(NSInteger)removeIndex SWIFT_WARN_UNUSED_RESULT;
/// Returns the progress along the current <code>RouteLeg</code>.
@property (nonatomic, strong) NBRouteLegProgress * _Nonnull currentLegProgress;
/// Intializes a new <code>RouteProgress</code>.
/// \param route The route to follow.
///
/// \param legIndex Zero-based index indicating the current leg the user is on.
///
- (nonnull instancetype)initWithRoute:(NBNavRoute * _Nonnull)route legIndex:(NSInteger)legIndex stepIndex:(NSInteger)stepIndex spokenInstructionIndex:(NSInteger)spokenInstructionIndex OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class NBIntersection;
@class NBVisualInstructionBanner;
@class NBSpokenInstruction;

/// <code>RouteStepProgress</code> stores the user’s progress along a route step.
SWIFT_CLASS_NAMED("RouteStepProgress")
@interface NBRouteStepProgress : NSObject
/// Returns the current <code>RouteStep</code>.
@property (nonatomic, readonly, strong) NBRouteStep * _Nonnull step;
/// Returns distance user has traveled along current step.
@property (nonatomic) CLLocationDistance distanceTraveled;
/// Returns distance from user to end of step.
@property (nonatomic) CLLocationDistance userDistanceToManeuverLocation;
/// Total distance in meters remaining on current step.
@property (nonatomic, readonly) CLLocationDistance distanceRemaining;
/// Number between 0 and 1 representing fraction of current step traveled.
@property (nonatomic, readonly) double fractionTraveled;
/// Number of seconds remaining on current step.
@property (nonatomic, readonly) NSTimeInterval durationRemaining;
/// Intializes a new <code>RouteStepProgress</code>.
/// \param step Step on a <code>RouteLeg</code>.
///
- (nonnull instancetype)initWithStep:(NBRouteStep * _Nonnull)step spokenInstructionIndex:(NSInteger)spokenInstructionIndex OBJC_DESIGNATED_INITIALIZER;
/// All intersections on the current <code>RouteStep</code> and also the first intersection on the upcoming <code>RouteStep</code>.
/// The upcoming <code>RouteStep</code> first <code>Intersection</code> is added because it is omitted from the current step.
@property (nonatomic, copy) NSArray<NBIntersection *> * _Nullable intersectionsIncludingUpcomingManeuverIntersection;
/// The next intersection the user will travel through.
/// The step must contain <code>intersectionsIncludingUpcomingManeuverIntersection</code> otherwise this property will be <code>nil</code>.
@property (nonatomic, readonly, strong) NBIntersection * _Nullable upcomingIntersection;
/// Index representing the current intersection.
@property (nonatomic) NSInteger intersectionIndex;
/// The current intersection the user will travel through.
/// The step must contain <code>intersectionsIncludingUpcomingManeuverIntersection</code> otherwise this property will be <code>nil</code>.
@property (nonatomic, readonly, strong) NBIntersection * _Nullable currentIntersection;
/// Returns an array of the calculated distances from the current intersection to the next intersection on the current step.
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable intersectionDistances;
/// Index into <code>step.instructionsDisplayedAlongStep</code> representing the current visual instruction for the step.
@property (nonatomic) NSInteger visualInstructionIndex;
/// An <code>Array</code> of remaining <code>VisualInstruction</code> for a step.
@property (nonatomic, readonly, copy) NSArray<NBVisualInstructionBanner *> * _Nullable remainingVisualInstructions;
/// Index into <code>step.instructionsSpokenAlongStep</code> representing the current spoken instruction.
@property (nonatomic) NSInteger spokenInstructionIndex;
/// An <code>Array</code> of remaining <code>SpokenInstruction</code> for a step.
@property (nonatomic, readonly, copy) NSArray<NBSpokenInstruction *> * _Nullable remainingSpokenInstructions;
/// Current spoken instruction for the user’s progress along a step.
@property (nonatomic, readonly, strong) NBSpokenInstruction * _Nullable currentSpokenInstruction;
/// Current visual instruction for the user’s progress along a step.
@property (nonatomic, readonly, strong) NBVisualInstructionBanner * _Nullable currentVisualInstruction;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// The <code>SimulatedLocationManager</code> class simulates location updates along a given route.
/// The route will be replaced upon a <code>RouteControllerDidReroute</code> notification.
/// The manager calls delegate methods on a background thread.
SWIFT_CLASS("_TtC19NbmapCoreNavigation24SimulatedLocationManager")
@interface SimulatedLocationManager : NBNavigationLocationManager
@property (nonatomic, strong) CLLocation * _Nullable location;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (id _Nonnull)copy SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// The <code>SimulatedLocationModelManager</code> class simulates location updates along a given route. only for simulation navigation
/// The route will be replaced upon a <code>RouteControllerDidReroute</code> notification.
/// The manager calls delegate methods on a background thread.
SWIFT_CLASS("_TtC19NbmapCoreNavigation29SimulatedLocationModelManager")
@interface SimulatedLocationModelManager : NBNavigationLocationManager
@property (nonatomic, strong) CLLocation * _Nullable location;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (id _Nonnull)copy SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol NBTunnelIntersectionManagerDelegate;

SWIFT_CLASS_NAMED("TunnelIntersectionManager")
@interface NBTunnelIntersectionManager : NSObject
/// The associated delegate for tunnel intersection manager.
@property (nonatomic, weak) id <NBTunnelIntersectionManagerDelegate> _Nullable delegate;
/// The simulated location manager dedicated to tunnel simulated navigation.
@property (nonatomic, strong) SimulatedLocationManager * _Nullable animatedLocationManager;
/// An array of bad location updates recorded upon exit of a tunnel.
@property (nonatomic, copy) NSArray<CLLocation *> * _Nonnull tunnelExitLocations;
/// Flag indicating whether the user is animated through tunnels.
@property (nonatomic) BOOL tunnelSimulationEnabled;
/// Given a user’s current location and the route progress,
/// detects whether the upcoming intersection contains a tunnel road class, and
/// returns a Boolean whether they are within the minimum radius of a tunnel entrance.
- (BOOL)userWithinTunnelEntranceRadiusAt:(CLLocation * _Nonnull)location routeProgress:(NBRouteProgress * _Nonnull)routeProgress SWIFT_WARN_UNUSED_RESULT;
- (void)enableTunnelAnimationWithRouteController:(RouteController * _Nonnull)routeController routeProgress:(NBRouteProgress * _Nonnull)routeProgress;
- (void)suspendTunnelAnimationAt:(CLLocation * _Nonnull)location routeController:(RouteController * _Nonnull)routeController;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// The <code>TunnelIntersectionManagerDelegate</code> protocol provides methods for responding to events where a user enters or exits a tunnel.
SWIFT_PROTOCOL_NAMED("TunnelIntersectionManagerDelegate")
@protocol NBTunnelIntersectionManagerDelegate
@optional
/// Called immediately when the location manager detects a user will enter a tunnel.
/// \param manager The <code>TunnelIntersectionManager</code> that currently sends the location updates.
///
/// \param location The user’s current location where the tunnel was detected.
///
- (void)tunnelIntersectionManager:(NBTunnelIntersectionManager * _Nonnull)manager willEnableAnimationAtLocation:(CLLocation * _Nonnull)location;
/// Called immediately when the location manager detects the user will exit a tunnel.
/// \param manager The <code>TunnelIntersectionManager</code> that currently sends the location updates.
///
/// \param location The user’s current location where the tunnel was detected.
///
- (void)tunnelIntersectionManager:(NBTunnelIntersectionManager * _Nonnull)manager willDisableAnimationAtLocation:(CLLocation * _Nonnull)location;
@end


@interface UIDevice (SWIFT_EXTENSION(NbmapCoreNavigation))
/// Returns a <code>Bool</code> whether the device is plugged in. Returns false if not an iOS device.
@property (nonatomic, readonly) BOOL isPluggedIn;
@end




#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
