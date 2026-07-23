/*
 * XREFs of RtlClearBits @ 0x1402EA360
 * Callers:
 *     MmStoreEvictComplete @ 0x1402E9818 (MmStoreEvictComplete.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     HalpDmaReturnToContiguousPool @ 0x1402EA454 (HalpDmaReturnToContiguousPool.c)
 *     MiReduceMappedFileReadAhead @ 0x1402EA53C (MiReduceMappedFileReadAhead.c)
 *     MiTrimWorkingSetBuildup @ 0x1402EA6B0 (MiTrimWorkingSetBuildup.c)
 *     MiReduceMappedFileReadBehind @ 0x1402EA9D4 (MiReduceMappedFileReadBehind.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiFreeSlabEntries @ 0x140354D7C (MiFreeSlabEntries.c)
 *     MiAttemptPageFileReductionApc @ 0x1403EF420 (MiAttemptPageFileReductionApc.c)
 *     HvpGrowDirtyVectors @ 0x140455588 (HvpGrowDirtyVectors.c)
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     RtlFindSetBitsAndClear @ 0x1404AB280 (RtlFindSetBitsAndClear.c)
 *     MiFinishPageFileExtension @ 0x1404C4B98 (MiFinishPageFileExtension.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x140539C14 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14054CAF4 (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x140550370 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     ExtEnvClearBits @ 0x14055D898 (ExtEnvClearBits.c)
 *     HalpIommuProcessIvhdEntry @ 0x14056F048 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x14056F930 (HsaAllocateRemappingTableEntry.c)
 *     HsaUpdateRemappingTableEntry @ 0x140571110 (HsaUpdateRemappingTableEntry.c)
 *     PopWriteSecurePagesCallback @ 0x1405D0F58 (PopWriteSecurePagesCallback.c)
 *     RtlShiftLeftBitMap @ 0x1405E5960 (RtlShiftLeftBitMap.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FD3A4 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtAllocateIndex @ 0x1406FEE94 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x1406FF2F0 (HalpIrtFreeIndex.c)
 *     SmcStorePlacementGet @ 0x14079DD40 (SmcStorePlacementGet.c)
 *     MiCreatePagefile @ 0x1407EE570 (MiCreatePagefile.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1407F61D0 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x1407F6330 (MiProcessHotPatchUndoTable.c)
 *     PspQueryRateControlHistory @ 0x14085DB0C (PspQueryRateControlHistory.c)
 *     HvIsCellAllocated @ 0x1408798A0 (HvIsCellAllocated.c)
 *     HvpAdjustBitmap @ 0x140882E2C (HvpAdjustBitmap.c)
 *     HvpRemoveFreeCellHint @ 0x140886D60 (HvpRemoveFreeCellHint.c)
 *     SepGetLowBoxNumberEntry @ 0x140A42C4C (SepGetLowBoxNumberEntry.c)
 *     HvFreeHivePartial @ 0x140A46B7C (HvFreeHivePartial.c)
 *     MiReleaseDriverPtes @ 0x140A611E4 (MiReleaseDriverPtes.c)
 *     MiFreeInitializationCode @ 0x140AE80CC (MiFreeInitializationCode.c)
 *     PnprMarkOrMirrorPages @ 0x140B562B8 (PnprMarkOrMirrorPages.c)
 *     PopMirrorPhysicalMemory @ 0x140B6A3C0 (PopMirrorPhysicalMemory.c)
 *     PopCloneRange @ 0x140B6DB44 (PopCloneRange.c)
 *     ViFreeToContiguousMemory @ 0x140B8ADE8 (ViFreeToContiguousMemory.c)
 *     HalpPowerInitDiscard @ 0x140C10460 (HalpPowerInitDiscard.c)
 *     MiAssignSystemVa @ 0x140C568C8 (MiAssignSystemVa.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __stdcall RtlClearBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToClear )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToClear;
    if ( (unsigned int)v4 + NumberToClear <= 8 )
    {
      v7 = ~(byte_14002BBD0[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_14002BBD0[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset_0(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140012870[v6];
      goto LABEL_4;
    }
  }
}
