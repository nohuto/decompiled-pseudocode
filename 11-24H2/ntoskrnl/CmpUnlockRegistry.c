/*
 * XREFs of CmpUnlockRegistry @ 0x140BBBF50
 * Callers:
 *     CmpTryToRundownHive @ 0x1402BB3C0 (CmpTryToRundownHive.c)
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmpDoQueryKeyName @ 0x140414760 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x14045ABA8 (CmpLoadKeyCommon.c)
 *     CmpRecheckHiveVolumePolicy @ 0x14045AFD0 (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x140666298 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406664E4 (CmShutdownSystem2.c)
 *     ExpWatchProductTypeWork @ 0x1406F4C60 (ExpWatchProductTypeWork.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x1407CC0BC (CmpMarkCurrentProfileDirty.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     CmpSaveBootControlSet @ 0x1407CCC54 (CmpSaveBootControlSet.c)
 *     CmDumpKeyToFile @ 0x1407CD274 (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407CE550 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x1407CEB00 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407CEFE0 (CmpRefreshHive.c)
 *     CmCompleteRegistryInitialization @ 0x1407CF6FC (CmCompleteRegistryInitialization.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407CF8D0 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x1407CFC40 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407CFEE0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1407D0490 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D06A0 (NtQueryOpenSubKeysEx.c)
 *     CmpCloneHwProfile @ 0x1407D354C (CmpCloneHwProfile.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D8440 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407D84D0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmFreezeRegistry @ 0x1407D896C (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407D8B30 (CmThawRegistry.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmReplaceKey @ 0x1407DA838 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407DC808 (CmpFlushBackupHive.c)
 *     CmpAssignKeySecurity @ 0x1407DCF10 (CmpAssignKeySecurity.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x1407DEC30 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpDoReOpenTransKey @ 0x1407E74C4 (CmpDoReOpenTransKey.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x14086DAE0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140870B80 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x140878C30 (CmQueryValueKey.c)
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140880200 (CmCallbackGetKeyObjectIDEx.c)
 *     CmEnumerateKey @ 0x140880800 (CmEnumerateKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     CmpDoFlushNextHive @ 0x1408E2580 (CmpDoFlushNextHive.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmNotifyRunDown @ 0x1408FEA30 (CmNotifyRunDown.c)
 *     CmpEnumerateLayeredKey @ 0x140909AC4 (CmpEnumerateLayeredKey.c)
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 *     CmpCleanupParseContext @ 0x14092F5F0 (CmpCleanupParseContext.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x140930978 (CmReleaseLoadKeyContext.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1409331F0 (CmpReorganizeHive.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140961528 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14096294C (CmKeyBodyNeedsVirtualImage.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x140962FF4 (CmKeyBodyRemapToVirtual.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140964D00 (CmpLateUnloadHiveWorker.c)
 *     CmpCompleteUnloadKey @ 0x140965368 (CmpCompleteUnloadKey.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 *     HvpFinishPrimaryWrite @ 0x14096B650 (HvpFinishPrimaryWrite.c)
 *     CmpDoLocalizeNextHive @ 0x14096CAA0 (CmpDoLocalizeNextHive.c)
 *     CmpDelayCloseWorker @ 0x1409C6AD0 (CmpDelayCloseWorker.c)
 *     CmCallbackGetKeyObjectID @ 0x1409C76A0 (CmCallbackGetKeyObjectID.c)
 *     CmLockKeyForWrite @ 0x1409DBB68 (CmLockKeyForWrite.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409DC200 (CmpStartSiloRegistryNamespace.c)
 *     CmOpenKey @ 0x1409DE810 (CmOpenKey.c)
 *     CmpStartRMLogs @ 0x140A00854 (CmpStartRMLogs.c)
 *     CmpStopRMLog @ 0x140A00A5C (CmpStopRMLog.c)
 *     CmpTransMgrPrepare @ 0x140A013B8 (CmpTransMgrPrepare.c)
 *     CmpCleanupTransactionState @ 0x140A01734 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x140A028D0 (CmpCleanupLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x140A02A20 (CmpCommitLightWeightTransaction.c)
 *     CmpTransMgrSyncHive @ 0x140A030DC (CmpTransMgrSyncHive.c)
 *     CmpTrimHive @ 0x140A37AF4 (CmpTrimHive.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A5F148 (CmEnumerateValueKeyFromMergedView.c)
 *     CmEtwRunDown @ 0x140A6836C (CmEtwRunDown.c)
 *     NtFlushKey @ 0x140A6F280 (NtFlushKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140A8189C (CmpResolveHiveLoadConflict.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A81F60 (CmpStopSiloKeyLockTracker.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A847CC (CmpWaitOnHiveWriteQueue.c)
 *     CmpDelayFreeRMWorker @ 0x140A9A310 (CmpDelayFreeRMWorker.c)
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 *     CmpDumpKeyToBuffer @ 0x140BBB130 (CmpDumpKeyToBuffer.c)
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140C64DD4 (CmGetSystemDriverList.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14027DF60 (PsBoostThreadIo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmpRecordRegistryLockRelease @ 0x1404EDC80 (CmpRecordRegistryLockRelease.c)
 *     CmpGetSharedLockHandle @ 0x14066684C (CmpGetSharedLockHandle.c)
 *     CmpIsRegistryLockAcquiredRecursively @ 0x140666868 (CmpIsRegistryLockAcquiredRecursively.c)
 *     CmpTestRegistryLockExclusive @ 0x1406669D4 (CmpTestRegistryLockExclusive.c)
 */

void CmpUnlockRegistry()
{
  unsigned __int64 SharedLockHandle; // rbx
  PERESOURCE v1; // rsi
  volatile signed __int64 **v2; // rbx
  volatile signed __int64 **p_OwnerEntry; // rdi
  volatile signed __int64 *v4; // rcx

  if ( !BYTE5(NlsMbOemCodePageTag) )
  {
    if ( dword_140EF6F68 == 1 && !CmpIsRegistryLockAcquiredRecursively() )
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
    if ( !dword_140EF6F68 )
      ExReleaseResourceLite(CmpRegistryLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 1);
  }
}
