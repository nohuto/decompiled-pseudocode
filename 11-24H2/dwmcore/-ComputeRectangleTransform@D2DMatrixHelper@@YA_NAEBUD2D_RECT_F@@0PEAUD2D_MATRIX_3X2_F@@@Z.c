/*
 * XREFs of ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18004AC10
 * Callers:
 *     ?DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU4@@Z @ 0x180049FD4 (-DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@A.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x18004A12C (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18004A6B4 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationIn.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18006C274 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800B70A0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800B96F0 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18014F5E8 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801D4370 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x18024498C (-DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAV.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x18028D3F4 (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall D2DMatrixHelper::ComputeRectangleTransform(
        D2DMatrixHelper *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_RECT_F *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  float v4; // xmm5_4
  float left; // xmm8_4
  bool result; // al
  float v7; // xmm1_4
  float v8; // xmm9_4
  float v9; // xmm7_4
  float top; // xmm3_4
  float v11; // xmm5_4
  float v12; // xmm9_4
  float v13; // xmm2_4
  float v14; // xmm4_4

  v4 = *(float *)this;
  left = a2->left;
  if ( *(float *)this == a2->left
    && *((float *)this + 1) == a2->top
    && *((float *)this + 2) == a2->right
    && *((float *)this + 3) == a2->bottom )
  {
    *(_QWORD *)&a3->left = 1065353216LL;
    a3->right = 0.0;
    result = 1;
    *(_QWORD *)&a3->bottom = 1065353216LL;
    a3[1].top = 0.0;
  }
  else
  {
    v7 = *((float *)this + 2) - v4;
    v8 = *((float *)this + 1);
    v9 = *((float *)this + 3) - v8;
    if ( v7 == 0.0 && v9 == 0.0 )
    {
      return 0;
    }
    else
    {
      result = 1;
      top = a2->top;
      LODWORD(v11) = LODWORD(v4) ^ _xmm;
      LODWORD(v12) = LODWORD(v8) ^ _xmm;
      v13 = (float)(a2->right - left) / v7;
      v14 = (float)(a2->bottom - top) / v9;
      a3->left = v13 + 0.0;
      a3->top = (float)(v14 * 0.0) + 0.0;
      a3->right = (float)(v13 * 0.0) + 0.0;
      a3->bottom = v14 + 0.0;
      a3[1].left = (float)((float)(v13 * v11) + (float)(v12 * 0.0)) + left;
      a3[1].top = (float)((float)(v14 * v12) + (float)(v11 * 0.0)) + top;
    }
  }
  return result;
}
