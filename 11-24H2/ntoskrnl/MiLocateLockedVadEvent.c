/*
 * XREFs of MiLocateLockedVadEvent @ 0x1403CDE38
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiComputeVadCharges @ 0x140236208 (MiComputeVadCharges.c)
 *     MiInsertVad @ 0x14025FB40 (MiInsertVad.c)
 *     MiGetAweVadPartition @ 0x1403CC010 (MiGetAweVadPartition.c)
 *     MiMarkMdlComplete @ 0x1403CD75C (MiMarkMdlComplete.c)
 *     MiFreeVadRange @ 0x1403CDBD8 (MiFreeVadRange.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403CFA04 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertPhysicalPteMapping @ 0x1403CFC94 (MiInsertPhysicalPteMapping.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1404F31F8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F32E4 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     MiCloneWriteWatch @ 0x14068342C (MiCloneWriteWatch.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 *     MiCopyLargeVad @ 0x1408005A4 (MiCopyLargeVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408DB54C (MiFreeToSubAllocatedRegion.c)
 *     MiFreeVirtualMemory @ 0x1408DBC38 (MiFreeVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1408DF540 (MiAllocateVirtualMemory.c)
 *     MiFillMapFileInfo @ 0x1408E3144 (MiFillMapFileInfo.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiMarkPrivateImageCfgBits @ 0x1408F9698 (MiMarkPrivateImageCfgBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140967B50 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 *     MiGetAweVadPageSize @ 0x140988078 (MiGetAweVadPageSize.c)
 *     MiAllocateChildVads @ 0x1409C2580 (MiAllocateChildVads.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409C3660 (MiAllocateNewSubAllocatedRegion.c)
 *     MiInitializePartialVad @ 0x140A246FC (MiInitializePartialVad.c)
 *     MiGetReadyInPageBlock @ 0x140AA3298 (MiGetReadyInPageBlock.c)
 *     MiCreateUserPhysicalView @ 0x140AE76D8 (MiCreateUserPhysicalView.c)
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
