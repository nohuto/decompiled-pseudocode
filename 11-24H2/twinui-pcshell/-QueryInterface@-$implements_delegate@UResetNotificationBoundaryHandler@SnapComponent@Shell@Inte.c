/*
 * XREFs of ?QueryInterface@?$implements_delegate@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_c641cc6ff6de73950a986fb691f59c91_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805B9F30
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031CA3C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler,_lambda_c641cc6ff6de73950a986fb691f59c91_>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           (winrt::impl::implements_delegate_base *)(a1 + 8),
           a2,
           a3,
           a1,
           &winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>);
}
