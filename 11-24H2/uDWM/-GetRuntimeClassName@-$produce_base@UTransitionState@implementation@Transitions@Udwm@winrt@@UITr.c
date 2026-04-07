/*
 * XREFs of ?GetRuntimeClassName@?$produce_base@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800E9560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::ITransitionState,void>::GetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 8;
  if ( !a1 )
    v2 = 24LL;
  return winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::NonDelegatingGetRuntimeClassName(
           v2,
           a2);
}
