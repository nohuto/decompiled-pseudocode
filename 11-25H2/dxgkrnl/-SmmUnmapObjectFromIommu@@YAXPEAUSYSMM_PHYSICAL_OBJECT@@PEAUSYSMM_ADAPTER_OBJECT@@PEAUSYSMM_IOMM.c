/*
 * XREFs of ?SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x140039B20
 * Callers:
 *     SmmClosePhysicalObject @ 0x14001094C (SmmClosePhysicalObject.c)
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x140011B10 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmMapExistingMemoryToDomain @ 0x1400928CC (SmmMapExistingMemoryToDomain.c)
 * Callees:
 *     SmmUnmapNonPagedObjectFromIommu @ 0x140039CC4 (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x1400623E0 (SmmUnmapPagedObjectFromIommu.c)
 */

void __fastcall SmmUnmapObjectFromIommu(
        struct SYSMM_PHYSICAL_OBJECT *a1,
        struct SYSMM_ADAPTER_OBJECT *a2,
        struct SYSMM_IOMMU *a3)
{
  if ( (*((_DWORD *)a1 + 11) & 1) != 0 )
    SmmUnmapNonPagedObjectFromIommu(a1, a2, a3);
  else
    SmmUnmapPagedObjectFromIommu(a1, a2, a3);
}
