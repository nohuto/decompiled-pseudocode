/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@winrt@@UGuidedSnapAssistCompletedArgs@23456@@Foundation@Windows@winrt@@V_lambda_abb3344ab4be929b6b668a255075dc98_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18026F5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031CA3C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController,winrt::Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs>,_lambda_abb3344ab4be929b6b668a255075dc98_>::QueryInterface(
        int a1,
        int a2,
        int a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           a1 + 8,
           a2,
           a3,
           a1,
           (__int64)&winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController,winrt::Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs>>);
}
