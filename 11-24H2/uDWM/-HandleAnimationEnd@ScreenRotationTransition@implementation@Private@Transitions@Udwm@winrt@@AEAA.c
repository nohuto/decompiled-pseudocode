/*
 * XREFs of ?HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E1018
 * Callers:
 *     ?OnAnimationComplete@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x1800E1160 (-OnAnimationComplete@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEA.c)
 * Callees:
 *     ?Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004B6AC (-Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E07F8 (-CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ?DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RotationTimelineReason@23456@@Z @ 0x1800E0914 (-DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::HandleAnimationEnd(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  __int64 v2; // r8
  const char *v3; // r9
  int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 81) )
  {
    *((_BYTE *)this + 81) = 0;
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::CapturePreRotationVisuals((CBaseObject **)this);
    v4 = 1;
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DelayNextAnimation(
      this,
      (const enum winrt::Udwm::Transitions::Private::implementation::RotationTimelineReason *)&v4,
      v2,
      v3);
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::SetRotationState((__int64)this, 1);
  }
  else
  {
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::Cancel(this);
    UDwmTrace::ResponsiveRotationAnimationTeardownComplete();
  }
}
