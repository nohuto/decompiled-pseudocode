/*
 * XREFs of Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline @ 0x14004C4B0
 * Callers:
 *     ?MapInVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_N@Z @ 0x1400D95D8 (-MapInVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_N@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010D3AC (-MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsComplexLockRequired@VIDMM_PHYSICAL_ADAPTER@@QEBA_NPEBUVIDMM_LOCAL_ALLOC@@@Z @ 0x1401148A0 (-IsComplexLockRequired@VIDMM_PHYSICAL_ADAPTER@@QEBA_NPEBUVIDMM_LOCAL_ALLOC@@@Z.c)
 *     MapInCpuHostAperture @ 0x14011493C (MapInCpuHostAperture.c)
 *     MapInCpuVisibleSegment @ 0x140114D50 (MapInCpuVisibleSegment.c)
 *     ?OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140114EBC (-OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback @ 0x14004C4E8 (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_featureState,
             3LL);
}
