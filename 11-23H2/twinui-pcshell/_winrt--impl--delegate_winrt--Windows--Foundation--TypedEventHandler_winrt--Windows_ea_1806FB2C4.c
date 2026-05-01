/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Devices::Enumeration::DeviceWatcher_winrt::Windows::Devices::Enumeration::DeviceInformationUpdate___lambda_bdd475ef09d898a6618fcd9d3d6eaccf___::Invoke_::_1_::catch$0 @ 0x1806FB2C4
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Devices::Enumeration::DeviceWatcher_winrt::Windows::Devices::Enumeration::DeviceInformationUpdate___lambda_bdd475ef09d898a6618fcd9d3d6eaccf___::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
