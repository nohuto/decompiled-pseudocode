/*
 * XREFs of ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800498DC
 * Callers:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180018180 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006B114 (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18000B270 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?PixelInflate@@YA?AUD2D_RECT_F@@AEBU1@@Z @ 0x180048764 (-PixelInflate@@YA-AUD2D_RECT_F@@AEBU1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18004AA90 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800638E0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013E8F0 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x1801B2824 (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromInput(
        CBrushRenderingGraph *this,
        FLOAT *a2,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a3)
{
  FLOAT v3; // xmm0_4
  float *v4; // rbx
  __int64 v5; // rdi
  __int64 v8; // r15
  bool v9; // zf
  float *v10; // rdi
  struct D2D_RECT_F *v11; // r9
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  FLOAT v15; // xmm3_4
  float v16; // xmm0_4
  FLOAT v17; // xmm2_4
  FLOAT v18; // xmm1_4
  const struct D2D_RECT_F *v19; // r8
  __m128 v20; // xmm1
  float v21; // xmm2_4
  float v22; // xmm4_4
  struct D2D_RECT_F v23; // [rsp+28h] [rbp-39h] BYREF
  int v24; // [rsp+38h] [rbp-29h]
  int v25; // [rsp+3Ch] [rbp-25h]
  _BYTE v26[40]; // [rsp+40h] [rbp-21h] BYREF
  struct D2D_RECT_F v27; // [rsp+68h] [rbp+7h] BYREF
  float v28; // [rsp+78h] [rbp+17h]
  float v29; // [rsp+7Ch] [rbp+1Bh]

  v3 = *a2;
  v4 = (float *)((char *)a3 + 24);
  v5 = *((_QWORD *)a2 + 2);
  v23.left = 0.0;
  v23.top = 0.0;
  v8 = *(_QWORD *)a3;
  v9 = *(_BYTE *)(v5 + 44) == 0;
  v23.right = v3;
  v23.bottom = a2[1];
  if ( v9 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v5 + 56) + 8LL))(*(_QWORD *)(v5 + 56), 2LL) )
    {
      v10 = v4 + 1;
      *(_QWORD *)v4 = *((_QWORD *)a2 + 1);
      goto LABEL_4;
    }
    CSurfaceDrawListBrush::ComputeLocalToSourceTransform(*(CSurfaceDrawListBrush **)(v5 + 56), (struct Matrix3x3 *)v26);
  }
  else
  {
    CDrawListBitmap::GetSize((CDrawListBitmap *)v5);
    v27.top = 0.0;
    v27.right = 0.0;
    v27.left = (float)v24;
    v27.bottom = (float)v25;
    v28 = 0.0 - (float)((float)v24 * 0.0);
    v29 = 0.0 - (float)((float)v25 * 0.0);
    Matrix3x3::operator*(v5 + 48, v26, &v27);
  }
  v10 = v4 + 1;
  Matrix3x3::Get2DScaleDimensionsWithPerspective(v26, v4, v4 + 1, &v23);
LABEL_4:
  v12 = fminf(a2[2], *v4);
  v13 = *((float *)a3 + 4);
  v14 = *((float *)a3 + 5);
  v23.left = 0.0;
  v23.top = 0.0;
  v27.top = 0.0;
  v15 = fmaxf(v13, v12);
  v16 = fminf(a2[3], *v10);
  v27.right = 0.0;
  *((FLOAT *)a3 + 4) = v15;
  v27.left = v15;
  v17 = fmaxf(v14, v16);
  *((FLOAT *)a3 + 5) = v17;
  v18 = a2[1];
  v23.right = *a2;
  v27.bottom = v17;
  v23.bottom = v18;
  v28 = 0.0 - (float)(v15 * 0.0);
  v29 = 0.0 - (float)(v17 * 0.0);
  D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
    (D2DMatrixHelper *)&v23,
    &v27,
    (const struct D2D_MATRIX_3X2_F *)(v8 + 84),
    v11);
  v20 = (__m128)_mm_loadu_si128((const __m128i *)PixelInflate(&v23, v19));
  *((_DWORD *)a3 + 2) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
  *((_DWORD *)a3 + 3) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
  v21 = *((float *)a3 + 4);
  v22 = *((float *)a3 + 5);
  *(_DWORD *)(v8 + 52) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 60) = 0;
  *(_DWORD *)(v8 + 68) = 0;
  *(_DWORD *)(v8 + 80) = 1065353216;
  *(float *)(v8 + 48) = v21;
  *(float *)(v8 + 64) = v22;
  *(float *)(v8 + 72) = 0.0 - (float)(v21 * 0.0);
  *(float *)(v8 + 76) = 0.0 - (float)(v22 * 0.0);
  *(_DWORD *)(v8 + 40) |= 0x10u;
}
