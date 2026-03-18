/*
 * XREFs of ??1?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802197FC
 * Callers:
 *     ??1CWindowBackgroundTreatment@@EEAA@XZ @ 0x1802197BC (--1CWindowBackgroundTreatment@@EEAA@XZ.c)
 *     ?Create@CStockBitmapProducer@@SAJAEBU_D3DCOLORVALUE@@PEAPEAVIBitmapResource@@@Z @ 0x18021D90C (-Create@CStockBitmapProducer@@SAJAEBU_D3DCOLORVALUE@@PEAPEAVIBitmapResource@@@Z.c)
 *     ??1CShadowMaskCachingBlurProducer@@EEAA@XZ @ 0x1802E4600 (--1CShadowMaskCachingBlurProducer@@EEAA@XZ.c)
 *     ?Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMaskProducer@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV5@@Z @ 0x1802E46CC (-Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMas.c)
 *     ?Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@$$QEAVCShapePtr@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1802E4844 (-Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::~com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(
        CEffectIntermediateProducer **a1)
{
  CEffectIntermediateProducer *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v1);
  return result;
}
