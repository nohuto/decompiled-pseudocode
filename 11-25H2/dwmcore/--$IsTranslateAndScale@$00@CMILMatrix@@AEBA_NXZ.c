/*
 * XREFs of ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1801215D0
 * Callers:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180016DF0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800193E0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x1800238A8 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18002C31C (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18009EB10 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800A6FE0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x18011F730 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121A60 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x1801E530C (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x18023CA68 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsTranslateAndScale<1>(__int64 a1)
{
  char v1; // dl
  char v2; // r8
  char result; // al
  char v4; // dl
  char v5; // al

  v1 = *(_BYTE *)(a1 + 65);
  if ( (v1 & 8) == 0 && 16 * (v1 & 0xFC) != 0 )
    return 0;
  if ( (v1 & 8) != 0 )
    goto LABEL_3;
  if ( (char)(4 * v1) >> 6 == 1 )
  {
LABEL_21:
    *(_BYTE *)(a1 + 65) = v1 & 0xF3 | 4;
    return 0;
  }
  if ( (char)(4 * v1) >> 6 >= 0 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                      - 1.0) & _xmm) >= 0.000081380211 )
    {
      *(_BYTE *)(a1 + 65) = v1 & 0xC3 | 0x14;
      return 0;
    }
    v1 |= 0x30u;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
      goto LABEL_21;
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
  {
    goto LABEL_21;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & _xmm) >= 0.000081380211 )
  {
    goto LABEL_21;
  }
  v1 |= 0xCu;
  *(_BYTE *)(a1 + 65) = v1;
LABEL_3:
  v2 = *(_BYTE *)(a1 + 64);
  if ( (char)(16 * v2) >> 6 == 1 )
    return 0;
  if ( (char)(16 * v2) >> 6 >= 0 )
  {
    if ( (char)(4 * v1) >> 6 == 1 )
      goto LABEL_25;
    if ( (char)(4 * v1) >> 6 >= 0 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                        - 1.0) & _xmm) >= 0.000081380211 )
      {
        *(_BYTE *)(a1 + 65) = v1 & 0xCF | 0x10;
        result = 0;
        *(_BYTE *)(a1 + 64) = v2 & 0xF3 | 4;
        return result;
      }
      *(_BYTE *)(a1 + 65) = v1 | 0x30;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - 0.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - 0.0) & _xmm) >= 0.000081380211 )
    {
LABEL_25:
      *(_BYTE *)(a1 + 64) = v2 & 0xF3 | 4;
      return 0;
    }
    *(_BYTE *)(a1 + 64) = v2 | 0xC;
  }
  if ( *(char *)(a1 + 64) >> 6 == 1 )
    return 0;
  if ( *(char *)(a1 + 64) >> 6 < 0 )
    return 1;
  v4 = *(_BYTE *)(a1 + 65);
  if ( (char)(4 * v4) >> 6 == 1 )
  {
LABEL_11:
    *(_BYTE *)(a1 + 64) = *(_BYTE *)(a1 + 64) & 0x3F | 0x40;
    return 0;
  }
  if ( (char)(4 * v4) >> 6 < 0 )
  {
LABEL_10:
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 4) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 0.0) & _xmm) < 0.000081380211 )
    {
      *(_BYTE *)(a1 + 64) |= 0xC0u;
      return 1;
    }
    goto LABEL_11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                    + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                            + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                    - 1.0) & _xmm) < 0.000081380211 )
  {
    *(_BYTE *)(a1 + 65) = v4 | 0x30;
    goto LABEL_10;
  }
  v5 = *(_BYTE *)(a1 + 64);
  *(_BYTE *)(a1 + 65) = v4 & 0xCF | 0x10;
  *(_BYTE *)(a1 + 64) = v5 & 0x3F | 0x40;
  return 0;
}
