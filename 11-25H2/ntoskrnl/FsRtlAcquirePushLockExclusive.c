/*
 * XREFs of FsRtlAcquirePushLockExclusive @ 0x1402A2908
 * Callers:
 *     FsRtlRemovePerStreamContext @ 0x1402A20A0 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1402A21D0 (FsRtlInsertPerStreamContext.c)
 *     PfFileInfoNotify @ 0x140301AC0 (PfFileInfoNotify.c)
 *     PfpRpCHashGrow @ 0x1406ECDEC (PfpRpCHashGrow.c)
 *     PfpRpShutdown @ 0x14073AFB0 (PfpRpShutdown.c)
 *     PfSnSetAltPrefetchParam @ 0x14073B764 (PfSnSetAltPrefetchParam.c)
 *     PfpParametersWatcher @ 0x14073C490 (PfpParametersWatcher.c)
 *     VmCleanProcessAddressSpace @ 0x14078F1A8 (VmCleanProcessAddressSpace.c)
 *     VmCreateMemoryRange @ 0x14078F640 (VmCreateMemoryRange.c)
 *     VmUpdateCommitMemoryRange @ 0x14078FCD0 (VmUpdateCommitMemoryRange.c)
 *     VmpPauseResumeNotify @ 0x14078FE78 (VmpPauseResumeNotify.c)
 *     VmpUnpinMemoryRange @ 0x1407903DC (VmpUnpinMemoryRange.c)
 *     PfpRpFileKeyUpdate @ 0x140847B50 (PfpRpFileKeyUpdate.c)
 *     PfpPrefetchSharedCleanup @ 0x1408EBCF8 (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1408EBE2C (PfpPrefetchSharedStart.c)
 *     PfProcessExitNotification @ 0x14091D314 (PfProcessExitNotification.c)
 *     PfpRpCHashAddEntries @ 0x1409243D8 (PfpRpCHashAddEntries.c)
 *     FsRtlTeardownPerStreamContexts @ 0x14099F8D0 (FsRtlTeardownPerStreamContexts.c)
 *     PfpRpCHashDeleteEntries @ 0x140A1F018 (PfpRpCHashDeleteEntries.c)
 *     VmDeleteMemoryRange @ 0x140A61400 (VmDeleteMemoryRange.c)
 *     VmSplitMemoryRange @ 0x140A77C20 (VmSplitMemoryRange.c)
 *     VmMergeMemoryRanges @ 0x140A7A390 (VmMergeMemoryRanges.c)
 *     PfpRpCHashEmpty @ 0x140A986A4 (PfpRpCHashEmpty.c)
 *     PfTAccessTracingCleanup @ 0x140B4B4FC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140B4B640 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140B4B6BC (PfTSetTracingPriority.c)
 *     PfpPartitionAccessTraceLockAcquire @ 0x140B4B814 (PfpPartitionAccessTraceLockAcquire.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall FsRtlAcquirePushLockExclusive(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)a1, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(a1, result, (__int64)a1);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return result;
}
