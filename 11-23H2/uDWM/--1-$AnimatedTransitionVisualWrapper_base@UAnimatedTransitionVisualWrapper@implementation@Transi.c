/*
 * XREFs of ??1?$AnimatedTransitionVisualWrapper_base@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@34@@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800ECEA8
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::AnimatedTransitionVisualWrapper_::_1_::dtor$0 @ 0x1800ECDB9 (_winrt--Udwm--Transitions--implementation--AnimatedTransitionVisualWrapper--AnimatedTransitionVi.c)
 *     _winrt::Udwm::Transitions::implementation::UserResizeVisual::UserResizeVisual_::_1_::dtor$0 @ 0x180104054 (_winrt--Udwm--Transitions--implementation--UserResizeVisual--UserResizeVisual_--_1_--dtor$0.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x18006EC70 (-subtract_reference@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transition.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::~AnimatedTransitionVisualWrapper_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>(
        __int64 a1)
{
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::subtract_reference(a1 + 16);
  return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
