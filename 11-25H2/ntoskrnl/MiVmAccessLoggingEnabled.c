/*
 * XREFs of MiVmAccessLoggingEnabled @ 0x140386C1C
 * Callers:
 *     MiCrcStillIntact @ 0x140239824 (MiCrcStillIntact.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402A2C38 (MiDeprioritizeVirtualAddresses.c)
 *     MiDeleteVa @ 0x1402B1A90 (MiDeleteVa.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     MiCombineWithExisting @ 0x14038A898 (MiCombineWithExisting.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403C38AC (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiTrimWorkingSet @ 0x1403C4734 (MiTrimWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVmAccessLoggingEnabled(__int64 a1)
{
  ULONG *v1; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v1 = &MiSystemPartition;
  else
    v1 = (ULONG *)*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1 + 174));
  return v1[4363];
}
