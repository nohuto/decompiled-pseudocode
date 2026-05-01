/*
 * XREFs of ?AllowInstallInboxedPackage@WidgetPlatformPackageHelper@@EEAA_NXZ @ 0x1805CD370
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4C88 (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 */

bool __fastcall WidgetPlatformPackageHelper::AllowInstallInboxedPackage(WidgetPlatformPackageHelper *this)
{
  return LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(this);
}
