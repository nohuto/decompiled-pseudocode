/*
 * XREFs of CmpIsRegistryLockAcquired @ 0x140206FB0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140206830 (CmpDoQueryKeyName.c)
 *     NtRenameKey @ 0x1407C0DC0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407C1280 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407C15D0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1407C1980 (NtSaveMergedKeys.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     CmpDeleteKeyObject @ 0x14084B6B0 (CmpDeleteKeyObject.c)
 *     CmPostCallbackNotification @ 0x14084BE60 (CmPostCallbackNotification.c)
 *     CmPostCallbackNotificationEx @ 0x14084BF60 (CmPostCallbackNotificationEx.c)
 *     NtQueryKey @ 0x14084D9C0 (NtQueryKey.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     CmpParseKey @ 0x14085EAA0 (CmpParseKey.c)
 *     NtSetInformationKey @ 0x140862E30 (NtSetInformationKey.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 *     NtSetValueKey @ 0x140869680 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14086CE00 (NtDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 *     NtQueryMultipleValueKey @ 0x140995DD0 (NtQueryMultipleValueKey.c)
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 *     NtSaveKeyEx @ 0x140A6BD80 (NtSaveKeyEx.c)
 *     NtFlushKey @ 0x140A73170 (NtFlushKey.c)
 *     NtEnumerateKey @ 0x140AD2D00 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 * Callees:
 *     CmpThreadInfoLogStack @ 0x14020704C (CmpThreadInfoLogStack.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140301360 (ExIsResourceAcquiredSharedLite.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

ULONG CmpIsRegistryLockAcquired()
{
  _KAFFINITY_EX *UserAffinity; // rax
  __int64 v2; // [rsp+30h] [rbp+8h]

  v2 = (unsigned int)Feature_AccessRegistryLockAcquireCount__private_featureState;
  if ( (Feature_AccessRegistryLockAcquireCount__private_featureState & 0x10) == 0 )
  {
    LODWORD(v2) = Feature_AccessRegistryLockAcquireCount__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_AccessRegistryLockAcquireCount__private_descriptor,
      v2,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v2,
      3LL,
      &Feature_AccessRegistryLockAcquireCount__private_descriptor);
  }
  UserAffinity = KeGetCurrentThread()[1].UserAffinity;
  if ( UserAffinity )
    return UserAffinity->Bitmap[0];
  CmpThreadInfoLogStack();
  return ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
}
