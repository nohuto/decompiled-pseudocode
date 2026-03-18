/*
 * XREFs of ?DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU4@@Z @ 0x1800DDA08
 * Callers:
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRealization@@PEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIRenderTargetBitmap@@PEAV6@@Z @ 0x180072534 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRe.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x1800DDD70 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800DE8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 */

void __fastcall CBlurRenderingGraph::DeterminePreScale(
        const struct EffectInput *a1,
        const struct EffectInput *a2,
        int a3,
        struct D2D_MATRIX_3X2_F *a4,
        struct D2D_VECTOR_2F *a5)
{
  __int64 v5; // r8
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm3_4
  float v9; // xmm6_4
  float v10; // xmm2_4
  float v11; // xmm7_4
  float v12; // xmm9_4
  float v13; // xmm0_4
  struct D2D_RECT_F v14; // [rsp+20h] [rbp-68h] BYREF

  v5 = 5LL * a3;
  v6 = fmaxf(
         0.0099999998,
         fminf(
           1.0,
           CBlurRenderingGraph::k_optimizations[v5] / (float)(CBlurRenderingGraph::k_optimizations[v5 + 1] + a4->m11)));
  v7 = fmaxf(
         0.0099999998,
         fminf(
           1.0,
           CBlurRenderingGraph::k_optimizations[v5] / (float)(CBlurRenderingGraph::k_optimizations[v5 + 1] + a4->m12)));
  D2DMatrixHelper::ComputeRectangleTransform(
    (const struct EffectInput *)((char *)a1 + 84),
    (const struct D2D_RECT_F *)((char *)a2 + 84),
    &v14,
    a4);
  v8 = (float)((float)(v6 * v14.left) + (float)(v14.top * 0.0))
     * (float)((float)(v6 * v14.left) + (float)(v14.top * 0.0));
  v9 = (float)(v6 * v14.right) + (float)(v14.bottom * 0.0);
  v10 = (float)((float)((float)(v7 * v14.top) + (float)(v14.left * 0.0))
              * (float)((float)(v7 * v14.top) + (float)(v14.left * 0.0)))
      + v8;
  v11 = (float)(v7 * v14.bottom) + (float)(v14.right * 0.0);
  v12 = sqrtf_0(v10);
  v13 = sqrtf_0((float)(v11 * v11) + (float)(v9 * v9));
  a5->x = v12;
  a5->y = v13;
}
