/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs_winrt::Windows::Internal::Shell::IRemoteDesktopStateChangedEventArgs_::get_DesktopId_::_1_::catch$4 @ 0x180733ECA
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs_winrt::Windows::Internal::Shell::IRemoteDesktopStateChangedEventArgs_::get_DesktopId_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 32) = *winrt::to_hresult((_DWORD *)(a2 + 32));
  return 0LL;
}
