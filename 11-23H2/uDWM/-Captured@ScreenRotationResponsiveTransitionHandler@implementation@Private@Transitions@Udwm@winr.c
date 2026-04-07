/*
 * XREFs of ?Captured@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ @ 0x18002EB74
 * Callers:
 *     ?Cancel@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18002FC0C (-Cancel@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 *     ?CapturePreRotationVisuals@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4974 (-CapturePreRotationVisuals@ScreenRotationResponsiveTransitionHandler@implementation@Private@Tran.c)
 *     ?PostTransition@?$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x1800F5650 (-PostTransition@-$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Tran.c)
 *     ?PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F5730 (-PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm.c)
 *     ?StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F59E8 (-StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 *     ?UpdateAngle@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXHH@Z @ 0x1800F64B8 (-UpdateAngle@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@w.c)
 * Callees:
 *     <none>
 */

char __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::Captured(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 7);
  result = 0;
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 24) )
      return 1;
  }
  return result;
}
