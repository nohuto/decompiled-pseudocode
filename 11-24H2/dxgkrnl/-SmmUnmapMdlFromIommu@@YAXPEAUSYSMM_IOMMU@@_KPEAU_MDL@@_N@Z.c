/*
 * XREFs of ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x14003AEBC
 * Callers:
 *     SmmUnmapNonPagedObjectFromIommu @ 0x14003A468 (SmmUnmapNonPagedObjectFromIommu.c)
 *     ?SysMmUnmapIommuRange@@YAXPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z @ 0x14003ADF0 (-SysMmUnmapIommuRange@@YAXPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z.c)
 *     ?SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x14005A46C (-SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     ?SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x14005E6C8 (-SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x140062CD4 (SmmUnmapPagedObjectFromIommu.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x140095AD0 (SmmUnmapLockedPagesFromIommu.c)
 * Callees:
 *     SmmUnmapIommu @ 0x14003AEE8 (SmmUnmapIommu.c)
 *     SmmIommuUnmapReferenced @ 0x14003AFF4 (SmmIommuUnmapReferenced.c)
 */

void __fastcall SmmUnmapMdlFromIommu(struct SYSMM_IOMMU *a1, __int64 a2, struct _MDL *a3, char a4)
{
  if ( !a4 || (*((_DWORD *)a1 + 7) & 1) != 0 )
    SmmUnmapIommu(a1, a2, a3);
  else
    SmmIommuUnmapReferenced(a1, a3);
}
