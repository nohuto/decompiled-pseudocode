/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs_winrt::Windows::Internal::Shell::IRemoteSystemDisplayInfoChangedEventArgs_::get_DisplayName_::_1_::catch$9 @ 0x18072B11A
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs_winrt::Windows::Internal::Shell::IRemoteSystemDisplayInfoChangedEventArgs_::get_DisplayName_::_1_::catch_9(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
