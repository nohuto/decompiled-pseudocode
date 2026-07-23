/*
 * XREFs of CmpLockRegistryExclusive @ 0x140881C30
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmShutdownSystem1 @ 0x140666298 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406664E4 (CmShutdownSystem2.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x1407CC0BC (CmpMarkCurrentProfileDirty.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     CmpSaveBootControlSet @ 0x1407CCC54 (CmpSaveBootControlSet.c)
 *     CmpLoadHiveVolatile @ 0x1407CEB00 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407CEFE0 (CmpRefreshHive.c)
 *     CmCompleteRegistryInitialization @ 0x1407CF6FC (CmCompleteRegistryInitialization.c)
 *     NtCompactKeys @ 0x1407CFC40 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407CFEE0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1407D0490 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D06A0 (NtQueryOpenSubKeysEx.c)
 *     CmpCloneHwProfile @ 0x1407D354C (CmpCloneHwProfile.c)
 *     CmFreezeRegistry @ 0x1407D896C (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407D8B30 (CmThawRegistry.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 *     CmEnumerateKey @ 0x140880800 (CmEnumerateKey.c)
 *     CmpEnumerateLayeredKey @ 0x140909AC4 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140961528 (CmKeyBodyReplicateToVirtual.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 *     CmpCleanupTransactionState @ 0x140A01734 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x140A028D0 (CmpCleanupLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x140A02A20 (CmpCommitLightWeightTransaction.c)
 *     CmEtwRunDown @ 0x140A6836C (CmEtwRunDown.c)
 *     CmpDelayFreeRMWorker @ 0x140A9A310 (CmpDelayFreeRMWorker.c)
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140C64DD4 (CmGetSystemDriverList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIo @ 0x14027DF60 (PsBoostThreadIo.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x140445980 (ExAcquireCacheAwarePushLockExclusive.c)
 *     CmpRecordRegistryLockAcquire @ 0x1404EDC10 (CmpRecordRegistryLockAcquire.c)
 *     CmpRecordRegistryLockExclusiveAcquire @ 0x140666884 (CmpRecordRegistryLockExclusiveAcquire.c)
 *     CmpTestRegistryLock @ 0x140666994 (CmpTestRegistryLock.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  bool v0; // bl
  struct _KTHREAD *CurrentThread; // rax

  v0 = 0;
  if ( dword_140EF6F68 )
    v0 = CmpTestRegistryLock();
  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !v0 )
  {
    if ( dword_140EF6F68 != 1 )
      goto LABEL_8;
    ExAcquireCacheAwarePushLockExclusive((volatile signed __int32 **)CmpRegistryLock);
  }
  if ( dword_140EF6F68 == 1 )
    return (unsigned __int8)CmpRecordRegistryLockExclusiveAcquire();
LABEL_8:
  CmpRecordRegistryLockAcquire();
  return ExAcquireResourceExclusiveLite(CmpRegistryLock, 1u);
}
