/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventHandler__lambda_72e1dcf1d191a1fe628d31ef24d41038___::QueryInterface @ 0x1806ACD00
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031CA3C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventHandler__lambda_72e1dcf1d191a1fe628d31ef24d41038___::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           (winrt::impl::implements_delegate_base *)(a1 + 8),
           a2,
           a3,
           a1,
           winrt::impl::guid_v<winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventHandler>);
}
