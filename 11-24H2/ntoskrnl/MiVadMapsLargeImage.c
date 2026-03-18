/*
 * XREFs of MiVadMapsLargeImage @ 0x140404B60
 * Callers:
 *     MiSoftFaultMappedView @ 0x1402E7B9C (MiSoftFaultMappedView.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140404528 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x140404630 (MmOutSwapWorkingSet.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1404F9FF8 (MiIsVadEligibleForCommitRelease.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140893DD8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x1408DCA30 (MmProtectVirtualMemory.c)
 *     MiFillMapFileInfo @ 0x1408E3144 (MiFillMapFileInfo.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 *     MiMarkPrivateImageCfgBits @ 0x1408F9698 (MiMarkPrivateImageCfgBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140967B50 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
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
