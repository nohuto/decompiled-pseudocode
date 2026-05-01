/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@UIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_b7adc96a5bea5400a0c4e7ac87874578_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180363EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031CA3C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs>,_lambda_b7adc96a5bea5400a0c4e7ac87874578_>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           (winrt::impl::implements_delegate_base *)(a1 + 8),
           a2,
           a3,
           a1,
           winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs>>);
}
