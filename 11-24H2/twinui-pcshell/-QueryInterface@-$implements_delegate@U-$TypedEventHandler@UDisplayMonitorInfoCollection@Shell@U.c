/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@UDisplayMonitorInfoChangedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_ab73a47a7e52d4de79b9df50d88832e4_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802418E0
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031CA3C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection,winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs>,_lambda_ab73a47a7e52d4de79b9df50d88832e4_>::QueryInterface(
        int a1,
        int a2,
        int a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           a1 + 8,
           a2,
           a3,
           a1,
           (__int64)&winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection,winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs>>);
}
