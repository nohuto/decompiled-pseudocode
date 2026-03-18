/*
 * XREFs of ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14027D454
 * Callers:
 *     SmmInitializeDmaDevices @ 0x14027E400 (SmmInitializeDmaDevices.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x14027EE00 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1400511E8 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1400577CC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064D40 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmmIommuDeleteDevice(struct _IOMMU_DMA_DEVICE *a1)
{
  if ( SmmUseIommuV3Interface() || SmmUseIommuV2Interface() )
    return ((__int64 (*)(void))qword_14015E5C8)();
  else
    return (unsigned int)SmmGetIommuInterfaceVersion() >= 3 ? 0xC0000001 : 0;
}
