/*
 * XREFs of _winrt::impl::produce_winrt::Udwm::Transitions::implementation::TransitionState_winrt::Udwm::Transitions::ITransitionState_::Complete_::_1_::catch$1 @ 0x180100FC4
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1800EE9C8 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Udwm::Transitions::implementation::TransitionState_winrt::Udwm::Transitions::ITransitionState_::Complete_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
