/*
 * XREFs of MiVadMapsLargeImage @ 0x1403D9300
 * Callers:
 *     MiSoftFaultMappedView @ 0x140339FC4 (MiSoftFaultMappedView.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403D8D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1404F7888 (MiIsVadEligibleForCommitRelease.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     MmProtectVirtualMemory @ 0x1408F78C8 (MmProtectVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408F87C4 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiFillMapFileInfo @ 0x140903B10 (MiFillMapFileInfo.c)
 *     MiMarkPrivateImageCfgBits @ 0x1409067EC (MiMarkPrivateImageCfgBits.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409F5620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadMapsLargeImage(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 )
    return *(_DWORD *)(a1 + 64) & 1;
  else
    return 0LL;
}
