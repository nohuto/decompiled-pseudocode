/*
 * XREFs of ?SmmUseIommuV2Interface@@YA_NXZ @ 0x140050C58
 * Callers:
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1402840E0 (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIdentityMapMemory @ 0x140284330 (SmmIdentityMapMemory.c)
 *     ?SmmIommuCreateDevice@@YAJPEAUSYSMM_ADAPTER@@PEAU_DEVICE_OBJECT@@IIPEAPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1402845D4 (-SmmIommuCreateDevice@@YAJPEAUSYSMM_ADAPTER@@PEAU_DEVICE_OBJECT@@IIPEAPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     SmmIommuCreateDomain @ 0x1402846EC (SmmIommuCreateDomain.c)
 *     ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1402847C4 (-SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     SmmIommuDeleteDomain @ 0x140284808 (SmmIommuDeleteDomain.c)
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140284EFC (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14028540C (-SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x140285514 (-SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x1402873BC (-SysMmInitializeGlobal@@YAXXZ.c)
 * Callees:
 *     <none>
 */

bool SmmUseIommuV2Interface(void)
{
  return dword_140161528 == 2;
}
