/*
 * XREFs of ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064D40
 * Callers:
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x14027CD70 (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIdentityMapMemory @ 0x14027CFC0 (SmmIdentityMapMemory.c)
 *     ?SmmIommuCreateDevice@@YAJPEAUSYSMM_ADAPTER@@PEAU_DEVICE_OBJECT@@IIPEAPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14027D264 (-SmmIommuCreateDevice@@YAJPEAUSYSMM_ADAPTER@@PEAU_DEVICE_OBJECT@@IIPEAPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     SmmIommuCreateDomain @ 0x14027D37C (SmmIommuCreateDomain.c)
 *     ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14027D454 (-SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     SmmIommuDeleteDomain @ 0x14027D498 (SmmIommuDeleteDomain.c)
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x14027DB8C (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x14027DDA0 (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 *     ?SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14027E09C (-SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14027E1A4 (-SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     SmmInitializeDmaDevices @ 0x14027E400 (SmmInitializeDmaDevices.c)
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x14027FF1C (-SysMmInitializeGlobal@@YAXXZ.c)
 *     SmmQueryRegistry @ 0x1403FD498 (SmmQueryRegistry.c)
 * Callees:
 *     <none>
 */

__int64 SmmGetIommuInterfaceVersion(void)
{
  return (unsigned int)dword_14015E518;
}
