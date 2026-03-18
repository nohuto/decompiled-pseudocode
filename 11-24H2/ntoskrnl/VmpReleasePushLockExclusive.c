/*
 * XREFs of VmpReleasePushLockExclusive @ 0x1404860F0
 * Callers:
 *     PfFileInfoNotify @ 0x140275220 (PfFileInfoNotify.c)
 *     PfpRpCHashGrow @ 0x1406F8A38 (PfpRpCHashGrow.c)
 *     PfpRpShutdown @ 0x140746FD0 (PfpRpShutdown.c)
 *     PfSnSetAltPrefetchParam @ 0x140747784 (PfSnSetAltPrefetchParam.c)
 *     PfpParametersWatcher @ 0x1407484A0 (PfpParametersWatcher.c)
 *     VmCleanProcessAddressSpace @ 0x14079E568 (VmCleanProcessAddressSpace.c)
 *     VmCreateMemoryRange @ 0x14079EA00 (VmCreateMemoryRange.c)
 *     VmPinMemoryRange @ 0x14079EC80 (VmPinMemoryRange.c)
 *     VmUnpinMemoryRange @ 0x14079EF60 (VmUnpinMemoryRange.c)
 *     VmUpdateCommitMemoryRange @ 0x14079F090 (VmUpdateCommitMemoryRange.c)
 *     VmpPauseResumeNotify @ 0x14079F238 (VmpPauseResumeNotify.c)
 *     PfProcessExitNotification @ 0x1409398E0 (PfProcessExitNotification.c)
 *     PfpRpCHashAddEntries @ 0x140950428 (PfpRpCHashAddEntries.c)
 *     PfpPrefetchSharedStart @ 0x1409527B4 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x140952940 (PfpPrefetchSharedCleanup.c)
 *     PfpRpCHashDeleteEntries @ 0x140A289F4 (PfpRpCHashDeleteEntries.c)
 *     VmDeleteMemoryRange @ 0x140A63260 (VmDeleteMemoryRange.c)
 *     VmSplitMemoryRange @ 0x140A79A90 (VmSplitMemoryRange.c)
 *     VmMergeMemoryRanges @ 0x140A7C100 (VmMergeMemoryRanges.c)
 *     PfpRpCHashEmpty @ 0x140A9E1D4 (PfpRpCHashEmpty.c)
 *     PfTAccessTracingCleanup @ 0x140B5B46C (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140B5B5B0 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140B5B62C (PfTSetTracingPriority.c)
 *     PfpPartitionAccessTraceLockRelease @ 0x140B5B7A0 (PfpPartitionAccessTraceLockRelease.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

void __fastcall VmpReleasePushLockExclusive(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
