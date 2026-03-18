/*
 * XREFs of RtlClearBits @ 0x14037CD40
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiFreeSlabEntries @ 0x1402D3B04 (MiFreeSlabEntries.c)
 *     MmStoreEvictComplete @ 0x14037C798 (MmStoreEvictComplete.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpDmaReturnToContiguousPool @ 0x14037CF3C (HalpDmaReturnToContiguousPool.c)
 *     MiReduceMappedFileReadAhead @ 0x14037D024 (MiReduceMappedFileReadAhead.c)
 *     MiTrimWorkingSetBuildup @ 0x14037D1A0 (MiTrimWorkingSetBuildup.c)
 *     MiReduceMappedFileReadBehind @ 0x14037D4C4 (MiReduceMappedFileReadBehind.c)
 *     HvpGrowDirtyVectors @ 0x14037D62C (HvpGrowDirtyVectors.c)
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 *     MiAttemptPageFileReductionApc @ 0x1403F9310 (MiAttemptPageFileReductionApc.c)
 *     RtlFindSetBitsAndClear @ 0x1404B09F0 (RtlFindSetBitsAndClear.c)
 *     MiFinishPageFileExtension @ 0x1404CB678 (MiFinishPageFileExtension.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x14053C388 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14054F1B4 (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x140552A30 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     ExtEnvClearBits @ 0x14055FC68 (ExtEnvClearBits.c)
 *     HalpIommuProcessIvhdEntry @ 0x140571BB8 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405724A0 (HsaAllocateRemappingTableEntry.c)
 *     HsaUpdateRemappingTableEntry @ 0x140573C80 (HsaUpdateRemappingTableEntry.c)
 *     PopWriteSecurePagesCallback @ 0x1405D3838 (PopWriteSecurePagesCallback.c)
 *     RtlShiftLeftBitMap @ 0x1405E8370 (RtlShiftLeftBitMap.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FF764 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtAllocateIndex @ 0x140701254 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x1407016B0 (HalpIrtFreeIndex.c)
 *     SmcStorePlacementGet @ 0x14079DC30 (SmcStorePlacementGet.c)
 *     MiCreatePagefile @ 0x1407EDFA0 (MiCreatePagefile.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1407F5AE0 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x1407F5C40 (MiProcessHotPatchUndoTable.c)
 *     HvIsCellAllocated @ 0x140875570 (HvIsCellAllocated.c)
 *     HvpAdjustBitmap @ 0x14087EF7C (HvpAdjustBitmap.c)
 *     HvpRemoveFreeCellHint @ 0x140882EB0 (HvpRemoveFreeCellHint.c)
 *     PspQueryRateControlHistory @ 0x1408EC2DC (PspQueryRateControlHistory.c)
 *     SepGetLowBoxNumberEntry @ 0x140A4BEEC (SepGetLowBoxNumberEntry.c)
 *     HvFreeHivePartial @ 0x140A4FDCC (HvFreeHivePartial.c)
 *     MiReleaseDriverPtes @ 0x140A67CE4 (MiReleaseDriverPtes.c)
 *     MiFreeInitializationCode @ 0x140AE67EC (MiFreeInitializationCode.c)
 *     PnprMarkOrMirrorPages @ 0x140B54268 (PnprMarkOrMirrorPages.c)
 *     PopMirrorPhysicalMemory @ 0x140B68280 (PopMirrorPhysicalMemory.c)
 *     PopCloneRange @ 0x140B6C2A0 (PopCloneRange.c)
 *     ViFreeToContiguousMemory @ 0x140B88DE8 (ViFreeToContiguousMemory.c)
 *     HalpPowerInitDiscard @ 0x140C0E460 (HalpPowerInitDiscard.c)
 *     MiAssignSystemVa @ 0x140C54738 (MiAssignSystemVa.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
      v7 = ~(byte_14002B770[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_14002B770[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset_0(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140012BB8[v6];
      goto LABEL_4;
    }
  }
}
