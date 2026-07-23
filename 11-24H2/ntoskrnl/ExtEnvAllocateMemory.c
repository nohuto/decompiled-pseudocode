/*
 * XREFs of ExtEnvAllocateMemory @ 0x14055D660
 * Callers:
 *     HalpDmaAlwaysReserveLogicalAddressRangeInternal @ 0x14054E410 (HalpDmaAlwaysReserveLogicalAddressRangeInternal.c)
 *     IvtAllocateScalableModePasidTables @ 0x14056A9EC (IvtAllocateScalableModePasidTables.c)
 *     IvtLegacyAllocateScalableModePasidTables @ 0x14056CC30 (IvtLegacyAllocateScalableModePasidTables.c)
 *     HalpHsaCreateReservedDevice @ 0x14056EBB8 (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x14056ED68 (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x14056F048 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocatePasidTables @ 0x14056F6EC (HsaAllocatePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x14056F930 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x14056FC60 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x140570A10 (HsaProcessIvmd.c)
 *     IvmdFindDeviceEntry @ 0x14057140C (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x1405714AC (IvmdProcessRange.c)
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140574DF8 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x140575658 (HalpIvtProcessDrhdEntry.c)
 *     IvtAllocateDevice @ 0x140575EC8 (IvtAllocateDevice.c)
 *     HalpIvtAllocateReservedDomainList @ 0x140576150 (HalpIvtAllocateReservedDomainList.c)
 *     HalpIvtCreateReservedDevice @ 0x1405761C4 (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x1405769D4 (DmrConvertDeviceScope.c)
 *     DmrEnumerateSatcDevices @ 0x140576A70 (DmrEnumerateSatcDevices.c)
 *     DmrpRmrrTreeAddNewScope @ 0x140576F3C (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x140576FDC (DmrpRmrrTreeAddRegionToDevice.c)
 *     HsaInitializeInterruptRemapping @ 0x140B54BB8 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall ExtEnvAllocateMemory(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  void *MemoryInternal; // rax

  v3 = 0;
  v4 = a2;
  if ( HalpExtEnvAllocationPhase )
  {
    if ( HalpExtEnvAllocationPhase != 1 )
    {
      *a3 = 0LL;
      return (unsigned int)-1073741670;
    }
    MemoryInternal = (void *)HalpMmAllocCtxAlloc(a1, a2);
  }
  else
  {
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(a2, 1u);
  }
  *a3 = MemoryInternal;
  if ( !MemoryInternal )
    return (unsigned int)-1073741670;
  memset_0(MemoryInternal, 0, v4);
  return v3;
}
