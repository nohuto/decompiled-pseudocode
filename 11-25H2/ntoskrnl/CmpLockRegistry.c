/*
 * XREFs of CmpLockRegistry @ 0x140BA9570
 * Callers:
 *     CmpDoQueryKeyName @ 0x140206830 (CmpDoQueryKeyName.c)
 *     CmpRecheckHiveVolumePolicy @ 0x140465694 (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x14065C0A4 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 *     CmDumpKeyToFile @ 0x1407BD56C (CmDumpKeyToFile.c)
 *     CmSaveKey @ 0x1407BE3E4 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407BE848 (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x1407BF2D8 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407BFCB0 (CmOpenKeyForBugCheckRecovery.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407C87E4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmReplaceKey @ 0x1407CAB24 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407CCAF8 (CmpFlushBackupHive.c)
 *     CmpAssignKeySecurity @ 0x1407CD200 (CmpAssignKeySecurity.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x1407CEE08 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpDoReOpenTransKey @ 0x1407D7070 (CmpDoReOpenTransKey.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCloseKeyObject @ 0x140845600 (CmpCloseKeyObject.c)
 *     CmpDeleteKeyObject @ 0x14084B6B0 (CmpDeleteKeyObject.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140863588 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14086392C (CmKeyBodyNeedsVirtualImage.c)
 *     CmSetLastWriteTimeKey @ 0x1408639C0 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x1408640B0 (CmSetKeyFlags.c)
 *     CmpTransMgrSyncHive @ 0x140865CE8 (CmpTransMgrSyncHive.c)
 *     CmpTransMgrPrepare @ 0x14086632C (CmpTransMgrPrepare.c)
 *     CmpCleanupTransactionState @ 0x1408666A8 (CmpCleanupTransactionState.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x14086B654 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x140878350 (CmQueryValueKey.c)
 *     CmQueryKey @ 0x14087AC40 (CmQueryKey.c)
 *     CmEnumerateKey @ 0x14087C630 (CmEnumerateKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14087E720 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x140884780 (CmpLockRegistryFreezeAware.c)
 *     CmNotifyRunDown @ 0x1408F53C0 (CmNotifyRunDown.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x140911D30 (CmpLinkHiveToMaster.c)
 *     CmReleaseLoadKeyContext @ 0x140912250 (CmReleaseLoadKeyContext.c)
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 *     CmpCleanupParseContext @ 0x140913E90 (CmpCleanupParseContext.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     CmpEnumerateLayeredKey @ 0x140974D5C (CmpEnumerateLayeredKey.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 *     CmpDelayCloseWorker @ 0x1409D7200 (CmpDelayCloseWorker.c)
 *     CmCallbackGetKeyObjectID @ 0x1409D7620 (CmCallbackGetKeyObjectID.c)
 *     CmLockKeyForWrite @ 0x1409E3164 (CmLockKeyForWrite.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E3800 (CmpStartSiloRegistryNamespace.c)
 *     HvpFinishPrimaryWrite @ 0x1409F7550 (HvpFinishPrimaryWrite.c)
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 *     CmpTrimHive @ 0x140A3D624 (CmpTrimHive.c)
 *     CmpDoLocalizeNextHive @ 0x140A402A0 (CmpDoLocalizeNextHive.c)
 *     CmpLateUnloadHiveWorker @ 0x140A42470 (CmpLateUnloadHiveWorker.c)
 *     CmpReorganizeHive @ 0x140A4B428 (CmpReorganizeHive.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A639DC (CmEnumerateValueKeyFromMergedView.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A82CB8 (CmpStopSiloKeyLockTracker.c)
 *     CmpStopRMLog @ 0x140A843A4 (CmpStopRMLog.c)
 *     CmKeyBodyRemapToVirtual @ 0x140AAC100 (CmKeyBodyRemapToVirtual.c)
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 *     CmpDumpKeyToBuffer @ 0x140BA9128 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     CmpRecordRegistryLockAcquire @ 0x1402067A0 (CmpRecordRegistryLockAcquire.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x1402EA3A0 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistry()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al

  if ( !BYTE6(NlsMbOemCodePageTag) )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpRecordRegistryLockAcquire();
    return ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  return result;
}
