/*
 * XREFs of ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14003A634
 * Callers:
 *     SmmClosePhysicalObject @ 0x14001094C (SmmClosePhysicalObject.c)
 *     SmmMapNonPagedObjectToIommu @ 0x140039B44 (SmmMapNonPagedObjectToIommu.c)
 *     SmmUnmapNonPagedObjectFromIommu @ 0x140039CC4 (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmSetAdlBaseAddress @ 0x14003A4C8 (SmmSetAdlBaseAddress.c)
 *     ?SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z @ 0x1400602E4 (-SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z.c)
 *     SmmMapPagedObjectToIommu @ 0x140061E3C (SmmMapPagedObjectToIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x1400623E0 (SmmUnmapPagedObjectFromIommu.c)
 *     SmmMapExistingMemoryToDomain @ 0x1400928CC (SmmMapExistingMemoryToDomain.c)
 *     ?SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z @ 0x140092A14 (-SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z.c)
 *     SmmMapLockedPagesToIommu @ 0x1400934D8 (SmmMapLockedPagesToIommu.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x140093578 (SmmUnmapLockedPagesFromIommu.c)
 *     ?SysMmIterateHardwareReservedRanges@@YAXPEAUSYSMM_ADAPTER@@P6AJ_K1PEAX@Z2@Z @ 0x14027F1B0 (-SysMmIterateHardwareReservedRanges@@YAXPEAUSYSMM_ADAPTER@@P6AJ_K1PEAX@Z2@Z.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14039A1F0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SmmGetLogicalAddress(const struct SYSMM_LOGICAL_BLOCK *a1)
{
  if ( a1 )
    return *((_QWORD *)a1 + 4) << 12;
  else
    return 0LL;
}
