/*
 * XREFs of ?SysMmUnmapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K2@Z @ 0x14004B3F8
 * Callers:
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400F25E8 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SysMmUnmapLogicalAddressRange(struct SYSMM_ADAPTER *a1, struct _IOMMU_DMA_DOMAIN *a2)
{
  return ((__int64 (__fastcall *)(struct SYSMM_ADAPTER *, struct _IOMMU_DMA_DOMAIN *))DxgCoreInterface[99])(a1, a2);
}
