/*
 * XREFs of ?SetWindowRegion@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@67@@Z @ 0x180454270
 * Callers:
 *     ?SetWindowRegion@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x180454220 (-SetWindowRegion@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@I.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180206804 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$unbox_value_type@URect@Foundation@Windows@winrt@@AEBUIInspectable@234@@impl@winrt@@YA?AURect@Foundation@Windows@1@AEBUIInspectable@341@@Z @ 0x180453C84 (--$unbox_value_type@URect@Foundation@Windows@winrt@@AEBUIInspectable@234@@impl@winrt@@YA-AURect@.c)
 */

void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::SetWindowRegion(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *this,
        struct IInspectable *a2)
{
  HRGN RectRgn; // rax
  HWND v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  HRGN v6; // [rsp+30h] [rbp-18h] BYREF

  if ( a2->lpVtbl )
  {
    winrt::impl::unbox_value_type<winrt::Windows::Foundation::Rect,winrt::Windows::Foundation::IInspectable const &>(
      &v5,
      a2);
    RectRgn = CreateRectRgn(
                (int)*(float *)&v5,
                (int)*((float *)&v5 + 1),
                (int)*(float *)&v5 + (int)*((float *)&v5 + 2),
                (int)*((float *)&v5 + 1) + (int)*((float *)&v5 + 3));
    v4 = (HWND)*((_QWORD *)this + 5);
    v6 = RectRgn;
    SetWindowRgn(v4, RectRgn, 1);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&v6);
  }
  else
  {
    SetWindowRgn(*((HWND *)this + 5), 0LL, 1);
  }
}
