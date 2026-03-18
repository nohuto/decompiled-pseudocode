/*
 * XREFs of ?HasValidRenderingRealization@CCachedWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18022EEC0
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180023C04 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ?HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x180108BD0 (-HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 */

char __fastcall CCachedWindowBackgroundTreatment::HasValidRenderingRealization(
        CCachedWindowBackgroundTreatment *this,
        const struct RenderTargetInfo *a2)
{
  CWindowBackgroundBitmapProducer *v2; // rcx
  char v3; // bl

  v2 = (CWindowBackgroundBitmapProducer *)*((_QWORD *)this + 3);
  v3 = 0;
  if ( !v2 || CWindowBackgroundBitmapProducer::HasValidRealization(v2, a2, 0) )
    return 1;
  return v3;
}
