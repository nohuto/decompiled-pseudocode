/*
 * XREFs of Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline @ 0x14004CC9C
 * Callers:
 *     ?MapInVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_N@Z @ 0x1400CD4F8 (-MapInVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_N@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010F5CC (-MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsComplexLockRequired@VIDMM_PHYSICAL_ADAPTER@@QEBA_NPEBUVIDMM_LOCAL_ALLOC@@@Z @ 0x140114618 (-IsComplexLockRequired@VIDMM_PHYSICAL_ADAPTER@@QEBA_NPEBUVIDMM_LOCAL_ALLOC@@@Z.c)
 *     MapInCpuHostAperture @ 0x1401146B4 (MapInCpuHostAperture.c)
 *     MapInCpuVisibleSegment @ 0x140114AC8 (MapInCpuVisibleSegment.c)
 *     ?OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140114C34 (-OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback @ 0x14004CCD4 (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback.c)
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
