/*
 * XREFs of MmGetMinWsPagePriority @ 0x1403C11A0
 * Callers:
 *     EtwTraceAutoBoostProcessLockEntry @ 0x140280F20 (EtwTraceAutoBoostProcessLockEntry.c)
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x1403C1000 (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1403C10AC (EtwTraceAutoBoostSetFloor.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     MiCommitPageTablesForVad @ 0x140919270 (MiCommitPageTablesForVad.c)
 *     MiComputeProcessUserVa @ 0x14091AEC4 (MiComputeProcessUserVa.c)
 *     MiReturnPageTablePageCommitment @ 0x1409D7D90 (MiReturnPageTablePageCommitment.c)
 *     PspUpdateJobEffectivePriorityLimits @ 0x140A41E64 (PspUpdateJobEffectivePriorityLimits.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     KiVerifyXcpt15 @ 0x140BE0C40 (KiVerifyXcpt15.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMinWsPagePriority()
{
  return 1LL;
}
