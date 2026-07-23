/*
 * XREFs of RtlSetBits @ 0x14027C2D0
 * Callers:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     MiReduceMappedFileReadAhead @ 0x1402EA53C (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x1402EA9D4 (MiReduceMappedFileReadBehind.c)
 *     MiBuildMdlForMappedFileFault @ 0x140347688 (MiBuildMdlForMappedFileFault.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x140386AD4 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     MiFindFreePageFileSpace @ 0x1403C438C (MiFindFreePageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x1403C4D5C (MiSetPageFileAllocationBits.c)
 *     MiAttemptPageFileReductionApc @ 0x1403EF420 (MiAttemptPageFileReductionApc.c)
 *     MiGetPrototypePteRanges @ 0x14041FB48 (MiGetPrototypePteRanges.c)
 *     MiStoreContractVirtualPagefileApc @ 0x140476BB0 (MiStoreContractVirtualPagefileApc.c)
 *     MiJoinHugeContext @ 0x140482B0C (MiJoinHugeContext.c)
 *     HalpIommuProcessDeviceEntries @ 0x14056ED68 (HalpIommuProcessDeviceEntries.c)
 *     HsaUpdateRemappingTableEntry @ 0x140571110 (HsaUpdateRemappingTableEntry.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x140692A4C (MiAllocateLargeProcessPagesFromCache.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x1406FEBC8 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x1406FEE94 (HalpIrtAllocateIndex.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x14073BC00 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 *     HvpRemoveFreeCellHint @ 0x140886D60 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140886F20 (HvpEnlistFreeCell.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14096A820 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x14096C4B0 (HvpEnlistFreeCells.c)
 *     HvCheckBin @ 0x1409742F0 (HvCheckBin.c)
 *     RtlMarkExceptionHandlingPages @ 0x140A152BC (RtlMarkExceptionHandlingPages.c)
 *     SepAddLuidToIndexEntry @ 0x140A270DC (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140A42C4C (SepGetLowBoxNumberEntry.c)
 *     MiReserveDriverPtes @ 0x140A555D0 (MiReserveDriverPtes.c)
 *     MiReserveExistingDriverPtes @ 0x140A6AEB8 (MiReserveExistingDriverPtes.c)
 *     MiLockdownSections @ 0x140A8FCB0 (MiLockdownSections.c)
 *     HvpUpdateRecoveryVector @ 0x140A99AE0 (HvpUpdateRecoveryVector.c)
 *     PnprMirrorMarkedPages @ 0x140B5641C (PnprMirrorMarkedPages.c)
 *     PopSetBootPhaseRange @ 0x140B6063C (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x140B6B9E8 (PopDiscardRange.c)
 *     PopCloneRange @ 0x140B6DB44 (PopCloneRange.c)
 *     ViAllocateContiguousMemory @ 0x140B89CF0 (ViAllocateContiguousMemory.c)
 *     MiReserveBootDriverPtes @ 0x140C52EE0 (MiReserveBootDriverPtes.c)
 *     MiInitializeTopLevelBitmap @ 0x140C6945C (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
      v7 = byte_14002BBD0[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_140012870[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset_0(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14002BBD0[v6];
      goto LABEL_4;
    }
  }
}
