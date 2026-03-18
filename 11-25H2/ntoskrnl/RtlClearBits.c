/*
 * XREFs of RtlClearBits @ 0x140337F60
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MmStoreEvictComplete @ 0x140326BF4 (MmStoreEvictComplete.c)
 *     HalpDmaReturnToContiguousPool @ 0x140337CE4 (HalpDmaReturnToContiguousPool.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     MiReduceMappedFileReadAhead @ 0x140338034 (MiReduceMappedFileReadAhead.c)
 *     MiTrimWorkingSetBuildup @ 0x14038A000 (MiTrimWorkingSetBuildup.c)
 *     MiFreeSlabEntries @ 0x1403B5608 (MiFreeSlabEntries.c)
 *     MiAttemptPageFileReductionApc @ 0x14045A0D0 (MiAttemptPageFileReductionApc.c)
 *     HvpGrowDirtyVectors @ 0x1404612E4 (HvpGrowDirtyVectors.c)
 *     BgpFwFreeMemory @ 0x140468C70 (BgpFwFreeMemory.c)
 *     MiReduceMappedFileReadBehind @ 0x140474794 (MiReduceMappedFileReadBehind.c)
 *     RtlFindSetBitsAndClear @ 0x1404AFC00 (RtlFindSetBitsAndClear.c)
 *     MiFinishPageFileExtension @ 0x1404CB93C (MiFinishPageFileExtension.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x140539B84 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14054C850 (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x140550130 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     ExtEnvClearBits @ 0x14055D368 (ExtEnvClearBits.c)
 *     HalpIommuProcessIvhdEntry @ 0x14056E8B8 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x14056F1A0 (HsaAllocateRemappingTableEntry.c)
 *     HsaUpdateRemappingTableEntry @ 0x140570980 (HsaUpdateRemappingTableEntry.c)
 *     PopWriteSecurePagesCallback @ 0x1405CEDE0 (PopWriteSecurePagesCallback.c)
 *     RtlShiftLeftBitMap @ 0x1405DC2C0 (RtlShiftLeftBitMap.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406F3974 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtAllocateIndex @ 0x1406F5464 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x1406F58C0 (HalpIrtFreeIndex.c)
 *     SmcStorePlacementGet @ 0x14078E870 (SmcStorePlacementGet.c)
 *     MiCreatePagefile @ 0x1407DE100 (MiCreatePagefile.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1407E5C50 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x1407E5DB0 (MiProcessHotPatchUndoTable.c)
 *     HvIsCellAllocated @ 0x140878DF0 (HvIsCellAllocated.c)
 *     HvpAdjustBitmap @ 0x14087E37C (HvpAdjustBitmap.c)
 *     HvpRemoveFreeCellHint @ 0x140880FC0 (HvpRemoveFreeCellHint.c)
 *     PspQueryRateControlHistory @ 0x1408DCF0C (PspQueryRateControlHistory.c)
 *     SepGetLowBoxNumberEntry @ 0x140A0DE40 (SepGetLowBoxNumberEntry.c)
 *     HvFreeHivePartial @ 0x140A4CAE0 (HvFreeHivePartial.c)
 *     MiReleaseDriverPtes @ 0x140A651C4 (MiReleaseDriverPtes.c)
 *     MiFreeInitializationCode @ 0x140AD58A0 (MiFreeInitializationCode.c)
 *     PnprMarkOrMirrorPages @ 0x140B44268 (PnprMarkOrMirrorPages.c)
 *     PopMirrorPhysicalMemory @ 0x140B58450 (PopMirrorPhysicalMemory.c)
 *     PopCloneRange @ 0x140B5D1C0 (PopCloneRange.c)
 *     ViFreeToContiguousMemory @ 0x140B78E08 (ViFreeToContiguousMemory.c)
 *     HalpPowerInitDiscard @ 0x140BFD460 (HalpPowerInitDiscard.c)
 *     MiAssignSystemVa @ 0x140C434C0 (MiAssignSystemVa.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
      v7 = ~(byte_14002B070[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_14002B070[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset_0(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_1400127F8[v6];
      goto LABEL_4;
    }
  }
}
