/*
 * XREFs of MmFreeContiguousMemory @ 0x14038B3D0
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x140334FBC (HalpDmaAllocateMapRegisters.c)
 *     HalFreeCommonBufferV2 @ 0x14038B380 (HalFreeCommonBufferV2.c)
 *     HalFreeCommonBufferDmaThin @ 0x140411700 (HalFreeCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140414548 (HalpAllocateCommonBufferDmaThin.c)
 *     HvlpFreeOverlayPages @ 0x1404C37F0 (HvlpFreeOverlayPages.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054C488 (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaFreeChildAdapter @ 0x14054CC00 (HalpDmaFreeChildAdapter.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054CEA4 (HalpDmaFreeMapRegisterFrame.c)
 *     HalFreeCommonBufferV3 @ 0x14054D840 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054D9E0 (HalpAllocateDomainCommonBufferInternal.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055D1A4 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14055D3E0 (ExtEnvFreePhysicalMemory.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405801F0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     IopInitializeInMemoryDumpData @ 0x14059108C (IopInitializeInMemoryDumpData.c)
 *     DifMmFreeContiguousMemorySpecifyCacheWrapper @ 0x1406270B0 (DifMmFreeContiguousMemorySpecifyCacheWrapper.c)
 *     DifMmFreeContiguousMemoryWrapper @ 0x140627220 (DifMmFreeContiguousMemoryWrapper.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406F3974 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140AB93CC (HalpDmaGrowContiguousMapBuffers.c)
 *     ViReleaseDmaAdapter @ 0x140B79A3C (ViReleaseDmaAdapter.c)
 *     IommupHvInitializeLibrary @ 0x140C038B4 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 *     ExRemovePoolTag @ 0x14038B5E8 (ExRemovePoolTag.c)
 *     MiFillPteHierarchy @ 0x14038B8B0 (MiFillPteHierarchy.c)
 *     MiFreeContiguousPages @ 0x14038B910 (MiFreeContiguousPages.c)
 *     EtwTraceContFreeEvent @ 0x14038BB9C (EtwTraceContFreeEvent.c)
 *     VfPtMiscPoolNotification @ 0x1403F7FF8 (VfPtMiscPoolNotification.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404D05B4 (MiLogPerfMemoryRangeEvent.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
