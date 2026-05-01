/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel_winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics_::UpdateDataForWindow_::_1_::catch$1 @ 0x180719C4E
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel_winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics_::UpdateDataForWindow_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
