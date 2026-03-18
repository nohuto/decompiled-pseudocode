/*
 * XREFs of wil_details_IsEnabledFallback @ 0x140019BA8
 * Callers:
 *     Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledFallback @ 0x140017710 (Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledFallback.c)
 *     Feature_FixModernStandbyDRIPSForMultipleSSDInStorNVMe__private_IsEnabledFallback @ 0x140017764 (Feature_FixModernStandbyDRIPSForMultipleSSDInStorNVMe__private_IsEnabledFallback.c)
 *     Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_IsEnabledFallback @ 0x1400177B8 (Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_IsEnabledFallback.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x14001780C (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback.c)
 *     Feature_VsFidTimeoutOverride__private_IsEnabledFallback @ 0x140017898 (Feature_VsFidTimeoutOverride__private_IsEnabledFallback.c)
 *     Feature_EnableAENAtEndOfDeviceInit__private_IsEnabledFallback @ 0x140019F64 (Feature_EnableAENAtEndOfDeviceInit__private_IsEnabledFallback.c)
 *     Feature_PLDRFixes__private_IsEnabledFallback @ 0x140019FB8 (Feature_PLDRFixes__private_IsEnabledFallback.c)
 *     Feature_EnableLunValidCheckContainment__private_IsEnabledFallback @ 0x14001F758 (Feature_EnableLunValidCheckContainment__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14001974C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1400198F8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140019A08 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  char v6; // di

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2, 1LL);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
