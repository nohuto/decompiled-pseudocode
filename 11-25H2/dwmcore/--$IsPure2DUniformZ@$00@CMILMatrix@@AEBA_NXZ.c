/*
 * XREFs of ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180124AD0
 * Callers:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180016DF0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800193E0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x18001BD40 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x1800822D4 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18009EB10 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800A6FE0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800DF8A0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z @ 0x18010C9B0 (-GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x18011F730 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121A60 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsPure2DUniformZ<1>(__int64 a1)
{
  char v1; // dl
  char v2; // r8
  char result; // al

  v1 = *(_BYTE *)(a1 + 65);
  if ( (v1 & 8) == 0 && 16 * (v1 & 0xFC) != 0 )
    return 0;
  if ( (v1 & 8) != 0 )
    goto LABEL_3;
  if ( (char)(4 * v1) >> 6 == 1 )
  {
LABEL_6:
    *(_BYTE *)(a1 + 65) = v1 & 0xF3 | 4;
    return 0;
  }
  if ( (char)(4 * v1) >> 6 < 0 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
    {
      *(_BYTE *)(a1 + 65) = v1 & 0xF3 | 4;
      return 0;
    }
LABEL_20:
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & _xmm) < 0.000081380211 )
    {
      v1 |= 0xCu;
      *(_BYTE *)(a1 + 65) = v1;
LABEL_3:
      v2 = *(_BYTE *)(a1 + 64);
      if ( (char)(16 * v2) >> 6 != 1 )
      {
        if ( (char)(16 * v2) >> 6 < 0 )
          return 1;
        if ( (char)(4 * v1) >> 6 != 1 )
        {
          if ( (char)(4 * v1) >> 6 < 0 )
          {
LABEL_14:
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - 0.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - 0.0) & _xmm) < 0.000081380211 )
            {
              result = 1;
              *(_BYTE *)(a1 + 64) = v2 | 0xC;
              return result;
            }
            goto LABEL_18;
          }
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                            + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                                    + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                            - 1.0) & _xmm) < 0.000081380211 )
          {
            *(_BYTE *)(a1 + 65) = v1 | 0x30;
            goto LABEL_14;
          }
          *(_BYTE *)(a1 + 65) = v1 & 0xCF | 0x10;
        }
LABEL_18:
        *(_BYTE *)(a1 + 64) = v2 & 0xF3 | 4;
        return 0;
      }
      return 0;
    }
    goto LABEL_6;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                    + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                            + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                    - 1.0) & _xmm) < 0.000081380211 )
  {
    v1 |= 0x30u;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
      goto LABEL_6;
    goto LABEL_20;
  }
  result = 0;
  *(_BYTE *)(a1 + 65) = v1 & 0xC3 | 0x14;
  return result;
}
