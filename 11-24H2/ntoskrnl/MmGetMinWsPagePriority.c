/*
 * XREFs of MmGetMinWsPagePriority @ 0x1404790C0
 * Callers:
 *     EtwTraceAutoBoostProcessLockEntry @ 0x140250910 (EtwTraceAutoBoostProcessLockEntry.c)
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x140478F1C (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     EtwTraceAutoBoostSetFloor @ 0x140478FC8 (EtwTraceAutoBoostSetFloor.c)
 *     MiCommitPageTablesForVad @ 0x1408E26C0 (MiCommitPageTablesForVad.c)
 *     PspUpdateJobEffectivePriorityLimits @ 0x1408E6FD4 (PspUpdateJobEffectivePriorityLimits.c)
 *     MiComputeProcessUserVa @ 0x1408F8A6C (MiComputeProcessUserVa.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     MiReturnPageTablePageCommitment @ 0x1409DE1C0 (MiReturnPageTablePageCommitment.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 *     KiVerifyXcpt15 @ 0x140BDEC40 (KiVerifyXcpt15.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMinWsPagePriority()
{
  return 1LL;
}
