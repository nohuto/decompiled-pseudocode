/*
 * XREFs of ?SetTransitionHandler@CGlobalTimeTrackVisual@@QEAAXUScreenRotationTransition@Private@Transitions@Udwm@winrt@@@Z @ 0x1800EC324
 * Callers:
 *     ?DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RotationTimelineReason@23456@@Z @ 0x1800E0914 (-DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180095630 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??$make_weak@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA?AU?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@0@AEBUITransitionState@Transitions@Udwm@0@@Z @ 0x1800E4BE8 (--$make_weak@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA-AU-$weak_ref@UITransitionState.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGlobalTimeTrackVisual::SetTransitionHandler(
        __int64 a1,
        winrt::Udwm::Transitions::AnimationCompletedHandler *a2)
{
  __int64 *v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  winrt::Udwm::Transitions::AnimationCompletedHandler *v8; // [rsp+38h] [rbp+10h]

  v8 = a2;
  v4 = winrt::make_weak<winrt::Udwm::Transitions::ITransitionState>(&v7, a2);
  v5 = (__int64 *)(a1 + 240);
  if ( v5 != v4 )
  {
    if ( *v5 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(v5);
    v6 = *v4;
    *v4 = 0LL;
    *v5 = v6;
  }
  if ( v7 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v7);
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler(a2);
}
