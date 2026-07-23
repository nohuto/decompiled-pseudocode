/*
 * XREFs of MiVadMapsLargeImage @ 0x1403C7440
 * Callers:
 *     MiSoftFaultMappedView @ 0x1403491DC (MiSoftFaultMappedView.c)
 *     MmOutSwapWorkingSet @ 0x1403C6F10 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C752C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1404F78D8 (MiIsVadEligibleForCommitRelease.c)
 *     MiUnmapViewOfSection @ 0x140896E14 (MiUnmapViewOfSection.c)
 *     MmProtectVirtualMemory @ 0x1408DAC60 (MmProtectVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408DBBC8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiFillMapFileInfo @ 0x140919CF4 (MiFillMapFileInfo.c)
 *     MiMarkPrivateImageCfgBits @ 0x14091BF74 (MiMarkPrivateImageCfgBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409505E0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
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
