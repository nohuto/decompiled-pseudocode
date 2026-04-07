/*
 * XREFs of ?ReleaseTransitionHandler@CGlobalTimeTrackVisual@@QEAAXXZ @ 0x1800EC2EC
 * Callers:
 *     ?UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E2044 (-UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@wi.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180095630 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 */

void __fastcall CGlobalTimeTrackVisual::ReleaseTransitionHandler(CGlobalTimeTrackVisual *this)
{
  _QWORD *v1; // rbx
  char v2; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)((char *)this + 240);
  if ( (char *)this + 240 != &v2 )
  {
    if ( *v1 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)this + 30);
    *v1 = 0LL;
  }
}
