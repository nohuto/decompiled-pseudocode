/*
 * XREFs of ?CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F7880
 * Callers:
 *     ?OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F7B10 (-OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transiti.c)
 *     ?PreTransition@?$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHHPEAX@Z @ 0x1800F7F30 (-PreTransition@-$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180047100 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Complete@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800F1544 (-Complete@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::CompleteState(
        winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *this)
{
  winrt::Windows::Foundation::IUnknown *v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v1 = (winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *)((char *)this + 24);
  if ( !winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 3, &v3) )
  {
    winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::Complete(v1);
    if ( v1 != (winrt::Windows::Foundation::IUnknown *)&v3 )
    {
      if ( *(_QWORD *)v1 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v1);
      *(_QWORD *)v1 = 0LL;
    }
  }
  *((_BYTE *)this + 72) = 0;
}
