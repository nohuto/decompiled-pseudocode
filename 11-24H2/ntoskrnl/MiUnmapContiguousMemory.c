/*
 * XREFs of MiUnmapContiguousMemory @ 0x1402929E8
 * Callers:
 *     MmUnmapIoSpace @ 0x1402929D0 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x14034B0DC (MiMapContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140395A6C (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x140398060 (MmFreeContiguousMemory.c)
 *     HalpAcpiGetTableWork @ 0x14045F9FC (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14045FB98 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiCheckAndMapTable @ 0x14045FE34 (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x14046014C (HalpAcpiGetRsdt.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140489B60 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalInitializeBios @ 0x140539620 (HalInitializeBios.c)
 *     HalpAcpiGetAllTablesWork @ 0x14053ABC8 (HalpAcpiGetAllTablesWork.c)
 *     HalpMcaExtendedLogInitialize @ 0x14053D30C (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054D144 (HalpDmaFreeMapRegisterFrame.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x140556F24 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     DifMmUnmapIoSpaceWrapper @ 0x1406333D0 (DifMmUnmapIoSpaceWrapper.c)
 *     WmipReadSMBiosSysInfo @ 0x14064A91C (WmipReadSMBiosSysInfo.c)
 *     WmipFirmwareTableHandler @ 0x14064AAC0 (WmipFirmwareTableHandler.c)
 *     MiHugePageOperation @ 0x140686CF0 (MiHugePageOperation.c)
 *     BgpFwLibraryEnable @ 0x140699184 (BgpFwLibraryEnable.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140C10554 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140C12B98 (HalpDmaInitializeMasterAdapter.c)
 *     HalpAuditEnumerateRsdts @ 0x140C15F58 (HalpAuditEnumerateRsdts.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140C1604C (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditQuerySlicAddresses @ 0x140C16140 (HalpAuditQuerySlicAddresses.c)
 *     PipInitComputerIds @ 0x140C65CF0 (PipInitComputerIds.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x14029E0E0 (MiInsertCachedPte.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14029E560 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiRemovePteTracker @ 0x1404C793C (MiRemovePteTracker.c)
 *     MiUnmapLargePages @ 0x1404D1FE8 (MiUnmapLargePages.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiUnmapContiguousMemory(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  size_t v8; // r8
  unsigned __int64 v9; // rcx
  unsigned int SystemRegionType; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // r12d
  __int64 *v15; // rcx
  __int64 result; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r14
  __int64 *v19; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 ProcessorFlushList; // r15
  __int64 v22; // rdx
  void *v23; // rcx
  int v25; // [rsp+80h] [rbp+18h]

  v5 = a1;
  v6 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( (dword_140FC51FC & 1) != 0 )
    MiRemovePteTracker(0LL);
  v25 = MI_IS_PHYSICAL_ADDRESS(v5);
  MiClearMappingAndDereferenceIoSpace(v5, v6);
  if ( a3 )
  {
    v8 = v6 << 12;
    v9 = v5 & 0xFFFFFFFFFFFFF000uLL;
    if ( byte_140FCECA8 )
    {
      if ( v9 < 0xFFFF800000000000uLL )
        KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v5 & 0xFFFFFFFFFFFFF000uLL, 0LL);
      if ( v9 + v8 < v9 )
        KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v5 & 0xFFFFFFFFFFFFF000uLL, v6 << 12);
      v8 = (v6 << 9) & 0x1FFFFFFFFFFFFFFFLL;
      v23 = (void *)(KasaniShadow + ((v9 + 0x800000000000LL) >> 3));
      if ( v8 )
        memset_0(v23, 0, v8);
    }
  }
  SystemRegionType = MiGetSystemRegionType(v5, v7, v8);
  v14 = SystemRegionType;
  if ( v25 )
  {
    v17 = ((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v18 = a2 >> 21;
    if ( (a2 & 0x1FFFFF) != 0 )
      goto LABEL_14;
    v19 = (__int64 *)&unk_140E35EC0;
    if ( SystemRegionType != 6 )
      v19 = &qword_140E376A8;
    result = MiInsertCachedPte(v19, ((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, (unsigned int)v18);
    if ( !(_DWORD)result )
    {
LABEL_14:
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql < 2u )
      {
        v12 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v11) = 2;
          KiRaiseIrqlProcessIrqlFlags(v12, v11);
        }
      }
      ProcessorFlushList = MiGetProcessorFlushList(v12, v11, v13);
      MiInitializeTbFlushList(ProcessorFlushList, (__int64)&unk_140E38240, *(_DWORD *)(ProcessorFlushList + 12), 8, 1);
      if ( (_DWORD)v18 )
      {
        do
        {
          MiInsertLargeTbFlushEntry(ProcessorFlushList, v25, v17);
          v17 += 8LL;
          LODWORD(v18) = v18 - 1;
        }
        while ( (_DWORD)v18 );
        v5 = a1;
      }
      if ( ((a2 >> 12) & 0x1FF) != 0 )
        MiInsertTbFlushEntry(ProcessorFlushList, (__int64)(v17 << 25) >> 16 << 25 >> 16, (a2 >> 12) & 0x1FF, 0);
      MiFlushTbList(ProcessorFlushList);
      MiReleaseProcessorFlushList();
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v22) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
        }
        __writecr8(CurrentIrql);
      }
      return MiUnmapLargePages(v5, (a2 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL, v14);
    }
  }
  else
  {
    v15 = (__int64 *)&unk_140E35EC0;
    if ( SystemRegionType != 6 )
      v15 = &qword_140E376A8;
    return MiReleasePtes(v15, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v6);
  }
  return result;
}
