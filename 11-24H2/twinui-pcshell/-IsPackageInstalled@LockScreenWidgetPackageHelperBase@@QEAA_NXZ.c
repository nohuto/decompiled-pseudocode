/*
 * XREFs of ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ @ 0x1805D4904
 * Callers:
 *     ?AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ @ 0x1805CD390 (-AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ.c)
 *     ?AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ @ 0x1805CD4D0 (-AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805D35C0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D67E0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_1805D67E0.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180054754 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersion@ApplicationModel@Windows@3@@Z @ 0x1805D46C4 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersi.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall LockScreenWidgetPackageHelperBase::IsPackageInstalled(LockScreenWidgetPackageHelperBase *this)
{
  LockScreenWidgetPackageHelperBase *v1; // rbx
  struct winrt::impl::shared_hstring_header **v2; // rax
  LockScreenWidgetPackageHelperBase *v3; // rcx
  struct winrt::impl::shared_hstring_header *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  v2 = winrt::hstring::hstring(&v5, (__int64)this + 32);
  LOBYTE(v1) = LockScreenWidgetPackageHelperBase::IsPackageInstalled(
                 v3,
                 (const struct winrt::hstring *)v2,
                 (LockScreenWidgetPackageHelperBase *)((char *)v1 + 80));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v5);
  return (char)v1;
}
