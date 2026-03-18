/*
 * XREFs of ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180061F90
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180061AA0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802A2CB0 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@@Z @ 0x1800620E8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGradientBrush::InferVisualToTextureTransform(__int64 a1, __int64 a2, __int64 a3)
{
  float v3; // xmm0_4
  char v4; // al
  float v5; // xmm2_4
  int v6; // xmm1_4
  int v7; // xmm2_4
  int v8; // xmm3_4
  int v9; // xmm4_4
  int v10; // xmm5_4
  __int64 v11; // r9
  unsigned int v12; // ebx
  _DWORD v14[4]; // [rsp+30h] [rbp-9h] BYREF
  __int128 v15; // [rsp+40h] [rbp+7h] BYREF
  __int128 v16; // [rsp+50h] [rbp+17h]
  __int128 v17; // [rsp+60h] [rbp+27h]
  __int128 v18; // [rsp+70h] [rbp+37h]
  int v19; // [rsp+80h] [rbp+47h]

  v3 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v4 = *(_BYTE *)(a1 + 232);
  if ( v4 == 1 && *(_BYTE *)(a1 + 235) )
  {
    v5 = 1.0 / *(float *)(a3 + 8);
LABEL_4:
    v3 = 1.0 - (float)(1.0 / *(float *)(a3 + 8));
    goto LABEL_5;
  }
  v5 = 0.0;
  if ( v4 == 1 )
    goto LABEL_4;
LABEL_5:
  v19 = 10666;
  *(float *)&v14[2] = v3;
  *(float *)&v14[3] = v3;
  v15 = _xmm;
  v16 = _xmm;
  *(float *)v14 = v5;
  *(float *)&v14[1] = v5;
  v17 = _xmm;
  v18 = *(__int128 *)&_xmm.r;
  CMILMatrix::InferAffineMatrix(&v15, v14, a2);
  v6 = DWORD1(v15);
  v7 = v16;
  v8 = DWORD1(v16);
  v9 = v18;
  v10 = DWORD1(v18);
  *(_DWORD *)v11 = v15;
  *(_DWORD *)(v11 + 4) = v6;
  *(_DWORD *)(v11 + 8) = v7;
  *(_DWORD *)(v11 + 12) = v8;
  *(_DWORD *)(v11 + 16) = v9;
  *(_DWORD *)(v11 + 20) = v10;
  if ( D2D1InvertMatrix((D2D1_MATRIX_3X2_F *)v11) )
  {
    return 0;
  }
  else
  {
    v12 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2003304441,
      0x1A0u,
      0LL);
  }
  return v12;
}
