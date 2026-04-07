/*
 * XREFs of ?HandleAnimationEnd@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F52A8
 * Callers:
 *     ?OnAnimationComplete@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x1800F5490 (-OnAnimationComplete@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 * Callees:
 *     ?CapturePreRotationVisuals@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4974 (-CapturePreRotationVisuals@ScreenRotationResponsiveTransitionHandler@implementation@Private@Tran.c)
 *     ?DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4ResponsiveRotationTimelineReason@23456@@Z @ 0x1800F4B70 (-DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::HandleAnimationEnd(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *this)
{
  __int64 v2; // r8
  const char *v3; // r9
  int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 81) )
  {
    *((_BYTE *)this + 81) = 0;
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::CapturePreRotationVisuals(this);
    v4 = 1;
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::DelayNextAnimation(
      this,
      (const enum winrt::Udwm::Transitions::Private::implementation::ResponsiveRotationTimelineReason *)&v4,
      v2,
      v3);
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::SetRotationState(
      (__int64)this,
      1);
  }
  else
  {
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::Cancel(this);
  }
}
