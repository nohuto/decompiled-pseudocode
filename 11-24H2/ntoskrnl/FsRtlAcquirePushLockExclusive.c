/*
 * XREFs of FsRtlAcquirePushLockExclusive @ 0x1403B475C
 * Callers:
 *     PfFileInfoNotify @ 0x14022A7B0 (PfFileInfoNotify.c)
 *     FsRtlRemovePerStreamContext @ 0x1403B3EC0 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1403B3FF0 (FsRtlInsertPerStreamContext.c)
 *     PfpRpCHashGrow @ 0x1406F6670 (PfpRpCHashGrow.c)
 *     PfpRpShutdown @ 0x1407452C0 (PfpRpShutdown.c)
 *     PfSnSetAltPrefetchParam @ 0x140745A74 (PfSnSetAltPrefetchParam.c)
 *     PfpParametersWatcher @ 0x140746790 (PfpParametersWatcher.c)
 *     VmCleanProcessAddressSpace @ 0x14079E678 (VmCleanProcessAddressSpace.c)
 *     VmCreateMemoryRange @ 0x14079EB10 (VmCreateMemoryRange.c)
 *     VmUpdateCommitMemoryRange @ 0x14079F1A0 (VmUpdateCommitMemoryRange.c)
 *     VmpPauseResumeNotify @ 0x14079F348 (VmpPauseResumeNotify.c)
 *     VmpUnpinMemoryRange @ 0x14079F8AC (VmpUnpinMemoryRange.c)
 *     PfpRpFileKeyUpdate @ 0x14083FEE0 (PfpRpFileKeyUpdate.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1408AE450 (FsRtlTeardownPerStreamContexts.c)
 *     PfpPrefetchSharedStart @ 0x140936164 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x1409362F0 (PfpPrefetchSharedCleanup.c)
 *     PfProcessExitNotification @ 0x14094BDC4 (PfProcessExitNotification.c)
 *     PfpRpCHashDeleteEntries @ 0x140A1D3B8 (PfpRpCHashDeleteEntries.c)
 *     VmDeleteMemoryRange @ 0x140A5BB60 (VmDeleteMemoryRange.c)
 *     PfpRpCHashAddEntries @ 0x140A5EF34 (PfpRpCHashAddEntries.c)
 *     VmSplitMemoryRange @ 0x140A73D90 (VmSplitMemoryRange.c)
 *     VmMergeMemoryRanges @ 0x140A76400 (VmMergeMemoryRanges.c)
 *     PfpRpCHashEmpty @ 0x140A99744 (PfpRpCHashEmpty.c)
 *     PfTAccessTracingCleanup @ 0x140B5D4DC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140B5D620 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140B5D69C (PfTSetTracingPriority.c)
 *     PfpPartitionAccessTraceLockAcquire @ 0x140B5D7F4 (PfpPartitionAccessTraceLockAcquire.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall FsRtlAcquirePushLockExclusive(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *result; // rax
  char *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (char *)KeAbPreAcquire((__int64)a1, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(a1, result, (__int64)a1);
  if ( v4 )
    v4[10] = 1;
  return result;
}
