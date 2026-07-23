/*
 * XREFs of CmpAcquireShutdownRundown @ 0x140BBB400
 * Callers:
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpSaveBootControlSet @ 0x1407CCC54 (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407CF8D0 (CmOpenKeyForBugCheckRecovery.c)
 *     CmpAcceptBoot @ 0x1407CFA84 (CmpAcceptBoot.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407CFB50 (CmpHandlePageFileOpenNotification.c)
 *     NtCompactKeys @ 0x1407CFC40 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407CFEE0 (NtCompressKey.c)
 *     NtLockRegistryKey @ 0x1407D0270 (NtLockRegistryKey.c)
 *     NtOpenRegistryTransaction @ 0x1407D0350 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x1407D0490 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D06A0 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1407D09C0 (NtRenameKey.c)
 *     NtRestoreKey @ 0x1407D11D0 (NtRestoreKey.c)
 *     NtRollbackRegistryTransaction @ 0x1407D1440 (NtRollbackRegistryTransaction.c)
 *     NtSaveMergedKeys @ 0x1407D1580 (NtSaveMergedKeys.c)
 *     CmReconcileAndValidateAllHives @ 0x1407D83B0 (CmReconcileAndValidateAllHives.c)
 *     CmFreezeRegistry @ 0x1407D896C (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407D8B30 (CmThawRegistry.c)
 *     CmpAssignKeySecurity @ 0x1407DCF10 (CmpAssignKeySecurity.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     NtQueryKey @ 0x140845A20 (NtQueryKey.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x14086DAE0 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x14086EB40 (NtSetValueKey.c)
 *     CmpConstructNameWithStatus @ 0x140879DE0 (CmpConstructNameWithStatus.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140880200 (CmCallbackGetKeyObjectIDEx.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1409331F0 (CmpReorganizeHive.c)
 *     NtSetInformationKey @ 0x140960DB0 (NtSetInformationKey.c)
 *     NtQueryMultipleValueKey @ 0x1409618D0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x1409622A0 (NtDeleteValueKey.c)
 *     CmpDoLocalizeNextHive @ 0x14096CAA0 (CmpDoLocalizeNextHive.c)
 *     NtOpenKeyTransactedEx @ 0x1409DE6B0 (NtOpenKeyTransactedEx.c)
 *     CmOpenKey @ 0x1409DE810 (CmOpenKey.c)
 *     NtCommitRegistryTransaction @ 0x140A00B00 (NtCommitRegistryTransaction.c)
 *     CmpCloseLightWeightTransaction @ 0x140A02690 (CmpCloseLightWeightTransaction.c)
 *     CmCreateKey @ 0x140A1B2F4 (CmCreateKey.c)
 *     NtCreateRegistryTransaction @ 0x140A43150 (NtCreateRegistryTransaction.c)
 *     CmpForceFlushWorker @ 0x140A4AFD0 (CmpForceFlushWorker.c)
 *     NtSaveKeyEx @ 0x140A67430 (NtSaveKeyEx.c)
 *     NtFlushKey @ 0x140A6F280 (NtFlushKey.c)
 *     NtCreateKeyTransacted @ 0x140AE53E0 (NtCreateKeyTransacted.c)
 *     NtEnumerateKey @ 0x140AE5580 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AE5AA0 (NtQueryValueKey.c)
 *     CmSaveKeyToBuffer @ 0x140BBB010 (CmSaveKeyToBuffer.c)
 *     CmGetSystemDriverList @ 0x140C64DD4 (CmGetSystemDriverList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
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
