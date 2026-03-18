/*
 * XREFs of ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x180115348
 * Callers:
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180115728 (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18027095C (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?GetSceneLightRealization@CCompositionDistantLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x1802A0B80 (-GetSceneLightRealization@CCompositionDistantLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNod.c)
 *     ?GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x1802A25E0 (-GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_3F *__fastcall CMILMatrix::Transform3DVector(
        CMILMatrix *this,
        struct D2D_VECTOR_3F *__return_ptr retstr,
        const struct D2D_VECTOR_3F *a3)
{
  struct D2D_VECTOR_3F *result; // rax
  float y; // xmm0_4
  float z; // xmm1_4
  float v6; // xmm5_4
  float v7; // xmm6_4
  float v8; // xmm1_4
  float v9; // xmm3_4

  result = retstr;
  y = a3->y;
  z = a3->z;
  v6 = z * *((float *)this + 10);
  v7 = (float)(a3->x * *((float *)this + 2)) + (float)(y * *((float *)this + 6));
  v8 = z * *((float *)this + 9);
  v9 = (float)(a3->x * *((float *)this + 1)) + (float)(y * *((float *)this + 5));
  retstr->x = (float)((float)(y * *((float *)this + 4)) + (float)(a3->x * *(float *)this))
            + (float)(a3->z * *((float *)this + 8));
  retstr->z = v7 + v6;
  retstr->y = v9 + v8;
  return result;
}
