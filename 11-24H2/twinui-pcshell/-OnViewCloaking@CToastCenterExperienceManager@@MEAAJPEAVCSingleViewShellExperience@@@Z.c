/*
 * XREFs of ?OnViewCloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180224830
 * Callers:
 *     <none>
 * Callees:
 *     ?EM_ViewCloakingActivity@ToastCenterTelemetry@@SAXXZ @ 0x1802975A0 (-EM_ViewCloakingActivity@ToastCenterTelemetry@@SAXXZ.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnViewCloaking(
        CToastCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  ToastCenterTelemetry::EM_ViewCloakingActivity();
  return 0LL;
}
