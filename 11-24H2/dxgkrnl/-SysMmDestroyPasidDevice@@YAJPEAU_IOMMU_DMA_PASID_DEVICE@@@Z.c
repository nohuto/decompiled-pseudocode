/*
 * XREFs of ?SysMmDestroyPasidDevice@@YAJPEAU_IOMMU_DMA_PASID_DEVICE@@@Z @ 0x1402862C4
 * Callers:
 *     ?InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401ECDC8 (-InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1403AD370 (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 * Callees:
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x140056FDC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SysMmDestroyPasidDevice(struct _IOMMU_DMA_PASID_DEVICE *a1)
{
  if ( SmmUseIommuV3Interface() )
    return ((__int64 (*)(void))qword_1401615E8)();
  else
    return 3221225485LL;
}
