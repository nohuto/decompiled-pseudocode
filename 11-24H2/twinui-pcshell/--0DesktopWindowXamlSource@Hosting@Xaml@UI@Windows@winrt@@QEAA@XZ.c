/*
 * XREFs of ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1800524BC
 * Callers:
 *     ?Initialize@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x180052650 (-Initialize@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@w.c)
 *     ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x180117958 (--0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAE.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@?$factory_cache_entry@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UIDesktopWindowXamlSourceFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@Z @ 0x1801D09AC (--$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@-$factory_cache_entry@UDesktopWindowXaml.c)
 *     ?CreateInstance@?$consume_Microsoft_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x180288FDC (-CreateInstance@-$consume_Microsoft_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Mic.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource *__fastcall winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource(
        winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource *this)
{
  __int64 v3; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v4[4]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v5; // [rsp+48h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp-10h] BYREF

  v4[2] = this;
  *(_QWORD *)this = 0LL;
  v6 = 0LL;
  v5 = 0LL;
  v4[0] = &v6;
  v4[1] = &v5;
  v4[3] = &qword_1808CB758;
  _InterlockedIncrement64(&qword_1808CB758);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory> )
  {
    winrt::impl::consume_Microsoft_UI_Xaml_IApplicationFactory<winrt::Microsoft::UI::Xaml::IApplicationFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>,
      &v3,
      &v6,
      &v5);
    _InterlockedDecrement64(&qword_1808CB758);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CB758);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::call<_lambda_d63d41a61067fdc865c7dff1a7493050_ &>(
      this,
      &v3,
      v4);
  }
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this, &v3);
  if ( v3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v3);
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v5);
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  return this;
}
