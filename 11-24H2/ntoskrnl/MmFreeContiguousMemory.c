/*
 * XREFs of MmFreeContiguousMemory @ 0x140398060
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403962A4 (HalpAllocateCommonBufferDmaThin.c)
 *     HvlpFreeOverlayPages @ 0x140397D90 (HvlpFreeOverlayPages.c)
 *     HalFreeCommonBufferDmaThin @ 0x140397DB0 (HalFreeCommonBufferDmaThin.c)
 *     HalFreeCommonBufferV2 @ 0x140398040 (HalFreeCommonBufferV2.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054C72C (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaFreeChildAdapter @ 0x14054CEA0 (HalpDmaFreeChildAdapter.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054D144 (HalpDmaFreeMapRegisterFrame.c)
 *     HalFreeCommonBufferV3 @ 0x14054DAE0 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054DC80 (HalpAllocateDomainCommonBufferInternal.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055D6D4 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14055D910 (ExtEnvFreePhysicalMemory.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140580D20 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     IopInitializeInMemoryDumpData @ 0x1405918B0 (IopInitializeInMemoryDumpData.c)
 *     DifMmFreeContiguousMemorySpecifyCacheWrapper @ 0x140631630 (DifMmFreeContiguousMemorySpecifyCacheWrapper.c)
 *     DifMmFreeContiguousMemoryWrapper @ 0x1406317A0 (DifMmFreeContiguousMemoryWrapper.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FD3A4 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140AB8534 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViReleaseDmaAdapter @ 0x140B8BA1C (ViReleaseDmaAdapter.c)
 *     IommupHvInitializeLibrary @ 0x140C16944 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiFreeContiguousPages @ 0x140398278 (MiFreeContiguousPages.c)
 *     EtwTraceContFreeEvent @ 0x140398504 (EtwTraceContFreeEvent.c)
 *     ExRemovePoolTag @ 0x1403985B4 (ExRemovePoolTag.c)
 *     MiFillPteHierarchy @ 0x140398880 (MiFillPteHierarchy.c)
 *     VfPtMiscPoolNotification @ 0x1403FA750 (VfPtMiscPoolNotification.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404C9744 (MiLogPerfMemoryRangeEvent.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
