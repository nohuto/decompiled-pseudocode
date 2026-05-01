/*
 * XREFs of _winrt::impl::consume_Windows_Foundation_Collections_IVectorView_winrt::Windows::Foundation::Collections::IVectorView_winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension__winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension_::GetAt_::_1_::dtor$0 @ 0x1802BF770
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FBC (--1-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@wi.c)
 */

void __fastcall winrt::impl::consume_Windows_Foundation_Collections_IVectorView_winrt::Windows::Foundation::Collections::IVectorView_winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension__winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension_::GetAt_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 72));
  }
}
