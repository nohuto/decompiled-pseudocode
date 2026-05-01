/*
 * XREFs of ?AllowPackageInstall@WebExperiencePackageHelper@@UEAA_NXZ @ 0x1805CD490
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4038 (-IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D45D8 (-IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4C88 (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 */

bool __fastcall WebExperiencePackageHelper::AllowPackageInstall(WebExperiencePackageHelper *this)
{
  LockScreenWidgetPackageHelperBase *v1; // rcx

  return (*((_DWORD *)this + 2) || LockScreenWidgetPackageHelperBase::IsAutomaticInstallAllowedByPolicy(this))
      && LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(this)
      && LockScreenWidgetPackageHelperBase::IsNetworkAvailableAndNotConstrained(v1);
}
