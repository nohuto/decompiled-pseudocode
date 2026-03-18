/*
 * XREFs of MmGetMinWsPagePriority @ 0x140311E90
 * Callers:
 *     EtwTraceAutoBoostProcessLockEntry @ 0x1402E8C88 (EtwTraceAutoBoostProcessLockEntry.c)
 *     EtwTraceAutoBoostSetFloor @ 0x140311D9C (EtwTraceAutoBoostSetFloor.c)
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x140311EA0 (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     MiCommitPageTablesForVad @ 0x140900E00 (MiCommitPageTablesForVad.c)
 *     MiComputeProcessUserVa @ 0x140904FA4 (MiComputeProcessUserVa.c)
 *     MiReturnPageTablePageCommitment @ 0x1409E3F50 (MiReturnPageTablePageCommitment.c)
 *     PspUpdateJobEffectivePriorityLimits @ 0x140A48744 (PspUpdateJobEffectivePriorityLimits.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 *     KiVerifyXcpt15 @ 0x140BCDC40 (KiVerifyXcpt15.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMinWsPagePriority()
{
  return 1LL;
}
