/*
 * XREFs of Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage @ 0x1404F3C8C
 * Callers:
 *     KiInitializeVelocity @ 0x140C2A6C8 (KiInitializeVelocity.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_HaltOnAddress_QueuedSpinLock__private_featureState;
  if ( (Feature_HaltOnAddress_QueuedSpinLock__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_HaltOnAddress_QueuedSpinLock__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_HaltOnAddress_QueuedSpinLock__private_descriptor,
      v1,
      3LL,
      1LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_HaltOnAddress_QueuedSpinLock__private_descriptor);
  }
  return result;
}
