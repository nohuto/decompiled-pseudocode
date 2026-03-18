/*
 * XREFs of SmmIommuDeleteDomain @ 0x14027D498
 * Callers:
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x14027CD70 (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x14027D4D8 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x14027D724 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToTranslation @ 0x14027D7F4 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1400511E8 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1400577CC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064D40 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 SmmIommuDeleteDomain()
{
  if ( SmmUseIommuV3Interface() || SmmUseIommuV2Interface() || (unsigned int)SmmGetIommuInterfaceVersion() < 3 )
    return ((__int64 (*)(void))qword_14015E528)();
  else
    return 3221225473LL;
}
