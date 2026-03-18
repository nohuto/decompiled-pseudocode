/*
 * XREFs of CmpLockRegistryExclusive @ 0x14087DD80
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041AAA8 (CmDeleteLayeredKey.c)
 *     CmShutdownSystem1 @ 0x1406679A8 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x140667BF4 (CmShutdownSystem2.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x1407CBBCC (CmpMarkCurrentProfileDirty.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmpSaveBootControlSet @ 0x1407CC764 (CmpSaveBootControlSet.c)
 *     CmpLoadHiveVolatile @ 0x1407CE610 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407CEAF0 (CmpRefreshHive.c)
 *     CmCompleteRegistryInitialization @ 0x1407CF20C (CmCompleteRegistryInitialization.c)
 *     NtCompactKeys @ 0x1407CF750 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407CF9F0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1407CFFA0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D01B0 (NtQueryOpenSubKeysEx.c)
 *     CmpCloneHwProfile @ 0x1407D305C (CmpCloneHwProfile.c)
 *     CmFreezeRegistry @ 0x1407D841C (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407D85E0 (CmThawRegistry.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087B284 (CmpTransMgrFreeVolatileData.c)
 *     CmEnumerateKey @ 0x14087C950 (CmEnumerateKey.c)
 *     CmpEnumerateLayeredKey @ 0x140916054 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140978D18 (CmKeyBodyReplicateToVirtual.c)
 *     CmpLockRegistryFreezeAware @ 0x14097DFD8 (CmpLockRegistryFreezeAware.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 *     CmpCleanupTransactionState @ 0x140A05204 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x140A063A0 (CmpCleanupLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x140A064F0 (CmpCommitLightWeightTransaction.c)
 *     CmEtwRunDown @ 0x140A6EEE8 (CmEtwRunDown.c)
 *     CmpDelayFreeRMWorker @ 0x140A9EF40 (CmpDelayFreeRMWorker.c)
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140C62C58 (CmGetSystemDriverList.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14024D950 (PsBoostThreadIo.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x140450710 (ExAcquireCacheAwarePushLockExclusive.c)
 *     CmpRecordRegistryLockAcquire @ 0x1404F0170 (CmpRecordRegistryLockAcquire.c)
 *     CmpRecordRegistryLockExclusiveAcquire @ 0x140667F98 (CmpRecordRegistryLockExclusiveAcquire.c)
 *     CmpTestRegistryLock @ 0x1406680A4 (CmpTestRegistryLock.c)
 */

BOOLEAN __fastcall CmpLockRegistryExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // bl
  struct _KTHREAD *CurrentThread; // rax

  v3 = 0;
  if ( dword_140EF6D28 )
    v3 = CmpTestRegistryLock();
  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0, a3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !v3 )
  {
    if ( dword_140EF6D28 != 1 )
      goto LABEL_8;
    ExAcquireCacheAwarePushLockExclusive((volatile signed __int32 **)CmpRegistryLock);
  }
  if ( dword_140EF6D28 == 1 )
    return (unsigned __int8)CmpRecordRegistryLockExclusiveAcquire();
LABEL_8:
  CmpRecordRegistryLockAcquire();
  return ExAcquireResourceExclusiveLite(CmpRegistryLock, 1u);
}
