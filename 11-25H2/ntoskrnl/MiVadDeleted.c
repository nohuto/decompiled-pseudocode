/*
 * XREFs of MiVadDeleted @ 0x140432030
 * Callers:
 *     MiGetVadForHotPatchInProgress @ 0x1407E2CB4 (MiGetVadForHotPatchInProgress.c)
 *     MiHotPatchProcess @ 0x1407E2E80 (MiHotPatchProcess.c)
 *     MiPrepareToHotPatchVad @ 0x1407E5D00 (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x1407E5E2C (MiProcessPatchImageCfg.c)
 *     MiCleanVad @ 0x1408B4DF0 (MiCleanVad.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8E90 (NtAreMappedFilesTheSame.c)
 *     MiLockVadRange @ 0x1408D98A0 (MiLockVadRange.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1408FA704 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMarkSharedImageCfgBits @ 0x140905BC4 (MiMarkSharedImageCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x140905EA0 (MiPopulateCfgBitMap.c)
 *     MiCommitFileBackedSection @ 0x140939E1C (MiCommitFileBackedSection.c)
 *     MmIsFileMapped @ 0x140986274 (MmIsFileMapped.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1409CB8C0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiReturnPageTablePageCommitment @ 0x1409E3F50 (MiReturnPageTablePageCommitment.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409F5620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 *     MiQuerySingleLoadedPatch @ 0x140A1DB54 (MiQuerySingleLoadedPatch.c)
 *     MiPrepareVadDelete @ 0x140A22310 (MiPrepareVadDelete.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7248C (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 2) & 1;
}
