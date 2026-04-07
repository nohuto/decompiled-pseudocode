/*
 * XREFs of ??0?$producers_base@UTransitionState@implementation@Transitions@Udwm@winrt@@V?$tuple@UTransitionState@Transitions@Udwm@winrt@@UITransitionStateNative@@UITransitionStateNativePrivate@@@std@@@impl@winrt@@QEAA@XZ @ 0x18009685C
 * Callers:
 *     ??0TransitionState@implementation@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004D3B0 (--0TransitionState@implementation@Transitions@Udwm@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@X@impl@winrt@@QEAA@XZ @ 0x18008A630 (--0-$producer_convert@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@X@impl@winrt.c)
 */

_QWORD *winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TransitionState,std::tuple<winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>>::producers_base<winrt::Udwm::Transitions::implementation::TransitionState,std::tuple<winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>>()
{
  _QWORD *v0; // r8
  _QWORD *result; // rax

  winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,void>::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,void>();
  v0[1] = &winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,std::tuple<winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>>::`vftable';
  result = v0;
  *v0 = &winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TransitionState,std::tuple<winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>>::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,ITransitionStateNative,void>'};
  return result;
}
