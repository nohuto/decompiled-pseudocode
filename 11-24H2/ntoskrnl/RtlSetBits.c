/*
 * XREFs of RtlSetBits @ 0x14024BCC0
 * Callers:
 *     RtlFindClearBitsAndSet @ 0x14024B8D0 (RtlFindClearBitsAndSet.c)
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402E604C (MiBuildMdlForMappedFileFault.c)
 *     MiStoreContractVirtualPagefileApc @ 0x1403659B0 (MiStoreContractVirtualPagefileApc.c)
 *     MiSetPageFileAllocationBits @ 0x140367504 (MiSetPageFileAllocationBits.c)
 *     MiFindFreePageFileSpace @ 0x140367D88 (MiFindFreePageFileSpace.c)
 *     MiReduceMappedFileReadAhead @ 0x14037D024 (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x14037D4C4 (MiReduceMappedFileReadBehind.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x14038D194 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     MiAttemptPageFileReductionApc @ 0x1403F9310 (MiAttemptPageFileReductionApc.c)
 *     MiGetPrototypePteRanges @ 0x14042DE18 (MiGetPrototypePteRanges.c)
 *     MiJoinHugeContext @ 0x140487A9C (MiJoinHugeContext.c)
 *     HalpIommuProcessDeviceEntries @ 0x1405718D8 (HalpIommuProcessDeviceEntries.c)
 *     HsaUpdateRemappingTableEntry @ 0x140573C80 (HsaUpdateRemappingTableEntry.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14069197C (MiAllocateLargeProcessPagesFromCache.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x140700F88 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x140701254 (HalpIrtAllocateIndex.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x14073DCD0 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     HvpMarkDirty @ 0x140882A90 (HvpMarkDirty.c)
 *     HvpRemoveFreeCellHint @ 0x140882EB0 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140883070 (HvpEnlistFreeCell.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140982010 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x140983CA0 (HvpEnlistFreeCells.c)
 *     HvCheckBin @ 0x14098AC00 (HvCheckBin.c)
 *     RtlMarkExceptionHandlingPages @ 0x140A201BC (RtlMarkExceptionHandlingPages.c)
 *     SepAddLuidToIndexEntry @ 0x140A330CC (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140A4BEEC (SepGetLowBoxNumberEntry.c)
 *     MiReserveExistingDriverPtes @ 0x140A71AD8 (MiReserveExistingDriverPtes.c)
 *     MiLockdownSections @ 0x140A93500 (MiLockdownSections.c)
 *     HvpUpdateRecoveryVector @ 0x140A9E570 (HvpUpdateRecoveryVector.c)
 *     MiReserveDriverPtes @ 0x140AB636C (MiReserveDriverPtes.c)
 *     PnprMirrorMarkedPages @ 0x140B543CC (PnprMirrorMarkedPages.c)
 *     PopSetBootPhaseRange @ 0x140B5E5BC (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x140B6A2D8 (PopDiscardRange.c)
 *     PopCloneRange @ 0x140B6C2A0 (PopCloneRange.c)
 *     ViAllocateContiguousMemory @ 0x140B87CF0 (ViAllocateContiguousMemory.c)
 *     MiReserveBootDriverPtes @ 0x140C50D50 (MiReserveBootDriverPtes.c)
 *     MiInitializeTopLevelBitmap @ 0x140C672E0 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
      v7 = byte_14002B770[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_140012BB8[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset_0(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14002B770[v6];
      goto LABEL_4;
    }
  }
}
