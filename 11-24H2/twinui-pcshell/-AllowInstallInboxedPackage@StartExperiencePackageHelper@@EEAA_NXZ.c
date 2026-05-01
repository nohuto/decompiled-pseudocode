/*
 * XREFs of ?AllowInstallInboxedPackage@StartExperiencePackageHelper@@EEAA_NXZ @ 0x1805CD340
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEdgePackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D40D0 (-IsEdgePackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4C88 (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 */

bool __fastcall StartExperiencePackageHelper::AllowInstallInboxedPackage(StartExperiencePackageHelper *this)
{
  LockScreenWidgetPackageHelperBase *v1; // rcx

  return LockScreenWidgetPackageHelperBase::IsEdgePackageInstalled(this)
      && LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(v1);
}
