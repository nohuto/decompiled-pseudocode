/*
 * XREFs of CmpRecordRegistryLockAcquire @ 0x1402067A0
 * Callers:
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 * Callees:
 *     CmpThreadInfoLogStack @ 0x14020704C (CmpThreadInfoLogStack.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

_KAFFINITY_EX *CmpRecordRegistryLockAcquire()
{
  _KAFFINITY_EX *result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_AccessRegistryLockAcquireCount__private_featureState;
  if ( (Feature_AccessRegistryLockAcquireCount__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_AccessRegistryLockAcquireCount__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_AccessRegistryLockAcquireCount__private_descriptor,
      v1,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3LL,
      &Feature_AccessRegistryLockAcquireCount__private_descriptor);
  }
  result = KeGetCurrentThread()[1].UserAffinity;
  if ( !result )
    return (_KAFFINITY_EX *)CmpThreadInfoLogStack();
  ++LODWORD(result->Bitmap[0]);
  return result;
}
