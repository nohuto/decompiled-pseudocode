/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel_winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics_::add_WindowAdded_::_1_::catch$4 @ 0x1802C5FEC
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel_winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics_::add_WindowAdded_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
