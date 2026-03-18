/*
 * XREFs of ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14003ADD4
 * Callers:
 *     SmmClosePhysicalObject @ 0x14001FDDC (SmmClosePhysicalObject.c)
 *     SmmMapNonPagedObjectToIommu @ 0x14003A2E8 (SmmMapNonPagedObjectToIommu.c)
 *     SmmUnmapNonPagedObjectFromIommu @ 0x14003A468 (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmSetAdlBaseAddress @ 0x14003AC68 (SmmSetAdlBaseAddress.c)
 *     ?SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z @ 0x140060B9C (-SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z.c)
 *     SmmMapPagedObjectToIommu @ 0x140062730 (SmmMapPagedObjectToIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x140062CD4 (SmmUnmapPagedObjectFromIommu.c)
 *     SmmMapExistingMemoryToDomain @ 0x140094D7C (SmmMapExistingMemoryToDomain.c)
 *     ?SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z @ 0x140094EC4 (-SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z.c)
 *     SmmMapLockedPagesToIommu @ 0x140095A30 (SmmMapLockedPagesToIommu.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x140095AD0 (SmmUnmapLockedPagesFromIommu.c)
 *     ?SysMmIterateHardwareReservedRanges@@YAXPEAUSYSMM_ADAPTER@@P6AJ_K1PEAX@Z2@Z @ 0x140286520 (-SysMmIterateHardwareReservedRanges@@YAXPEAUSYSMM_ADAPTER@@P6AJ_K1PEAX@Z2@Z.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x140392150 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
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
