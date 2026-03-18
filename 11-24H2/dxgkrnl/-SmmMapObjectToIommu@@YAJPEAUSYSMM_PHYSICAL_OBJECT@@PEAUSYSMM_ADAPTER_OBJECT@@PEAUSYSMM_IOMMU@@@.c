/*
 * XREFs of ?SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x14003A24C
 * Callers:
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x140020FA0 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmMapExistingMemoryToDomain @ 0x140094D7C (SmmMapExistingMemoryToDomain.c)
 * Callees:
 *     SmmMapNonPagedObjectToIommu @ 0x14003A2E8 (SmmMapNonPagedObjectToIommu.c)
 *     SmmMapPagedObjectToIommu @ 0x140062730 (SmmMapPagedObjectToIommu.c)
 */

__int64 __fastcall SmmMapObjectToIommu(
        struct SYSMM_PHYSICAL_OBJECT *a1,
        struct SYSMM_ADAPTER_OBJECT *a2,
        struct SYSMM_IOMMU *a3)
{
  if ( (*((_DWORD *)a1 + 11) & 1) != 0 )
    return SmmMapNonPagedObjectToIommu(a1, a2, a3);
  else
    return SmmMapPagedObjectToIommu(a1, a2, a3);
}
