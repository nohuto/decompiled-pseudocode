/*
 * XREFs of ?AddRef@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@UEAAKXZ @ 0x1800E6DC0
 * Callers:
 *     ?AddRef@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@W7EAAKXZ @ 0x1800E6DD0 (-AddRef@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@_ea_1800E6DD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::AddRef(a1 + 24);
}
