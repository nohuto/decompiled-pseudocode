/*
 * XREFs of ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ @ 0x180451958
 * Callers:
 *     ?Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x1804525CC (-Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 *     ??0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x180454C1C (--0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??R_lambda_9da9a377ea2426f3d5421a6be20021de_@@QEBA@AEBUIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Microsoft@winrt@@@Z @ 0x1801D0980 (--R_lambda_9da9a377ea2426f3d5421a6be20021de_@@QEBA@AEBUIDesktopWindowXamlSourceFactory@Hosting@X.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$call@AEAV_lambda_9da9a377ea2426f3d5421a6be20021de_@@@?$factory_cache_entry@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@UIDesktopWindowXamlSourceFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_9da9a377ea2426f3d5421a6be20021de_@@@Z @ 0x1804513C0 (--$call@AEAV_lambda_9da9a377ea2426f3d5421a6be20021de_@@@-$factory_cache_entry@UDesktopWindowXaml.c)
 */

// Hidden C++ exception states: #wind=4
winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource *__fastcall winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource(
        winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource *this)
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
  v4[3] = &qword_1808CB898;
  _InterlockedIncrement64(&qword_1808CB898);
  if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory> )
  {
    _lambda_9da9a377ea2426f3d5421a6be20021de_::operator()(
      v4,
      (__int64)&v3,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>);
    _InterlockedDecrement64(&qword_1808CB898);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CB898);
    winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::call<_lambda_9da9a377ea2426f3d5421a6be20021de_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)&v3,
      v4);
  }
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this, &v3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v5);
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  return this;
}
