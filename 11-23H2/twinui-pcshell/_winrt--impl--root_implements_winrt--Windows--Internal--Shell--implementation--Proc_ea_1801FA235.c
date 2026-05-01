/*
 * XREFs of _winrt::impl::root_implements_winrt::Windows::Internal::Shell::implementation::ProcessTracker_winrt::Windows::Internal::Shell::ProcessTracker_::NonDelegatingGetTrustLevel_::_1_::catch$0 @ 0x1801FA235
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::root_implements_winrt::Windows::Internal::Shell::implementation::ProcessTracker_winrt::Windows::Internal::Shell::ProcessTracker_::NonDelegatingGetTrustLevel_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
