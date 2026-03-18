/*
 * XREFs of CmpReleaseShutdownRundown @ 0x140BA9970
 * Callers:
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpSaveBootControlSet @ 0x1407BCF4C (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407BFCB0 (CmOpenKeyForBugCheckRecovery.c)
 *     CmpAcceptBoot @ 0x1407BFEA8 (CmpAcceptBoot.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407BFF74 (CmpHandlePageFileOpenNotification.c)
 *     NtCompactKeys @ 0x1407C0060 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407C02F0 (NtCompressKey.c)
 *     NtLockRegistryKey @ 0x1407C0680 (NtLockRegistryKey.c)
 *     NtOpenRegistryTransaction @ 0x1407C0760 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x1407C08A0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407C0AA0 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1407C0DC0 (NtRenameKey.c)
 *     NtRestoreKey @ 0x1407C15D0 (NtRestoreKey.c)
 *     NtRollbackRegistryTransaction @ 0x1407C1840 (NtRollbackRegistryTransaction.c)
 *     NtSaveMergedKeys @ 0x1407C1980 (NtSaveMergedKeys.c)
 *     CmReconcileAndValidateAllHives @ 0x1407C86CC (CmReconcileAndValidateAllHives.c)
 *     CmFreezeRegistry @ 0x1407C8C7C (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407C8E40 (CmThawRegistry.c)
 *     CmpAssignKeySecurity @ 0x1407CD200 (CmpAssignKeySecurity.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     NtQueryKey @ 0x14084D9C0 (NtQueryKey.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     NtSetInformationKey @ 0x140862E30 (NtSetInformationKey.c)
 *     CmpCloseLightWeightTransaction @ 0x140866F90 (CmpCloseLightWeightTransaction.c)
 *     NtSetValueKey @ 0x140869680 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14086CE00 (NtDeleteValueKey.c)
 *     CmpConstructNameWithStatus @ 0x140879740 (CmpConstructNameWithStatus.c)
 *     CmpConstructName @ 0x14087A050 (CmpConstructName.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14087E720 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 *     NtQueryMultipleValueKey @ 0x140995DD0 (NtQueryMultipleValueKey.c)
 *     NtCommitRegistryTransaction @ 0x1409D8FB0 (NtCommitRegistryTransaction.c)
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 *     NtOpenKeyTransactedEx @ 0x140A315F0 (NtOpenKeyTransactedEx.c)
 *     CmOpenKey @ 0x140A31750 (CmOpenKey.c)
 *     CmpDoLocalizeNextHive @ 0x140A402A0 (CmpDoLocalizeNextHive.c)
 *     NtCreateRegistryTransaction @ 0x140A4ADE0 (NtCreateRegistryTransaction.c)
 *     CmpReorganizeHive @ 0x140A4B428 (CmpReorganizeHive.c)
 *     CmpForceFlushWorker @ 0x140A50B10 (CmpForceFlushWorker.c)
 *     NtSaveKeyEx @ 0x140A6BD80 (NtSaveKeyEx.c)
 *     NtFlushKey @ 0x140A73170 (NtFlushKey.c)
 *     CmCreateKey @ 0x140AD24C0 (CmCreateKey.c)
 *     NtCreateKeyTransacted @ 0x140AD2B50 (NtCreateKeyTransacted.c)
 *     NtEnumerateKey @ 0x140AD2D00 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 *     CmSaveKeyToBuffer @ 0x140BA9010 (CmSaveKeyToBuffer.c)
 *     CmGetSystemDriverList @ 0x140C51914 (CmGetSystemDriverList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 */

__int64 CmpReleaseShutdownRundown()
{
  unsigned __int64 v0; // rtt

  _m_prefetchw(&CmpShutdownRundown);
  v0 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v0 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
