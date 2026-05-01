/*
 * XREFs of ?GetIids@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@34@PEAUHWND__@@_NAEBURect@234@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805C0950
 * Callers:
 *     <none>
 * Callees:
 *     __Platform_CoTaskMemAlloc @ 0x1802D2C0D (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

__int64 __fastcall winrt::impl::produce_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HMONITOR__ *,winrt::Windows::UI::Xaml::FrameworkElement const &,HWND__ *,bool,winrt::Windows::Foundation::Rect const &>::promise_type,winrt::Windows::Foundation::IAsyncInfo,void>::GetIids(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void *v4; // rax
  unsigned int v5; // ebx

  *a2 = 2;
  v4 = _Platform_CoTaskMemAlloc(0x20uLL);
  *a3 = v4;
  v5 = 0;
  if ( v4 )
    memmove_0(
      v4,
      &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::IAsyncInfo>>::value,
      0x20uLL);
  else
    return (unsigned int)-2147024882;
  return v5;
}
