/*
 * XREFs of _lambda_545816354afdfcb0efb7a4f85f5e27cb_::__lambda_545816354afdfcb0efb7a4f85f5e27cb_ @ 0x18004A518
 * Callers:
 *     winrt::Udwm::Transitions::AnimationCompletedHandler::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___ @ 0x18004A91C (winrt--Udwm--Transitions--AnimationCompletedHandler--AnimationCompletedHandler__lambda_7747b62f3.c)
 *     std::_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_::_Delete_this @ 0x1800852B0 (std--_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_--_Delete_this.c)
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::_implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___ @ 0x18009ABD0 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--AnimationCompletedHandle_ea_18009ABD0.c)
 *     ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800E64A0 (-AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnima.c)
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x1800EB8F0 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 *     _winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete_::_1_::dtor$2 @ 0x1800F8BB7 (_winrt--Udwm--Transitions--implementation--TopLevelWindow3DWrapper--AnimationComple_ea_1800F8BB7.c)
 *     _winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_1_::dtor$2 @ 0x1800F8E53 (_winrt--Udwm--Transitions--implementation--UserResizeVisual--StartHideAnimation_--_1_--dtor$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180095630 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 */

__int64 __fastcall lambda_545816354afdfcb0efb7a4f85f5e27cb_::__lambda_545816354afdfcb0efb7a4f85f5e27cb_(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref();
  return result;
}
