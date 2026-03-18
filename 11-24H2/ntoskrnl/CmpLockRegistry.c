/*
 * XREFs of CmpLockRegistry @ 0x140BB9E60
 * Callers:
 *     CmpDoQueryKeyName @ 0x14041EA20 (CmpDoQueryKeyName.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1404648A0 (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x1406679A8 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmDumpKeyToFile @ 0x1407CCD84 (CmDumpKeyToFile.c)
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407CE060 (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x1407CEAF0 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407CF3E0 (CmOpenKeyForBugCheckRecovery.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407D7F7C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmReplaceKey @ 0x1407DA2E8 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407DC2B8 (CmpFlushBackupHive.c)
 *     CmpAssignKeySecurity @ 0x1407DC9C0 (CmpAssignKeySecurity.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x1407DE6E0 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpDoReOpenTransKey @ 0x1407E6EF4 (CmpDoReOpenTransKey.c)
 *     CmpCloseKeyObject @ 0x140841890 (CmpCloseKeyObject.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     CmpSecurityMethod @ 0x140852E10 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x1408697B0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x14086C850 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x140874900 (CmQueryValueKey.c)
 *     CmQueryKey @ 0x140877890 (CmQueryKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14087C350 (CmCallbackGetKeyObjectIDEx.c)
 *     CmEnumerateKey @ 0x14087C950 (CmEnumerateKey.c)
 *     CmNotifyRunDown @ 0x1408A87D0 (CmNotifyRunDown.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpEnumerateLayeredKey @ 0x140916054 (CmpEnumerateLayeredKey.c)
 *     CmpLinkHiveToMaster @ 0x14092C240 (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 *     CmpCleanupParseContext @ 0x14092D4B0 (CmpCleanupParseContext.c)
 *     CmReleaseLoadKeyContext @ 0x14092E838 (CmReleaseLoadKeyContext.c)
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1409310B0 (CmpReorganizeHive.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140978D18 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14097A13C (CmKeyBodyNeedsVirtualImage.c)
 *     CmSetLastWriteTimeKey @ 0x14097A430 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14097A7E4 (CmKeyBodyRemapToVirtual.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpLateUnloadHiveWorker @ 0x14097C4F0 (CmpLateUnloadHiveWorker.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x14097DFD8 (CmpLockRegistryFreezeAware.c)
 *     HvpFinishPrimaryWrite @ 0x140982E40 (HvpFinishPrimaryWrite.c)
 *     CmpDoLocalizeNextHive @ 0x140984290 (CmpDoLocalizeNextHive.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 *     CmpDelayCloseWorker @ 0x1409D6A50 (CmpDelayCloseWorker.c)
 *     CmCallbackGetKeyObjectID @ 0x1409D7040 (CmCallbackGetKeyObjectID.c)
 *     CmLockKeyForWrite @ 0x1409E1DB8 (CmLockKeyForWrite.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E2450 (CmpStartSiloRegistryNamespace.c)
 *     CmOpenKey @ 0x1409E3DB0 (CmOpenKey.c)
 *     CmpStopRMLog @ 0x140A0452C (CmpStopRMLog.c)
 *     CmpTransMgrPrepare @ 0x140A04E88 (CmpTransMgrPrepare.c)
 *     CmpCleanupTransactionState @ 0x140A05204 (CmpCleanupTransactionState.c)
 *     CmpTransMgrSyncHive @ 0x140A06BAC (CmpTransMgrSyncHive.c)
 *     CmpTrimHive @ 0x140A422BC (CmpTrimHive.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A66364 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A87210 (CmpStopSiloKeyLockTracker.c)
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 *     CmpDumpKeyToBuffer @ 0x140BB9130 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14024D950 (PsBoostThreadIo.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     ExfAcquireCacheAwarePushLockSharedEx @ 0x140418330 (ExfAcquireCacheAwarePushLockSharedEx.c)
 *     CmpRecordRegistryLockAcquire @ 0x1404F0170 (CmpRecordRegistryLockAcquire.c)
 *     CmpRecordRegistryLockSharedAcquire @ 0x140667FC0 (CmpRecordRegistryLockSharedAcquire.c)
 *     CmpTestRegistryLock @ 0x1406680A4 (CmpTestRegistryLock.c)
 */

void __fastcall CmpLockRegistry(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // bl
  signed __int64 *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE v6; // rbx
  _QWORD *v7; // rsi

  if ( !BYTE5(NlsMbOemCodePageTag) )
  {
    v3 = 0;
    v4 = 0LL;
    if ( dword_140EF6D28 )
      v3 = CmpTestRegistryLock();
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0, a3);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !v3 )
    {
      if ( dword_140EF6D28 != 1 )
      {
LABEL_10:
        CmpRecordRegistryLockAcquire();
        ExAcquireResourceSharedLite(CmpRegistryLock, 1u);
        return;
      }
      v6 = CmpRegistryLock;
      v7 = KeAbPreAcquire((__int64)CmpRegistryLock, 0LL);
      v4 = ExfAcquireCacheAwarePushLockSharedEx((__int64)v6, 0, v7, (__int64)v6);
      if ( v7 )
        *((_BYTE *)v7 + 10) = 1;
    }
    if ( dword_140EF6D28 == 1 )
    {
      CmpRecordRegistryLockSharedAcquire((unsigned __int64)v4);
      return;
    }
    goto LABEL_10;
  }
}
