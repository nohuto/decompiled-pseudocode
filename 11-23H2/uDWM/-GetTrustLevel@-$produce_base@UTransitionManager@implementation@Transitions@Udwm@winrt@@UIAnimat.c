/*
 * XREFs of ?GetTrustLevel@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIAnimationsTransitionManager@Private@345@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800FD700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,void>::GetTrustLevel(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 8;
  if ( !a1 )
    v1 = 40LL;
  return winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::NonDelegatingGetTrustLevel(v1);
}
