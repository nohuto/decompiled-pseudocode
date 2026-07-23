/*
 * XREFs of MiVmAccessLoggingEnabled @ 0x140346A3C
 * Callers:
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiDeleteVa @ 0x14023D060 (MiDeleteVa.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiCombineWithExisting @ 0x140294840 (MiCombineWithExisting.c)
 *     MiDecommitAddToList @ 0x1402985A0 (MiDecommitAddToList.c)
 *     MiCrcStillIntact @ 0x140345608 (MiCrcStillIntact.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiTrimWorkingSet @ 0x140390208 (MiTrimWorkingSet.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403DB1C8 (MiDeprioritizeVirtualAddresses.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140462890 (MiCaptureAndResetWorkingSetAccessBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVmAccessLoggingEnabled(__int64 a1)
{
  ULONG *v1; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v1 = &MiSystemPartition;
  else
    v1 = (ULONG *)*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174));
  return v1[4363];
}
