/*
 * XREFs of MiGetVmAccessLoggingPartition @ 0x140209E80
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MmOutSwapProcess @ 0x1402F1C40 (MmOutSwapProcess.c)
 *     MiResetAccessBitPteWorker @ 0x14037CC0C (MiResetAccessBitPteWorker.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiDrainOldAccessBuffers @ 0x1403C37E8 (MiDrainOldAccessBuffers.c)
 *     MiDrainSystemAccessLog @ 0x1403C3E1C (MiDrainSystemAccessLog.c)
 *     MiAllocateAccessLog @ 0x1404853C8 (MiAllocateAccessLog.c)
 *     MiEmptyAccessLogs @ 0x140677E70 (MiEmptyAccessLogs.c)
 *     MmDeleteProcessAddressSpace @ 0x1408D7B40 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

ULONG *__fastcall MiGetVmAccessLoggingPartition(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    return &MiSystemPartition;
  else
    return (ULONG *)*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1 + 174));
}
