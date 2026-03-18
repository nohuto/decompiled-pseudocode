/*
 * XREFs of MiUnmapContiguousMemory @ 0x140263178
 * Callers:
 *     MmUnmapIoSpace @ 0x140263160 (MmUnmapIoSpace.c)
 *     HalpAcpiCheckAndMapTable @ 0x140264C3C (HalpAcpiCheckAndMapTable.c)
 *     MiMapContiguousMemory @ 0x1402E9A9C (MiMapContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1403A93D0 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x14041182C (MiAllocateContiguousMemory.c)
 *     HalpAcpiGetTableWork @ 0x14047856C (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140478708 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetRsdt @ 0x1404789A4 (HalpAcpiGetRsdt.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14048F950 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalInitializeBios @ 0x14053BD40 (HalInitializeBios.c)
 *     HalpAcpiGetAllTablesWork @ 0x14053D2C8 (HalpAcpiGetAllTablesWork.c)
 *     HalpMcaExtendedLogInitialize @ 0x14053FA0C (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054F804 (HalpDmaFreeMapRegisterFrame.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x1405592F4 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     DifMmUnmapIoSpaceWrapper @ 0x140634E10 (DifMmUnmapIoSpaceWrapper.c)
 *     WmipReadSMBiosSysInfo @ 0x14064C35C (WmipReadSMBiosSysInfo.c)
 *     WmipFirmwareTableHandler @ 0x14064C4B0 (WmipFirmwareTableHandler.c)
 *     MiHugePageOperation @ 0x140685BC0 (MiHugePageOperation.c)
 *     BgpFwLibraryEnable @ 0x140698104 (BgpFwLibraryEnable.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140C0E554 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140C10B98 (HalpDmaInitializeMasterAdapter.c)
 *     HalpAuditEnumerateRsdts @ 0x140C13F58 (HalpAuditEnumerateRsdts.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140C1404C (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditQuerySlicAddresses @ 0x140C14140 (HalpAuditQuerySlicAddresses.c)
 *     PipInitComputerIds @ 0x140C63B74 (PipInitComputerIds.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x14028E4E0 (MiInsertCachedPte.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14028E960 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403A4A2C (MiInsertLargeTbFlushEntry.c)
 *     MiRemovePteTracker @ 0x1404CE770 (MiRemovePteTracker.c)
 *     MiUnmapLargePages @ 0x1404D8B98 (MiUnmapLargePages.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiUnmapContiguousMemory(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned int SystemRegionType; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r12d
  __int64 *v12; // rcx
  __int64 result; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r14
  __int64 *v16; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 ProcessorFlushList; // r15
  __int64 v19; // rdx
  __int64 v20; // rdx
  size_t v21; // r8
  void *v22; // rcx
  unsigned int v24; // [rsp+80h] [rbp+18h]

  v5 = a1;
  v6 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( (dword_140FC41FC & 1) != 0 )
    MiRemovePteTracker(0LL);
  v24 = MI_IS_PHYSICAL_ADDRESS(v5);
  MiClearMappingAndDereferenceIoSpace(v5, v6);
  if ( a3 )
  {
    v7 = v5 & 0xFFFFFFFFFFFFF000uLL;
    if ( byte_140FCDC28 )
    {
      if ( v7 < 0xFFFF800000000000uLL )
        KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v5 & 0xFFFFFFFFFFFFF000uLL, 0LL);
      if ( v7 + (v6 << 12) < v7 )
        KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v5 & 0xFFFFFFFFFFFFF000uLL, v6 << 12);
      v21 = (v6 << 9) & 0x1FFFFFFFFFFFFFFFLL;
      v22 = (void *)(KasaniShadow + ((v7 + 0x800000000000LL) >> 3));
      if ( v21 )
        memset_0(v22, 0, v21);
    }
  }
  SystemRegionType = MiGetSystemRegionType(v5);
  v11 = SystemRegionType;
  if ( v24 )
  {
    v14 = ((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v15 = a2 >> 21;
    if ( (a2 & 0x1FFFFF) != 0 )
      goto LABEL_14;
    v16 = (__int64 *)&unk_140E35D80;
    if ( SystemRegionType != 6 )
      v16 = &qword_140E37568;
    result = MiInsertCachedPte(v16, ((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, (unsigned int)v15);
    if ( !(_DWORD)result )
    {
LABEL_14:
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql < 2u )
      {
        v10 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v9) = 2;
          KiRaiseIrqlProcessIrqlFlags(v10, v9);
        }
      }
      ProcessorFlushList = MiGetProcessorFlushList(v10, v9);
      MiInitializeTbFlushList(ProcessorFlushList, (__int64)&unk_140E38100, *(_DWORD *)(ProcessorFlushList + 12), 8, 1);
      if ( (_DWORD)v15 )
      {
        do
        {
          MiInsertLargeTbFlushEntry(ProcessorFlushList, v24, v14);
          v14 += 8LL;
          LODWORD(v15) = v15 - 1;
        }
        while ( (_DWORD)v15 );
        v5 = a1;
      }
      if ( ((a2 >> 12) & 0x1FF) != 0 )
        MiInsertTbFlushEntry(ProcessorFlushList, v14 << 25 >> 16 << 25 >> 16, (a2 >> 12) & 0x1FF, 0);
      MiFlushTbList(ProcessorFlushList, v19);
      MiReleaseProcessorFlushList();
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v20) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
        }
        __writecr8(CurrentIrql);
      }
      return MiUnmapLargePages(v5, (a2 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL, v11);
    }
  }
  else
  {
    v12 = (__int64 *)&unk_140E35D80;
    if ( SystemRegionType != 6 )
      v12 = &qword_140E37568;
    return MiReleasePtes(v12, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v6);
  }
  return result;
}
