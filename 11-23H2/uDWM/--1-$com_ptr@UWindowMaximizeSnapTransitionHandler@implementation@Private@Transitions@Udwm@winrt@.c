/*
 * XREFs of ??1?$com_ptr@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x1800F70EC
 * Callers:
 *     _winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___::Invoke_::_1_::dtor$0 @ 0x1800F7A8D (_winrt--impl--delegate_winrt--Udwm--Transitions--AnimationCompletedHandler__lambda_298ff7ed3f48e.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800F83EC (-unconditional_release_ref@-$com_ptr@UWindowMaximizeSnapTransitionHandler@implementation@Private.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler>::~com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler>::unconditional_release_ref();
  return result;
}
