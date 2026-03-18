/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 *     MiSynchronizeFastPageInsert @ 0x140217140 (MiSynchronizeFastPageInsert.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140218410 (MmDoesFileHaveUserWritableReferences.c)
 *     MiReferencePfBackedSection @ 0x1402185B4 (MiReferencePfBackedSection.c)
 *     MiComputeFlushRange @ 0x140218830 (MiComputeFlushRange.c)
 *     MiReferenceControlArea @ 0x140219CEC (MiReferenceControlArea.c)
 *     MiDeleteEmptySubsections @ 0x1402A6D2C (MiDeleteEmptySubsections.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 *     MiLockStealUserVm @ 0x1402C97A0 (MiLockStealUserVm.c)
 *     MiReacquireHigherPageTableLock @ 0x1402E7AC0 (MiReacquireHigherPageTableLock.c)
 *     MiCanFileBeTruncatedInternal @ 0x14034EBE4 (MiCanFileBeTruncatedInternal.c)
 *     MiLockPageTableInternal @ 0x1403DC310 (MiLockPageTableInternal.c)
 *     MiDeleteEmptyControlAreas @ 0x140459924 (MiDeleteEmptyControlAreas.c)
 *     MiDeleteCachedEntry @ 0x140459A0C (MiDeleteCachedEntry.c)
 *     MmFlushImageSection @ 0x14046B190 (MmFlushImageSection.c)
 *     PspIumReplenishPartitionPages @ 0x14049E744 (PspIumReplenishPartitionPages.c)
 *     RtlpHpTryAcquireQueuedLockExclusive @ 0x1404F0F38 (RtlpHpTryAcquireQueuedLockExclusive.c)
 *     CcBcbProfiler @ 0x140505560 (CcBcbProfiler.c)
 *     IvtHandleInterrupt @ 0x14056B880 (IvtHandleInterrupt.c)
 *     MiDeleteDeleteOnCloseSubsections @ 0x1406666B8 (MiDeleteDeleteOnCloseSubsections.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1406667B8 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiPrepareDeleteOnClose @ 0x140666A50 (MiPrepareDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140666ACC (MiProcessDeleteOnClose.c)
 *     MiFreezeIoPfnNode @ 0x14066A44C (MiFreezeIoPfnNode.c)
 *     MiConvertWorkingSetLockSharedToExclusive @ 0x140678F7C (MiConvertWorkingSetLockSharedToExclusive.c)
 *     sub_1406F0690 @ 0x1406F0690 (sub_1406F0690.c)
 *     KiForceSymbolReferences @ 0x140C16F24 (KiForceSymbolReferences.c)
 * Callees:
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x14034D580 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14034E284 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 ExTryAcquireSpinLockExclusiveAtDpcLevel()
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    return TRY_ACQUIRE_EXLOCK_EXCLUSIVE();
  else
    return ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented();
}
