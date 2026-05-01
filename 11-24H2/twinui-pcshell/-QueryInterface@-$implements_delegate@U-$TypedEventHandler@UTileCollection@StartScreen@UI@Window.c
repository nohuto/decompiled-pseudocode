/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UTileAddedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_e4b2097ec4fe308a5db33641a3ff4a41_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180284740
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031CA3C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::TileAddedEventArgs>,_lambda_e4b2097ec4fe308a5db33641a3ff4a41_>::QueryInterface(
        int a1,
        int a2,
        int a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           a1 + 8,
           a2,
           a3,
           a1,
           (__int64)&winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::TileAddedEventArgs>>);
}
