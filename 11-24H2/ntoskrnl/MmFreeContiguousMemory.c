/*
 * XREFs of MmFreeContiguousMemory @ 0x1403A93D0
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14038E95C (HalpDmaAllocateMapRegisters.c)
 *     HvlpFreeOverlayPages @ 0x1403A9100 (HvlpFreeOverlayPages.c)
 *     HalFreeCommonBufferDmaThin @ 0x1403A9120 (HalFreeCommonBufferDmaThin.c)
 *     HalFreeCommonBufferV2 @ 0x1403A93B0 (HalFreeCommonBufferV2.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140410E18 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054EDEC (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaFreeChildAdapter @ 0x14054F560 (HalpDmaFreeChildAdapter.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054F804 (HalpDmaFreeMapRegisterFrame.c)
 *     HalFreeCommonBufferV3 @ 0x1405501A0 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140550340 (HalpAllocateDomainCommonBufferInternal.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055FAA4 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14055FCE0 (ExtEnvFreePhysicalMemory.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405839A0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     IopInitializeInMemoryDumpData @ 0x14059488C (IopInitializeInMemoryDumpData.c)
 *     DifMmFreeContiguousMemorySpecifyCacheWrapper @ 0x140633070 (DifMmFreeContiguousMemorySpecifyCacheWrapper.c)
 *     DifMmFreeContiguousMemoryWrapper @ 0x1406331E0 (DifMmFreeContiguousMemoryWrapper.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FF764 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140ABD4C4 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViReleaseDmaAdapter @ 0x140B89A1C (ViReleaseDmaAdapter.c)
 *     IommupHvInitializeLibrary @ 0x140C14944 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MiFreeContiguousPages @ 0x1403A95E8 (MiFreeContiguousPages.c)
 *     EtwTraceContFreeEvent @ 0x1403A9874 (EtwTraceContFreeEvent.c)
 *     ExRemovePoolTag @ 0x1403A9924 (ExRemovePoolTag.c)
 *     MiFillPteHierarchy @ 0x1403A9BF0 (MiFillPteHierarchy.c)
 *     VfPtMiscPoolNotification @ 0x140400260 (VfPtMiscPoolNotification.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404D0550 (MiLogPerfMemoryRangeEvent.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  int SystemRegionType; // eax
  unsigned int v3; // edi
  _OWORD v4[2]; // [rsp+30h] [rbp-20h] BYREF

  memset(v4, 0, sizeof(v4));
  SystemRegionType = MiGetSystemRegionType((unsigned __int64)BaseAddress);
  v3 = 4;
  if ( SystemRegionType != 4 )
  {
    if ( SystemRegionType )
    {
      MiFillPteHierarchy(BaseAddress, v4);
      do
      {
        if ( !v3 )
          break;
        --v3;
      }
      while ( (MI_READ_PTE_LOCK_FREE(*((_QWORD *)v4 + v3)) & 0x80u) == 0LL );
      if ( ((unsigned __int16)BaseAddress & 0xFFF) == 0 )
      {
        ExRemovePoolTag((ULONG_PTR)BaseAddress);
        KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
      }
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    }
    KeBugCheckEx(0xC2u, 0x62uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
  }
  EtwTraceContFreeEvent(BaseAddress, 0LL);
  ExFreePoolWithTag(BaseAddress, 0);
}
