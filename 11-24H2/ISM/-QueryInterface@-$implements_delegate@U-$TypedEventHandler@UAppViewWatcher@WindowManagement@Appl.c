/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_e811ed625de1c9f36d6dae6db721db2b_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180086630
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x1800A7F24 (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>,_lambda_e811ed625de1c9f36d6dae6db721db2b_>::QueryInterface(
        int a1,
        int a2,
        int a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           a1 + 8,
           a2,
           a3,
           a1,
           (__int64)&winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>>);
}
