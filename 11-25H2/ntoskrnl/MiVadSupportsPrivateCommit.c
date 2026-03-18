/*
 * XREFs of MiVadSupportsPrivateCommit @ 0x140239D80
 * Callers:
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiVadSupportsCombine @ 0x140239CF4 (MiVadSupportsCombine.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403D8D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1404F7888 (MiIsVadEligibleForCommitRelease.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408F87C4 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x1409FD8CC (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadSupportsPrivateCommit(__int64 a1)
{
  int v1; // eax
  int v2; // edx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = v1 & 0x200000;
  if ( (v1 & 0x70) != 0 )
  {
    if ( !v2 && (*(_DWORD *)(a1 + 64) & 1) != 0 || (*(_DWORD *)(a1 + 48) & 0x70) != 0x20 )
      return (*(_DWORD *)(a1 + 48) & 0x70) == 64;
  }
  else if ( v2 && ((v1 & 0x800000) != 0 || (v1 & 0x180000u) >= 0x100000) )
  {
    return (*(_DWORD *)(a1 + 48) & 0x70) == 64;
  }
  return 1LL;
}
