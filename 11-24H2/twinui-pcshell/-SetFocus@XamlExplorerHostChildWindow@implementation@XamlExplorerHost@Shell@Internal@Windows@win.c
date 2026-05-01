/*
 * XREFs of ?SetFocus@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18017F168
 * Callers:
 *     ?SetFocus@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHXZ @ 0x180450C00 (-SetFocus@-$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?CreateInstance@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory@UIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x18004DEBC (-CreateInstance@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory@UIShellViewCoordinato.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasFocus@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800C6674 (-HasFocus@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@H.c)
 *     ?NavigateFocus@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Windows@3@@Z @ 0x18017F2E0 (-NavigateFocus@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSou.c)
 *     ??$call@AEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@?$factory_cache_entry@UXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Windows@winrt@@UIXamlSourceFocusNavigationRequestFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@Z @ 0x180450578 (--$call@AEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@-$factory_cache_entry@UXamlSourceFocusNa.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::SetFocus(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *this,
        char a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF

  v4 = (__int64 *)((char *)this + 32);
  if ( !*((_QWORD *)this + 4) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x93,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow.cpp",
      (const char *)0x8007139FLL,
      v6[0]);
  if ( !winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::HasFocus(v4) )
  {
    SetFocus(*((HWND *)this + 8));
    if ( a2 )
    {
      v8 = 3;
      v6[0] = &v8;
      v6[1] = &qword_1808CB738;
      _InterlockedIncrement64(&qword_1808CB738);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory> )
      {
        winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::CreateInstance(
          (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>,
          &v9,
          &v8);
        _InterlockedDecrement64(&qword_1808CB738);
      }
      else
      {
        _InterlockedDecrement64(&qword_1808CB738);
        winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>::call<_lambda_3207e8c3a392af88c709c9f0a8afe0f7_ &>(
          v5,
          &v9,
          v6);
      }
      winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::NavigateFocus(
        v4,
        &v10,
        &v9);
      if ( v10 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
      if ( v9 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
    }
  }
}
