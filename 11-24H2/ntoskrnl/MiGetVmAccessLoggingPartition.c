/*
 * XREFs of MiGetVmAccessLoggingPartition @ 0x140399050
 * Callers:
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiDrainOldAccessBuffers @ 0x1403799CC (MiDrainOldAccessBuffers.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 *     MiResetAccessBitPteWorker @ 0x1403FB050 (MiResetAccessBitPteWorker.c)
 *     MmOutSwapProcess @ 0x14042D50C (MmOutSwapProcess.c)
 *     MiDrainSystemAccessLog @ 0x140469AF0 (MiDrainSystemAccessLog.c)
 *     MiAllocateAccessLog @ 0x140485ED0 (MiAllocateAccessLog.c)
 *     MiEmptyAccessLogs @ 0x140683670 (MiEmptyAccessLogs.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE6484 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

ULONG *__fastcall MiGetVmAccessLoggingPartition(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    return &MiSystemPartition;
  else
    return (ULONG *)*((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(a1 + 174));
}
