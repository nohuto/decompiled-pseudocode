/*
 * XREFs of ??0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ @ 0x1802BF3F0
 * Callers:
 *     ?ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPackageId@ApplicationModel@56@@Z @ 0x180052C74 (-ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPa.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803BC17C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA?AUPackageVersion@ApplicationModel@Windows@winrt@@AEBUhstring@5@@Z @ 0x1805D2600 (-GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA-AUPackageVersion@Application.c)
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1 @ 0x1805D2D00 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805D35C0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersion@ApplicationModel@Windows@3@@Z @ 0x1805D46C4 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersi.c)
 *     LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1 @ 0x1805D8B90 (LockScreenWidgetPackageHelperBase--TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1.c)
 *     ?IsCopilotPWAInstalled@CopilotHotkeyManager@@QEAA_NXZ @ 0x1806269CC (-IsCopilotPWAInstalled@CopilotHotkeyManager@@QEAA_NXZ.c)
 *     ?IsTargetAppPackageInstalled@CopilotHotkeyManager@@QEAA_NXZ @ 0x180632580 (-IsTargetAppPackageInstalled@CopilotHotkeyManager@@QEAA_NXZ.c)
 * Callees:
 *     ??$ActivateInstance@UPackageManager@Deployment@Management@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUPackageManager@Deployment@Management@23@XZ @ 0x180242988 (--$ActivateInstance@UPackageManager@Deployment@Management@Windows@winrt@@@IActivationFactory@Fou.c)
 *     ??$call@P6A?AUPackageManager@Deployment@Management@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UPackageManager@Deployment@Management@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUPackageManager@Deployment@Management@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x1803B0420 (--$call@P6A-AUPackageManager@Deployment@Management@Windows@winrt@@AEBUIActivationFactory@Foundat.c)
 */

struct IUnknown *__fastcall winrt::Windows::Management::Deployment::PackageManager::PackageManager(
        struct IUnknown *this)
{
  __int64 (__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_1808CA458);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Management::Deployment::PackageManager>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_1808CA458);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CA458);
    v3 = _lambda_6fd1ee5d6179fa7e6cafc7c7248cd72e_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Management::Deployment::PackageManager (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      this,
      &v3);
  }
  return this;
}
