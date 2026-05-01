/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_985bae7315308d415c04588d298dcf5f_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805E7DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031CA3C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>,_lambda_985bae7315308d415c04588d298dcf5f_>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           (winrt::impl::implements_delegate_base *)(a1 + 8),
           a2,
           a3,
           a1,
           &winrt::impl::guid_v<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>>);
}
