/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850
 * Callers:
 *     MiLockStealUserVm @ 0x140227A3C (MiLockStealUserVm.c)
 *     MiSynchronizeFastPageInsert @ 0x14022D9F0 (MiSynchronizeFastPageInsert.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14022E6E0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiReferencePfBackedSection @ 0x14022EFF8 (MiReferencePfBackedSection.c)
 *     MiComputeFlushRange @ 0x14022F1B8 (MiComputeFlushRange.c)
 *     RtlpHpTryAcquireQueuedLockExclusive @ 0x1402B6C98 (RtlpHpTryAcquireQueuedLockExclusive.c)
 *     MiLockPageTableInternal @ 0x1402D4E40 (MiLockPageTableInternal.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 *     MiReacquireHigherPageTableLock @ 0x1402E2E70 (MiReacquireHigherPageTableLock.c)
 *     MiCopyDataPageToImagePage @ 0x1403142D8 (MiCopyDataPageToImagePage.c)
 *     MiCanFileBeTruncatedInternal @ 0x140314C44 (MiCanFileBeTruncatedInternal.c)
 *     MiDeleteEmptyControlAreas @ 0x1403F7618 (MiDeleteEmptyControlAreas.c)
 *     MiDeleteEmptySubsections @ 0x1403F7FC0 (MiDeleteEmptySubsections.c)
 *     MiDeleteCachedEntry @ 0x1403F836C (MiDeleteCachedEntry.c)
 *     MiReferenceControlArea @ 0x140415208 (MiReferenceControlArea.c)
 *     MmFlushImageSection @ 0x1404698E0 (MmFlushImageSection.c)
 *     PspIumReplenishPartitionPages @ 0x14049D824 (PspIumReplenishPartitionPages.c)
 *     CcBcbProfiler @ 0x140507CE0 (CcBcbProfiler.c)
 *     IvtHandleInterrupt @ 0x14056EB80 (IvtHandleInterrupt.c)
 *     MiDeleteDeleteOnCloseSubsections @ 0x140672168 (MiDeleteDeleteOnCloseSubsections.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140672268 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiPrepareDeleteOnClose @ 0x140672500 (MiPrepareDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x14067257C (MiProcessDeleteOnClose.c)
 *     MiFreezeIoPfnNode @ 0x140675EAC (MiFreezeIoPfnNode.c)
 *     MiConvertWorkingSetLockSharedToExclusive @ 0x140684808 (MiConvertWorkingSetLockSharedToExclusive.c)
 *     sub_1406FC4F0 @ 0x1406FC4F0 (sub_1406FC4F0.c)
 *     KiForceSymbolReferences @ 0x140C27FB4 (KiForceSymbolReferences.c)
 * Callees:
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140315720 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x140316850 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 */

__int64 ExTryAcquireSpinLockExclusiveAtDpcLevel()
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    return TRY_ACQUIRE_EXLOCK_EXCLUSIVE();
  else
    return ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented();
}
