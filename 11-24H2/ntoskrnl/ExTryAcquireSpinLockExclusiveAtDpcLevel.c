/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160
 * Callers:
 *     MiReacquireHigherPageTableLock @ 0x14020B170 (MiReacquireHigherPageTableLock.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     MiDeleteVaDirect @ 0x14023BBE0 (MiDeleteVaDirect.c)
 *     MiLockStealUserVm @ 0x14025539C (MiLockStealUserVm.c)
 *     MiReferenceControlArea @ 0x140271068 (MiReferenceControlArea.c)
 *     MiDeleteEmptySubsections @ 0x140292788 (MiDeleteEmptySubsections.c)
 *     MiSynchronizeFastPageInsert @ 0x140301300 (MiSynchronizeFastPageInsert.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140301FF0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiReferencePfBackedSection @ 0x140302908 (MiReferencePfBackedSection.c)
 *     MiComputeFlushRange @ 0x140302AC8 (MiComputeFlushRange.c)
 *     MiLockPageTableInternal @ 0x1403560C0 (MiLockPageTableInternal.c)
 *     RtlpHpTryAcquireQueuedLockExclusive @ 0x14036810C (RtlpHpTryAcquireQueuedLockExclusive.c)
 *     MiDeleteEmptyControlAreas @ 0x1403EE1FC (MiDeleteEmptyControlAreas.c)
 *     MiDeleteCachedEntry @ 0x1403EE484 (MiDeleteCachedEntry.c)
 *     MiCopyDataPageToImagePage @ 0x1403F1624 (MiCopyDataPageToImagePage.c)
 *     MiCanFileBeTruncatedInternal @ 0x1403F2224 (MiCanFileBeTruncatedInternal.c)
 *     MmFlushImageSection @ 0x1403F44D0 (MmFlushImageSection.c)
 *     PspIumReplenishPartitionPages @ 0x140498624 (PspIumReplenishPartitionPages.c)
 *     CcBcbProfiler @ 0x1405055A0 (CcBcbProfiler.c)
 *     IvtHandleInterrupt @ 0x14056C010 (IvtHandleInterrupt.c)
 *     MiDeleteDeleteOnCloseSubsections @ 0x140673338 (MiDeleteDeleteOnCloseSubsections.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140673438 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiPrepareDeleteOnClose @ 0x1406736D0 (MiPrepareDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x14067374C (MiProcessDeleteOnClose.c)
 *     MiFreezeIoPfnNode @ 0x14067707C (MiFreezeIoPfnNode.c)
 *     MiConvertWorkingSetLockSharedToExclusive @ 0x140685934 (MiConvertWorkingSetLockSharedToExclusive.c)
 *     sub_1406FA130 @ 0x1406FA130 (sub_1406FA130.c)
 *     KiForceSymbolReferences @ 0x140C2A010 (KiForceSymbolReferences.c)
 * Callees:
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x1402BF400 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1404627C0 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockExclusiveAtDpcLevel(volatile signed __int32 *a1)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    return TRY_ACQUIRE_EXLOCK_EXCLUSIVE(a1);
  else
    return ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
}
