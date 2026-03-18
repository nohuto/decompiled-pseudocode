/*
 * XREFs of MiLocateLockedVadEvent @ 0x1402A57D4
 * Callers:
 *     MiCheckUserVirtualAddress @ 0x1402437D0 (MiCheckUserVirtualAddress.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A3914 (MiCaptureWriteWatchDirtyBit.c)
 *     MiFreeVadRange @ 0x1402A45F8 (MiFreeVadRange.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402A52C8 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     MiInsertVad @ 0x1402A80AC (MiInsertVad.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403381B0 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertPhysicalPteMapping @ 0x140338440 (MiInsertPhysicalPteMapping.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiComputeVadCharges @ 0x14038505C (MiComputeVadCharges.c)
 *     MiMarkMdlComplete @ 0x1404947B0 (MiMarkMdlComplete.c)
 *     MiGetAweVadPartition @ 0x1404B3A84 (MiGetAweVadPartition.c)
 *     MiCloneWriteWatch @ 0x140677C0C (MiCloneWriteWatch.c)
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 *     MiCopyLargeVad @ 0x1407F06EC (MiCopyLargeVad.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408F63EC (MiFreeToSubAllocatedRegion.c)
 *     MiFreeVirtualMemory @ 0x1408F6ADC (MiFreeVirtualMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408F9D30 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 *     MiInitializePartialVad @ 0x140902310 (MiInitializePartialVad.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiFillMapFileInfo @ 0x140903B10 (MiFillMapFileInfo.c)
 *     MiMarkPrivateImageCfgBits @ 0x1409067EC (MiMarkPrivateImageCfgBits.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 *     MiGetAweVadPageSize @ 0x1409D236C (MiGetAweVadPageSize.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409F5620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiAllocateChildVads @ 0x140A40978 (MiAllocateChildVads.c)
 *     MiGetReadyInPageBlock @ 0x140A9EAE8 (MiGetReadyInPageBlock.c)
 *     MiCreateUserPhysicalView @ 0x140ABCAD0 (MiCreateUserPhysicalView.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiLocateLockedVadEvent(__int64 a1, int a2)
{
  unsigned __int64 result; // rax

  for ( result = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; result; result = *(_QWORD *)result )
  {
    if ( (a2 & *(_DWORD *)(result + 80)) != 0 )
      break;
  }
  return result;
}
