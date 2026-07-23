/*
 * XREFs of MiGetVmAccessLoggingPartition @ 0x140351780
 * Callers:
 *     MiResetAccessBitPteWorker @ 0x1402941D8 (MiResetAccessBitPteWorker.c)
 *     MmOutSwapProcess @ 0x1402DDEEC (MmOutSwapProcess.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiDrainOldAccessBuffers @ 0x14045F56C (MiDrainOldAccessBuffers.c)
 *     MiDrainSystemAccessLog @ 0x140462A14 (MiDrainSystemAccessLog.c)
 *     MiAllocateAccessLog @ 0x1404814C0 (MiAllocateAccessLog.c)
 *     MiEmptyAccessLogs @ 0x140684820 (MiEmptyAccessLogs.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

ULONG *__fastcall MiGetVmAccessLoggingPartition(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    return &MiSystemPartition;
  else
    return (ULONG *)*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174));
}
