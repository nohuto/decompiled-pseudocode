/*
 * XREFs of CmpAcquireShutdownRundown @ 0x140BB9400
 * Callers:
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpSaveBootControlSet @ 0x1407CC764 (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407CF3E0 (CmOpenKeyForBugCheckRecovery.c)
 *     CmpAcceptBoot @ 0x1407CF594 (CmpAcceptBoot.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407CF660 (CmpHandlePageFileOpenNotification.c)
 *     NtCompactKeys @ 0x1407CF750 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407CF9F0 (NtCompressKey.c)
 *     NtLockRegistryKey @ 0x1407CFD80 (NtLockRegistryKey.c)
 *     NtOpenRegistryTransaction @ 0x1407CFE60 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x1407CFFA0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D01B0 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1407D04D0 (NtRenameKey.c)
 *     NtRestoreKey @ 0x1407D0CE0 (NtRestoreKey.c)
 *     NtRollbackRegistryTransaction @ 0x1407D0F50 (NtRollbackRegistryTransaction.c)
 *     NtSaveMergedKeys @ 0x1407D1090 (NtSaveMergedKeys.c)
 *     CmReconcileAndValidateAllHives @ 0x1407D7E5C (CmReconcileAndValidateAllHives.c)
 *     CmFreezeRegistry @ 0x1407D841C (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407D85E0 (CmThawRegistry.c)
 *     CmpAssignKeySecurity @ 0x1407DC9C0 (CmpAssignKeySecurity.c)
 *     NtQueryKey @ 0x140849760 (NtQueryKey.c)
 *     CmpSecurityMethod @ 0x140852E10 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x1408697B0 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x14086A810 (NtSetValueKey.c)
 *     CmpConstructNameWithStatus @ 0x140875AB0 (CmpConstructNameWithStatus.c)
 *     CmpConstructName @ 0x1408763E0 (CmpConstructName.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14087C350 (CmCallbackGetKeyObjectIDEx.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1409310B0 (CmpReorganizeHive.c)
 *     NtSetInformationKey @ 0x1409785A0 (NtSetInformationKey.c)
 *     NtQueryMultipleValueKey @ 0x1409790C0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x140979A90 (NtDeleteValueKey.c)
 *     CmpDoLocalizeNextHive @ 0x140984290 (CmpDoLocalizeNextHive.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 *     NtOpenKeyTransactedEx @ 0x1409E3C50 (NtOpenKeyTransactedEx.c)
 *     CmOpenKey @ 0x1409E3DB0 (CmOpenKey.c)
 *     NtCommitRegistryTransaction @ 0x140A045D0 (NtCommitRegistryTransaction.c)
 *     CmpCloseLightWeightTransaction @ 0x140A06160 (CmpCloseLightWeightTransaction.c)
 *     CmCreateKey @ 0x140A26874 (CmCreateKey.c)
 *     NtCreateRegistryTransaction @ 0x140A4C5C0 (NtCreateRegistryTransaction.c)
 *     CmpForceFlushWorker @ 0x140A52FE0 (CmpForceFlushWorker.c)
 *     NtSaveKeyEx @ 0x140A6DF30 (NtSaveKeyEx.c)
 *     NtFlushKey @ 0x140A74F60 (NtFlushKey.c)
 *     NtCreateKeyTransacted @ 0x140AE3B00 (NtCreateKeyTransacted.c)
 *     NtEnumerateKey @ 0x140AE3CA0 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AE41C0 (NtQueryValueKey.c)
 *     CmSaveKeyToBuffer @ 0x140BB9010 (CmSaveKeyToBuffer.c)
 *     CmGetSystemDriverList @ 0x140C62C58 (CmGetSystemDriverList.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x140247210 (ExfAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 */

BOOLEAN __fastcall CmpAcquireShutdownRundown()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v1; // rtt
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v1 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v1 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    return 1;
  result = ExfAcquireRundownProtection(&CmpShutdownRundown);
  if ( !result )
  {
    KeLeaveCriticalRegionThread();
    return 0;
  }
  return result;
}
