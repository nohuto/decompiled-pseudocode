/*
 * XREFs of ExtEnvAllocateMemory @ 0x14055FA30
 * Callers:
 *     HalpDmaAlwaysReserveLogicalAddressRangeInternal @ 0x140550AD0 (HalpDmaAlwaysReserveLogicalAddressRangeInternal.c)
 *     IvtAllocateScalableModePasidTables @ 0x14056D55C (IvtAllocateScalableModePasidTables.c)
 *     IvtLegacyAllocateScalableModePasidTables @ 0x14056F7A0 (IvtLegacyAllocateScalableModePasidTables.c)
 *     HalpHsaCreateReservedDevice @ 0x140571728 (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x1405718D8 (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x140571BB8 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocatePasidTables @ 0x14057225C (HsaAllocatePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405724A0 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x1405727D0 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x140573580 (HsaProcessIvmd.c)
 *     IvmdFindDeviceEntry @ 0x140573F7C (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x14057401C (IvmdProcessRange.c)
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140577968 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405781C8 (HalpIvtProcessDrhdEntry.c)
 *     IvtAllocateDevice @ 0x140578A38 (IvtAllocateDevice.c)
 *     HalpIvtAllocateReservedDomainList @ 0x140578CC0 (HalpIvtAllocateReservedDomainList.c)
 *     HalpIvtCreateReservedDevice @ 0x140578D34 (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x140579544 (DmrConvertDeviceScope.c)
 *     DmrEnumerateSatcDevices @ 0x1405795E0 (DmrEnumerateSatcDevices.c)
 *     DmrpRmrrTreeAddNewScope @ 0x140579AAC (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x140579B4C (DmrpRmrrTreeAddRegionToDevice.c)
 *     HsaInitializeInterruptRemapping @ 0x140B52B68 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocateMemoryInternal @ 0x140542CD0 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
