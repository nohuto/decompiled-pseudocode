/*
 * XREFs of RtlSetBits @ 0x140339430
 * Callers:
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x140333444 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     MiGetPrototypePteRanges @ 0x1403379A8 (MiGetPrototypePteRanges.c)
 *     MiReduceMappedFileReadAhead @ 0x140338034 (MiReduceMappedFileReadAhead.c)
 *     RtlFindClearBitsAndSet @ 0x140338AF0 (RtlFindClearBitsAndSet.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     MiBuildMdlForMappedFileFault @ 0x140339828 (MiBuildMdlForMappedFileFault.c)
 *     MiStoreContractVirtualPagefileApc @ 0x14036C630 (MiStoreContractVirtualPagefileApc.c)
 *     MiFindFreePageFileSpace @ 0x1403D9AC0 (MiFindFreePageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x1403DB230 (MiSetPageFileAllocationBits.c)
 *     MiJoinHugeContext @ 0x14041C95C (MiJoinHugeContext.c)
 *     MiAttemptPageFileReductionApc @ 0x14045A0D0 (MiAttemptPageFileReductionApc.c)
 *     MiReduceMappedFileReadBehind @ 0x140474794 (MiReduceMappedFileReadBehind.c)
 *     HalpIommuProcessDeviceEntries @ 0x14056E5D8 (HalpIommuProcessDeviceEntries.c)
 *     HsaUpdateRemappingTableEntry @ 0x140570980 (HsaUpdateRemappingTableEntry.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14068651C (MiAllocateLargeProcessPagesFromCache.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x1406F5198 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x1406F5464 (HalpIrtAllocateIndex.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140731CB0 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 *     HvpMarkDirty @ 0x140880BA0 (HvpMarkDirty.c)
 *     HvpRemoveFreeCellHint @ 0x140880FC0 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140881180 (HvpEnlistFreeCell.c)
 *     HvpEnlistFreeCells @ 0x140881C80 (HvpEnlistFreeCells.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408820A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvCheckBin @ 0x140995A70 (HvCheckBin.c)
 *     SepAddLuidToIndexEntry @ 0x140A0D124 (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140A0DE40 (SepGetLowBoxNumberEntry.c)
 *     RtlMarkExceptionHandlingPages @ 0x140A1548C (RtlMarkExceptionHandlingPages.c)
 *     MiReserveDriverPtes @ 0x140A5B530 (MiReserveDriverPtes.c)
 *     MiReserveExistingDriverPtes @ 0x140A6FB18 (MiReserveExistingDriverPtes.c)
 *     MiLockdownSections @ 0x140A8EA10 (MiLockdownSections.c)
 *     HvpUpdateRecoveryVector @ 0x140A9972C (HvpUpdateRecoveryVector.c)
 *     PnprMirrorMarkedPages @ 0x140B443CC (PnprMirrorMarkedPages.c)
 *     PopSetBootPhaseRange @ 0x140B4E4FC (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x140B5A7E4 (PopDiscardRange.c)
 *     PopCloneRange @ 0x140B5D1C0 (PopCloneRange.c)
 *     ViAllocateContiguousMemory @ 0x140B77D10 (ViAllocateContiguousMemory.c)
 *     MiReserveBootDriverPtes @ 0x140C3FB20 (MiReserveBootDriverPtes.c)
 *     MiInitializeTopLevelBitmap @ 0x140C55658 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __stdcall RtlSetBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToSet)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToSet )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToSet;
    if ( (unsigned int)v4 + NumberToSet <= 8 )
    {
      v7 = byte_14002B070[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_1400127F8[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset_0(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14002B070[v6];
      goto LABEL_4;
    }
  }
}
