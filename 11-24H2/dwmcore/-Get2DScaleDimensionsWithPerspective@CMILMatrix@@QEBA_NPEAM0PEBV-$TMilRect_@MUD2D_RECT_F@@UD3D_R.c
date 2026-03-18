/*
 * XREFs of ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006F0F0
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800516E0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006DF60 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18006EA40 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006FC50 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180176590 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801D4370 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180230700 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 * Callees:
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013E8F0 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 */

char __fastcall CMILMatrix::Get2DScaleDimensionsWithPerspective(__int64 a1, float *a2, float *a3, __int64 a4)
{
  char v4; // r10
  float v7; // xmm3_4
  bool v8; // dl
  float v9; // xmm1_4
  float v10; // xmm8_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  char result; // al
  int v17; // xmm0_4
  int v18; // xmm1_4
  int v19; // xmm0_4
  int v20; // xmm1_4
  _DWORD v21[12]; // [rsp+20h] [rbp-68h] BYREF

  v4 = *(_BYTE *)(a1 + 65);
  if ( (v4 & 0x20) == 0 && 4 * (v4 & 0xF0) != 0 )
  {
LABEL_10:
    v8 = 0;
    goto LABEL_4;
  }
  if ( (v4 & 0x20) == 0 )
  {
    LODWORD(v7) = COERCE_UNSIGNED_INT(
                    (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                  + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                          + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                  - 1.0) & _xmm;
    v8 = v7 < 0.000081380211;
    *(_BYTE *)(a1 + 65) = v4 & 0xCF | (32 * (v7 < 0.000081380211) + 16);
    if ( v7 < 0.000081380211 )
      goto LABEL_4;
    goto LABEL_10;
  }
  v8 = 1;
LABEL_4:
  v9 = *(float *)(a1 + 4);
  v10 = *(float *)(a1 + 20);
  v11 = *(float *)(a1 + 16);
  if ( v8 )
  {
    v12 = (float)(v9 * v9) + (float)(*(float *)a1 * *(float *)a1);
    if ( v12 < 0.0 )
      v13 = sqrtf_0(v12);
    else
      v13 = fsqrt(v12);
    v14 = (float)(v11 * v11) + (float)(v10 * v10);
    if ( v14 < 0.0 )
      v15 = sqrtf_0(v14);
    else
      v15 = fsqrt(v14);
    *a2 = v13;
    result = 1;
    *a3 = v15;
  }
  else
  {
    v21[0] = *(_DWORD *)a1;
    v21[2] = *(_DWORD *)(a1 + 12);
    v17 = *(_DWORD *)(a1 + 28);
    *(float *)&v21[1] = v9;
    v18 = *(_DWORD *)(a1 + 48);
    v21[5] = v17;
    v19 = *(_DWORD *)(a1 + 52);
    v21[6] = v18;
    v20 = *(_DWORD *)(a1 + 60);
    v21[7] = v19;
    *(float *)&v21[3] = v11;
    *(float *)&v21[4] = v10;
    v21[8] = v20;
    return Matrix3x3::Get2DScaleDimensionsWithPerspective(v21, a2, a3, a4);
  }
  return result;
}
