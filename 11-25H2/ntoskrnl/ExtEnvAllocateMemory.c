/*
 * XREFs of ExtEnvAllocateMemory @ 0x14055D130
 * Callers:
 *     HalpDmaAlwaysReserveLogicalAddressRangeInternal @ 0x14054E170 (HalpDmaAlwaysReserveLogicalAddressRangeInternal.c)
 *     IvtAllocateScalableModePasidTables @ 0x14056A25C (IvtAllocateScalableModePasidTables.c)
 *     IvtLegacyAllocateScalableModePasidTables @ 0x14056C4A0 (IvtLegacyAllocateScalableModePasidTables.c)
 *     HalpHsaCreateReservedDevice @ 0x14056E428 (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x14056E5D8 (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x14056E8B8 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocatePasidTables @ 0x14056EF5C (HsaAllocatePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x14056F1A0 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x14056F4D0 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x140570280 (HsaProcessIvmd.c)
 *     IvmdFindDeviceEntry @ 0x140570C7C (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x140570D1C (IvmdProcessRange.c)
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140574668 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x140574EC8 (HalpIvtProcessDrhdEntry.c)
 *     IvtAllocateDevice @ 0x140575738 (IvtAllocateDevice.c)
 *     HalpIvtAllocateReservedDomainList @ 0x1405759C0 (HalpIvtAllocateReservedDomainList.c)
 *     HalpIvtCreateReservedDevice @ 0x140575A34 (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x140576244 (DmrConvertDeviceScope.c)
 *     DmrEnumerateSatcDevices @ 0x1405762E0 (DmrEnumerateSatcDevices.c)
 *     DmrpRmrrTreeAddNewScope @ 0x1405767AC (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x14057684C (DmrpRmrrTreeAddRegionToDevice.c)
 *     HsaInitializeInterruptRemapping @ 0x140B42B68 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocateMemoryInternal @ 0x1405404A0 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
