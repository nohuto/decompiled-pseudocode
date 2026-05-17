/*
 * XREFs of wil_details_IsEnabledFallback @ 0x18009F194
 * Callers:
 *     Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledFallback @ 0x180110A48 (Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledFallback.c)
 *     Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledFallback @ 0x18011E8D0 (Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledFallback.c)
 *     Feature_FasterCrc32__private_IsEnabledFallback @ 0x180122008 (Feature_FasterCrc32__private_IsEnabledFallback.c)
 *     Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledFallback @ 0x18013C18C (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledFallback.c)
 *     Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledFallback @ 0x180147114 (Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledFallback.c)
 *     Feature_AdditionalProcessorFeatures__private_IsEnabledFallback @ 0x180160300 (Feature_AdditionalProcessorFeatures__private_IsEnabledFallback.c)
 *     Feature_Arm64RestoreRegistersAroundDllMain__private_IsEnabledFallback @ 0x180160EA8 (Feature_Arm64RestoreRegistersAroundDllMain__private_IsEnabledFallback.c)
 *     Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledFallback @ 0x1801620C8 (Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledFallback.c)
 *     Feature_PackagedComElevationSupport__private_IsEnabledFallback @ 0x180162184 (Feature_PackagedComElevationSupport__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x18009F230 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x18009FD1C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1800A0084 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
