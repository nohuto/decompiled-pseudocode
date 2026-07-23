/*
 * XREFs of MiLocateLockedVadEvent @ 0x14026757C
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x140202774 (MiCaptureWriteWatchDirtyBit.c)
 *     MiComputeVadCharges @ 0x140210398 (MiComputeVadCharges.c)
 *     MiGetAweVadPartition @ 0x1402661D4 (MiGetAweVadPartition.c)
 *     MiMarkMdlComplete @ 0x140267140 (MiMarkMdlComplete.c)
 *     MiFreeVadRange @ 0x14026731C (MiFreeVadRange.c)
 *     MiInsertVad @ 0x140290150 (MiInsertVad.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140390E28 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertPhysicalPteMapping @ 0x1403910B8 (MiInsertPhysicalPteMapping.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F0C98 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     MiCloneWriteWatch @ 0x140682328 (MiCloneWriteWatch.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     MiCopyLargeVad @ 0x140800CE4 (MiCopyLargeVad.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiUnmapViewOfSection @ 0x140896E14 (MiUnmapViewOfSection.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408D9778 (MiFreeToSubAllocatedRegion.c)
 *     MiFreeVirtualMemory @ 0x1408D9E68 (MiFreeVirtualMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408DD544 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 *     MiFillMapFileInfo @ 0x140919CF4 (MiFillMapFileInfo.c)
 *     MiInitializePartialVad @ 0x14091A104 (MiInitializePartialVad.c)
 *     MiMarkPrivateImageCfgBits @ 0x14091BF74 (MiMarkPrivateImageCfgBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409505E0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 *     MiGetAweVadPageSize @ 0x14097085C (MiGetAweVadPageSize.c)
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 *     MiGetReadyInPageBlock @ 0x140A9E628 (MiGetReadyInPageBlock.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 *     MiCreateUserPhysicalView @ 0x140AEA2A8 (MiCreateUserPhysicalView.c)
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
