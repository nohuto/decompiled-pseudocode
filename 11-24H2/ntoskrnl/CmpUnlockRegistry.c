/*
 * XREFs of CmpUnlockRegistry @ 0x140BB9F50
 * Callers:
 *     CmpTryToRundownHive @ 0x1402C6840 (CmpTryToRundownHive.c)
 *     CmDeleteLayeredKey @ 0x14041AAA8 (CmDeleteLayeredKey.c)
 *     CmpDoQueryKeyName @ 0x14041EA20 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x140464478 (CmpLoadKeyCommon.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1404648A0 (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x1406679A8 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x140667BF4 (CmShutdownSystem2.c)
 *     ExpWatchProductTypeWork @ 0x1406F6C60 (ExpWatchProductTypeWork.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x1407CBBCC (CmpMarkCurrentProfileDirty.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmpSaveBootControlSet @ 0x1407CC764 (CmpSaveBootControlSet.c)
 *     CmDumpKeyToFile @ 0x1407CCD84 (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407CE060 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x1407CE610 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407CEAF0 (CmpRefreshHive.c)
 *     CmCompleteRegistryInitialization @ 0x1407CF20C (CmCompleteRegistryInitialization.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407CF3E0 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x1407CF750 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407CF9F0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1407CFFA0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D01B0 (NtQueryOpenSubKeysEx.c)
 *     CmpCloneHwProfile @ 0x1407D305C (CmpCloneHwProfile.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D7EEC (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407D7F7C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmFreezeRegistry @ 0x1407D841C (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407D85E0 (CmThawRegistry.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
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
 *     CmpTransMgrFreeVolatileData @ 0x14087B284 (CmpTransMgrFreeVolatileData.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14087C350 (CmCallbackGetKeyObjectIDEx.c)
 *     CmEnumerateKey @ 0x14087C950 (CmEnumerateKey.c)
 *     CmNotifyRunDown @ 0x1408A87D0 (CmNotifyRunDown.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     CmpDoFlushNextHive @ 0x14090AE60 (CmpDoFlushNextHive.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpEnumerateLayeredKey @ 0x140916054 (CmpEnumerateLayeredKey.c)
 *     CmpLinkHiveToMaster @ 0x14092C240 (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 *     CmpCleanupParseContext @ 0x14092D4B0 (CmpCleanupParseContext.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x14092E838 (CmReleaseLoadKeyContext.c)
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1409310B0 (CmpReorganizeHive.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140978D18 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14097A13C (CmKeyBodyNeedsVirtualImage.c)
 *     CmSetLastWriteTimeKey @ 0x14097A430 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14097A7E4 (CmKeyBodyRemapToVirtual.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14097C4F0 (CmpLateUnloadHiveWorker.c)
 *     CmpCompleteUnloadKey @ 0x14097CB58 (CmpCompleteUnloadKey.c)
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
 *     CmpStartRMLogs @ 0x140A04324 (CmpStartRMLogs.c)
 *     CmpStopRMLog @ 0x140A0452C (CmpStopRMLog.c)
 *     CmpTransMgrPrepare @ 0x140A04E88 (CmpTransMgrPrepare.c)
 *     CmpCleanupTransactionState @ 0x140A05204 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x140A063A0 (CmpCleanupLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x140A064F0 (CmpCommitLightWeightTransaction.c)
 *     CmpTransMgrSyncHive @ 0x140A06BAC (CmpTransMgrSyncHive.c)
 *     CmpTrimHive @ 0x140A422BC (CmpTrimHive.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A66364 (CmEnumerateValueKeyFromMergedView.c)
 *     CmEtwRunDown @ 0x140A6EEE8 (CmEtwRunDown.c)
 *     NtFlushKey @ 0x140A74F60 (NtFlushKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140A86DC4 (CmpResolveHiveLoadConflict.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A87210 (CmpStopSiloKeyLockTracker.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A882DC (CmpWaitOnHiveWriteQueue.c)
 *     CmpDelayFreeRMWorker @ 0x140A9EF40 (CmpDelayFreeRMWorker.c)
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 *     CmpDumpKeyToBuffer @ 0x140BB9130 (CmpDumpKeyToBuffer.c)
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140C62C58 (CmGetSystemDriverList.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14024D950 (PsBoostThreadIo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     CmpRecordRegistryLockRelease @ 0x1404F01E0 (CmpRecordRegistryLockRelease.c)
 *     CmpGetSharedLockHandle @ 0x140667F60 (CmpGetSharedLockHandle.c)
 *     CmpIsRegistryLockAcquiredRecursively @ 0x140667F7C (CmpIsRegistryLockAcquiredRecursively.c)
 *     CmpTestRegistryLockExclusive @ 0x1406680E4 (CmpTestRegistryLockExclusive.c)
 */

void CmpUnlockRegistry()
{
  unsigned __int64 SharedLockHandle; // rbx
  PERESOURCE v1; // rsi
  volatile signed __int64 **v2; // rbx
  volatile signed __int64 **p_OwnerEntry; // rdi
  volatile signed __int64 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8

  if ( !BYTE5(NlsMbOemCodePageTag) )
  {
    if ( dword_140EF6D28 == 1 && !CmpIsRegistryLockAcquiredRecursively() )
    {
      if ( CmpTestRegistryLockExclusive() )
      {
        v1 = CmpRegistryLock;
        v2 = (volatile signed __int64 **)CmpRegistryLock;
        p_OwnerEntry = (volatile signed __int64 **)&CmpRegistryLock[2].OwnerEntry;
        if ( CmpRegistryLock < (PERESOURCE)&CmpRegistryLock[2].OwnerEntry )
        {
          do
          {
            v4 = *v2;
            if ( (_InterlockedExchangeAdd64(*v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v4);
            ++v2;
          }
          while ( v2 < p_OwnerEntry );
        }
        KeAbPostRelease((ULONG_PTR)v1);
      }
      else
      {
        SharedLockHandle = CmpGetSharedLockHandle();
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)SharedLockHandle, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)SharedLockHandle);
        KeAbPostRelease(*(_QWORD *)(SharedLockHandle + 16));
      }
    }
    CmpRecordRegistryLockRelease();
    if ( !dword_140EF6D28 )
      ExReleaseResourceLite(CmpRegistryLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 1, v8);
  }
}
