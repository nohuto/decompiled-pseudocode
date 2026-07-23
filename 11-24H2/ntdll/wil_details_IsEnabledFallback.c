/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1800D0BA8
 * Callers:
 *     Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledFallback @ 0x180108E58 (Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledFallback.c)
 *     Feature_FasterCrc32__private_IsEnabledFallback @ 0x18011E968 (Feature_FasterCrc32__private_IsEnabledFallback.c)
 *     Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledFallback @ 0x1801349B8 (Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledFallback.c)
 *     Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledFallback @ 0x1801349FC (Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledFallback.c)
 *     Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledFallback @ 0x180138C4C (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledFallback.c)
 *     Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledFallback @ 0x18013D0DC (Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledFallback.c)
 *     Feature_ModernWpp__private_IsEnabledFallback @ 0x18015A370 (Feature_ModernWpp__private_IsEnabledFallback.c)
 *     Feature_3078821176__private_IsEnabledFallback @ 0x18015B334 (Feature_3078821176__private_IsEnabledFallback.c)
 *     Feature_PackagedComElevationSupport_v2__private_IsEnabledFallback @ 0x18015EFB0 (Feature_PackagedComElevationSupport_v2__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1800D0C44 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800D0E80 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1800D11E8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, _QWORD *a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService(a3, v6, a2, 1LL);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, a3);
  }
  return v5 & 1;
}
