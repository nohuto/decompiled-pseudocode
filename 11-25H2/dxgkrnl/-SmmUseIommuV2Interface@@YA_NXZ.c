/*
 * XREFs of ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1400511E8
 * Callers:
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x14027CD70 (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIdentityMapMemory @ 0x14027CFC0 (SmmIdentityMapMemory.c)
 *     ?SmmIommuCreateDevice@@YAJPEAUSYSMM_ADAPTER@@PEAU_DEVICE_OBJECT@@IIPEAPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14027D264 (-SmmIommuCreateDevice@@YAJPEAUSYSMM_ADAPTER@@PEAU_DEVICE_OBJECT@@IIPEAPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     SmmIommuCreateDomain @ 0x14027D37C (SmmIommuCreateDomain.c)
 *     ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14027D454 (-SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     SmmIommuDeleteDomain @ 0x14027D498 (SmmIommuDeleteDomain.c)
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x14027DB8C (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14027E09C (-SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14027E1A4 (-SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x14027FF1C (-SysMmInitializeGlobal@@YAXXZ.c)
 * Callees:
 *     <none>
 */

bool SmmUseIommuV2Interface(void)
{
  return dword_14015E518 == 2;
}
