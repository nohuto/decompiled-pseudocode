/*
 * XREFs of MiStartingOffset @ 0x1403236B0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MiMakeSystemCachePteValid @ 0x140225760 (MiMakeSystemCachePteValid.c)
 *     MiAdvanceVadView @ 0x1402A4550 (MiAdvanceVadView.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402C5040 (MiMakeSystemCacheRangeValid.c)
 *     MiViewMayContainPage @ 0x140321440 (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiEmptyPageAccessLog @ 0x140322FE0 (MiEmptyPageAccessLog.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiReadyFlushMdlToWrite @ 0x14033F528 (MiReadyFlushMdlToWrite.c)
 *     MiFinishMdlForMappedFileFault @ 0x14034EE44 (MiFinishMdlForMappedFileFault.c)
 *     MiLogPageAccess @ 0x1403806A0 (MiLogPageAccess.c)
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14045316C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiInitializeImageProtos @ 0x140453928 (MiInitializeImageProtos.c)
 *     MiCompleteRestrictedImageFault @ 0x140464CC4 (MiCompleteRestrictedImageFault.c)
 *     MiInitializeCachedExtentWalker @ 0x1404C091C (MiInitializeCachedExtentWalker.c)
 *     MiLocateCachedExtent @ 0x1404C0AA8 (MiLocateCachedExtent.c)
 *     MiFillMapFileInfo @ 0x140903B10 (MiFillMapFileInfo.c)
 *     MiCommitFileBackedSection @ 0x140939E1C (MiCommitFileBackedSection.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x1409CA7D8 (MiPfAllocateMdls.c)
 *     MiCfgMarkValidEntries @ 0x1409FDA5C (MiCfgMarkValidEntries.c)
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetSharedProtos @ 0x140322970 (MiGetSharedProtos.c)
 */

unsigned __int64 __fastcall MiStartingOffset(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  int v5; // eax
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v9; // rbx

  v3 = *(_QWORD *)a1;
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 56LL);
  v6 = *(_QWORD *)(a1 + 8);
  if ( (v5 & 0x20) != 0 )
  {
    if ( a2 < v6 || a2 >= v6 + 8LL * *(unsigned int *)(a1 + 44) )
      v9 = a2 - *(_QWORD *)(MiGetSharedProtos(v3, a3, a1) + 72);
    else
      v9 = a2 - v6;
    return ((v9 << 9) & 0xFFFFFFFFFFFFF000uLL) + ((unsigned __int64)*(unsigned int *)(a1 + 36) << 9);
  }
  else
  {
    if ( v6 )
      v7 = (__int64)(a2 - v6) >> 3 << 12;
    else
      v7 = 0LL;
    return v7 + ((*(unsigned int *)(a1 + 36) | ((unsigned __int64)(*(_DWORD *)(a1 + 32) & 0xFFC0) << 26)) << 12);
  }
}
