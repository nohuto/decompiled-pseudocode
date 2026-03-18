/*
 * XREFs of FsRtlAcquirePushLockExclusive @ 0x1403C5B9C
 * Callers:
 *     PfFileInfoNotify @ 0x140275220 (PfFileInfoNotify.c)
 *     FsRtlRemovePerStreamContext @ 0x1403C5300 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1403C5430 (FsRtlInsertPerStreamContext.c)
 *     PfpRpCHashGrow @ 0x1406F8A38 (PfpRpCHashGrow.c)
 *     PfpRpShutdown @ 0x140746FD0 (PfpRpShutdown.c)
 *     PfSnSetAltPrefetchParam @ 0x140747784 (PfSnSetAltPrefetchParam.c)
 *     PfpParametersWatcher @ 0x1407484A0 (PfpParametersWatcher.c)
 *     VmCleanProcessAddressSpace @ 0x14079E568 (VmCleanProcessAddressSpace.c)
 *     VmCreateMemoryRange @ 0x14079EA00 (VmCreateMemoryRange.c)
 *     VmUpdateCommitMemoryRange @ 0x14079F090 (VmUpdateCommitMemoryRange.c)
 *     VmpPauseResumeNotify @ 0x14079F238 (VmpPauseResumeNotify.c)
 *     VmpUnpinMemoryRange @ 0x14079F79C (VmpUnpinMemoryRange.c)
 *     PfpRpFileKeyUpdate @ 0x140843C20 (PfpRpFileKeyUpdate.c)
 *     PfProcessExitNotification @ 0x1409398E0 (PfProcessExitNotification.c)
 *     PfpRpCHashAddEntries @ 0x140950428 (PfpRpCHashAddEntries.c)
 *     PfpPrefetchSharedStart @ 0x1409527B4 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x140952940 (PfpPrefetchSharedCleanup.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1409A4760 (FsRtlTeardownPerStreamContexts.c)
 *     PfpRpCHashDeleteEntries @ 0x140A289F4 (PfpRpCHashDeleteEntries.c)
 *     VmDeleteMemoryRange @ 0x140A63260 (VmDeleteMemoryRange.c)
 *     VmSplitMemoryRange @ 0x140A79A90 (VmSplitMemoryRange.c)
 *     VmMergeMemoryRanges @ 0x140A7C100 (VmMergeMemoryRanges.c)
 *     PfpRpCHashEmpty @ 0x140A9E1D4 (PfpRpCHashEmpty.c)
 *     PfTAccessTracingCleanup @ 0x140B5B46C (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140B5B5B0 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140B5B62C (PfTSetTracingPriority.c)
 *     PfpPartitionAccessTraceLockAcquire @ 0x140B5B784 (PfpPartitionAccessTraceLockAcquire.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall FsRtlAcquirePushLockExclusive(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)a1, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a1, result, (__int64)a1);
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  return result;
}
