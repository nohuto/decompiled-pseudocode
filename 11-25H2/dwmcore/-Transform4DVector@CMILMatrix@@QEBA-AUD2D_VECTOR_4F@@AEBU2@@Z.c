/*
 * XREFs of ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x18011E140
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18011B580 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18011BC28 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1801E9A84 (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D.c)
 *     ?GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x1802A2210 (-GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@.c)
 *     ?GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x1802A25E0 (-GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18011EFF0 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

struct D2D_VECTOR_4F *__fastcall CMILMatrix::Transform4DVector(
        CMILMatrix *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        const struct D2D_VECTOR_4F *a3)
{
  float w; // xmm6_4
  float v4; // xmm7_4
  float z; // xmm1_4
  float v6; // xmm5_4
  float v7; // xmm1_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  FLOAT v10; // xmm7_4
  float *v11; // rcx
  float *v12; // r10
  __int64 v13; // r11
  float v14; // xmm2_4

  retstr->w = 0.0;
  w = a3->w;
  v4 = a3->x * *((float *)this + 2);
  z = a3->z;
  v6 = z * *((float *)this + 10);
  v7 = z * *((float *)this + 9);
  v8 = a3->y * *((float *)this + 6);
  v9 = (float)(a3->x * *((float *)this + 1)) + (float)(a3->y * *((float *)this + 5));
  retstr->x = (float)((float)((float)(a3->y * *((float *)this + 4)) + (float)(a3->x * *(float *)this))
                    + (float)(a3->z * *((float *)this + 8)))
            + (float)(w * *((float *)this + 12));
  v10 = (float)((float)(v4 + v8) + v6) + (float)(w * *((float *)this + 14));
  retstr->y = (float)(v9 + v7) + (float)(w * *((float *)this + 13));
  retstr->z = v10;
  if ( (unsigned __int8)CMILMatrix::IsAffine<1>(this, 0LL) )
    v14 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  else
    v14 = (float)((float)((float)(v11[3] * *v12) + (float)(v11[7] * v12[1])) + (float)(v11[11] * v12[2]))
        + (float)(v11[15] * v12[3]);
  *(float *)(v13 + 12) = v14;
  return (struct D2D_VECTOR_4F *)v13;
}
