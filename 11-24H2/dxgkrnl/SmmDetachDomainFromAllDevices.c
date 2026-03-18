/*
 * XREFs of SmmDetachDomainFromAllDevices @ 0x1402841A4
 * Callers:
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1402840E0 (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmSwapDomains @ 0x140284E00 (SmmSwapDomains.c)
 * Callees:
 *     ?SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x140285514 (-SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 */

void __fastcall SmmDetachDomainFromAllDevices(__int64 a1, struct _IOMMU_DMA_DOMAIN *a2)
{
  __int64 i; // rbx
  __int64 v5; // r14
  struct _IOMMU_DMA_DEVICE *v6; // r8

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(a1 + 392);
    SysMmIommuDetach(*(struct _DEVICE_OBJECT **)(v5 + 24 * i + 16), a2, *(struct _IOMMU_DMA_DEVICE **)(v5 + 24 * i));
    v6 = *(struct _IOMMU_DMA_DEVICE **)(v5 + 24 * i + 8);
    if ( v6 )
      SysMmIommuDetach(*(struct _DEVICE_OBJECT **)(v5 + 24 * i + 16), a2, v6);
  }
}
