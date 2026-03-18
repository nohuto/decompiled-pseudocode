/*
 * XREFs of ?OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140114EBC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline @ 0x14004C4B0 (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x140100720 (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER::OfferCpuHostApertureRanges(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  struct VIDMM_CPU_HOST_APERTURE_RANGE ***v3; // rdx

  Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline();
  v3 = (struct VIDMM_CPU_HOST_APERTURE_RANGE ***)*((_QWORD *)a2 + 24);
  if ( v3 )
    VIDMM_CPU_HOST_APERTURE::OfferRange(*(VIDMM_CPU_HOST_APERTURE **)(*((_QWORD *)a2 + 8) + 552LL), v3);
}
