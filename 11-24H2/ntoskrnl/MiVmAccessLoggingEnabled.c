/*
 * XREFs of MiVmAccessLoggingEnabled @ 0x1402E47A4
 * Callers:
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiDeleteVa @ 0x1402DB780 (MiDeleteVa.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiCombineWithExisting @ 0x1402F92E0 (MiCombineWithExisting.c)
 *     MiCrcStillIntact @ 0x1402FA610 (MiCrcStillIntact.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140379A98 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiTrimWorkingSet @ 0x1403CF15C (MiTrimWorkingSet.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403FD5B4 (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVmAccessLoggingEnabled(__int64 a1)
{
  ULONG *v1; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v1 = &MiSystemPartition;
  else
    v1 = (ULONG *)*((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(a1 + 174));
  return v1[4363];
}
