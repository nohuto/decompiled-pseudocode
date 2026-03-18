/*
 * XREFs of MiUnmapContiguousMemory @ 0x1402AA7B8
 * Callers:
 *     MmUnmapIoSpace @ 0x1402AA7A0 (MmUnmapIoSpace.c)
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     HalpAcpiGetTableWork @ 0x1404131DC (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140413378 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiCheckAndMapTable @ 0x140413610 (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x140413928 (HalpAcpiGetRsdt.c)
 *     MiMapContiguousMemory @ 0x140413F8C (MiMapContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140414D9C (MiAllocateContiguousMemory.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14048FFC4 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalInitializeBios @ 0x140539590 (HalInitializeBios.c)
 *     HalpAcpiGetAllTablesWork @ 0x14053AA98 (HalpAcpiGetAllTablesWork.c)
 *     HalpMcaExtendedLogInitialize @ 0x14053D1DC (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054CEA4 (HalpDmaFreeMapRegisterFrame.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x1405569F4 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     DifMmUnmapIoSpaceWrapper @ 0x140628E50 (DifMmUnmapIoSpaceWrapper.c)
 *     WmipReadSMBiosSysInfo @ 0x140640348 (WmipReadSMBiosSysInfo.c)
 *     WmipFirmwareTableHandler @ 0x140640490 (WmipFirmwareTableHandler.c)
 *     MiHugePageOperation @ 0x14067A330 (MiHugePageOperation.c)
 *     BgpFwLibraryEnable @ 0x14068CDB4 (BgpFwLibraryEnable.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140BFD554 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140BFFB18 (HalpDmaInitializeMasterAdapter.c)
 *     HalpAuditEnumerateRsdts @ 0x140C02EC8 (HalpAuditEnumerateRsdts.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140C02FBC (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditQuerySlicAddresses @ 0x140C030B0 (HalpAuditQuerySlicAddresses.c)
 *     PipInitComputerIds @ 0x140C52860 (PipInitComputerIds.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x140328E50 (MiInsertCachedPte.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x1403292C0 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14038BC74 (MiInsertLargeTbFlushEntry.c)
 *     MiRemovePteTracker @ 0x1404CE90C (MiRemovePteTracker.c)
 *     MiUnmapLargePages @ 0x1404DAD88 (MiUnmapLargePages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiUnmapContiguousMemory(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned int SystemRegionType; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r12d
  __int64 *v14; // rcx
  __int64 result; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  __int64 *v18; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 ProcessorFlushList; // r15
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  size_t v24; // r8
  void *v25; // rcx
  unsigned int v27; // [rsp+80h] [rbp+18h]

  v5 = a1;
  v6 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( (dword_140FC41EC & 1) != 0 )
    MiRemovePteTracker(0LL);
  v27 = MI_IS_PHYSICAL_ADDRESS(v5);
  MiClearMappingAndDereferenceIoSpace(v5, v6);
  if ( a3 )
  {
    v7 = v5 & 0xFFFFFFFFFFFFF000uLL;
    if ( byte_140FCDC68 )
    {
      if ( v7 < 0xFFFF800000000000uLL )
        KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v5 & 0xFFFFFFFFFFFFF000uLL, 0LL);
      if ( v7 + (v6 << 12) < v7 )
        KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v5 & 0xFFFFFFFFFFFFF000uLL, v6 << 12);
      v24 = (v6 << 9) & 0x1FFFFFFFFFFFFFFFLL;
      v25 = (void *)(KasaniShadow + ((v7 + 0x800000000000LL) >> 3));
      if ( v24 )
        memset_0(v25, 0, v24);
    }
  }
  SystemRegionType = MiGetSystemRegionType(v5);
  v13 = SystemRegionType;
  if ( v27 )
  {
    v16 = ((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v17 = a2 >> 21;
    if ( (a2 & 0x1FFFFF) != 0 )
      goto LABEL_14;
    v18 = (__int64 *)&unk_140E35B40;
    if ( SystemRegionType != 6 )
      v18 = &qword_140E37328;
    result = MiInsertCachedPte(v18, ((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, (unsigned int)v17);
    if ( !(_DWORD)result )
    {
LABEL_14:
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql < 2u )
      {
        v10 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v10);
      }
      ProcessorFlushList = MiGetProcessorFlushList(v10, v9, v11, v12);
      MiInitializeTbFlushList(
        ProcessorFlushList,
        (unsigned int)&unk_140E37EC0,
        *(_DWORD *)(ProcessorFlushList + 12),
        8,
        1);
      if ( (_DWORD)v17 )
      {
        do
        {
          MiInsertLargeTbFlushEntry(ProcessorFlushList, v27, v16);
          v16 += 8LL;
          LODWORD(v17) = v17 - 1;
        }
        while ( (_DWORD)v17 );
        v5 = a1;
      }
      if ( ((a2 >> 12) & 0x1FF) != 0 )
        MiInsertTbFlushEntry(ProcessorFlushList, v16 << 25 >> 16 << 25 >> 16, (a2 >> 12) & 0x1FF, 0LL);
      MiFlushTbList(ProcessorFlushList, v21, v22);
      MiReleaseProcessorFlushList();
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v23) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
        }
        __writecr8(CurrentIrql);
      }
      return MiUnmapLargePages(v5, (a2 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL, v13);
    }
  }
  else
  {
    v14 = (__int64 *)&unk_140E35B40;
    if ( SystemRegionType != 6 )
      v14 = &qword_140E37328;
    return MiReleasePtes(v14, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v6);
  }
  return result;
}
