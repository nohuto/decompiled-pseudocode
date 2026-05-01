/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::RemoteSystem_winrt::Windows::Internal::Shell::IRemoteSystem_::put_State_::_1_::catch$4 @ 0x18072A662
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::RemoteSystem_winrt::Windows::Internal::Shell::IRemoteSystem_::put_State_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 56) = *winrt::to_hresult((_DWORD *)(a2 + 56));
  return 0LL;
}
