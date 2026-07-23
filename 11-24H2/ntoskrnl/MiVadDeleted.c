/*
 * XREFs of MiVadDeleted @ 0x14041C6D0
 * Callers:
 *     MiGetVadForHotPatchInProgress @ 0x1407F3124 (MiGetVadForHotPatchInProgress.c)
 *     MiHotPatchProcess @ 0x1407F32D8 (MiHotPatchProcess.c)
 *     MiPrepareToHotPatchVad @ 0x1407F6280 (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x1407F63AC (MiProcessPatchImageCfg.c)
 *     MmIsFileMapped @ 0x140860F44 (MmIsFileMapped.c)
 *     MiCleanVad @ 0x140895DDC (MiCleanVad.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8910 (NtAreMappedFilesTheSame.c)
 *     MiLockVadRange @ 0x1408D92F0 (MiLockVadRange.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1408DE814 (MiAllocateFromSubAllocatedRegion.c)
 *     MiCommitFileBackedSection @ 0x1409147D8 (MiCommitFileBackedSection.c)
 *     MiMarkSharedImageCfgBits @ 0x14091C554 (MiMarkSharedImageCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x14091C830 (MiPopulateCfgBitMap.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409505E0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiReturnPageTablePageCommitment @ 0x1409D7D90 (MiReturnPageTablePageCommitment.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 *     MiPrepareVadDelete @ 0x140A12E00 (MiPrepareVadDelete.c)
 *     MiQuerySingleLoadedPatch @ 0x140A2654C (MiQuerySingleLoadedPatch.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A2A370 (MiLoadSectionIntoVsmEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A69CDC (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 2) & 1;
}
