/*
 * XREFs of ?SetFocus@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x1800C6F2C
 * Callers:
 *     ?SetFocus2@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAH_N@Z @ 0x1800C6FE0 (-SetFocus2@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@In.c)
 *     ?SetFocus@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAHXZ @ 0x180452DB0 (-SetFocus@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Int.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800C6394 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?HasFocus@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800C6674 (-HasFocus@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@H.c)
 *     ??0XamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@AEBW4XamlSourceFocusNavigationReason@12345@@Z @ 0x180451BAC (--0XamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@AEBW4XamlSourceFocusNa.c)
 *     ?NavigateFocus@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Microsoft@3@@Z @ 0x1804526AC (-NavigateFocus@-$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlS.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::SetFocus(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *this,
        char a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  char v9; // [rsp+50h] [rbp+18h] BYREF
  char v10; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v4 = (__int64 *)((char *)this + 56);
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 7, &v8) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x96,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow_WASDK.cpp",
      (const char *)0x8007139FLL,
      v6);
  if ( !winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::HasFocus(v4) )
  {
    SetFocus(*((HWND *)this + 10));
    if ( a2 )
    {
      LODWORD(v8) = 3;
      v5 = winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest::XamlSourceFocusNavigationRequest(
             (winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest *)&v10,
             (const enum winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationReason *)&v8);
      winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>::NavigateFocus(
        v4,
        &v9,
        v5);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
    }
  }
}
