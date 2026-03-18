/*
 * XREFs of ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AB9B0
 * Callers:
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180048BB8 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180075170 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA3A0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800ABE30 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800B4D30 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x180209AF0 (-RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsIdentity<1>(__int64 a1)
{
  char v1; // r8
  char v3; // cl
  char v4; // cl
  char result; // al
  char v6; // r8

  v1 = *(_BYTE *)(a1 + 64);
  if ( (char)(v1 << 6) >> 6 == 1 )
    return 0;
  if ( (char)(v1 << 6) >> 6 < 0 )
    return 1;
  v3 = *(_BYTE *)(a1 + 65);
  if ( (v3 & 8) == 0 && 16 * (v3 & 0xFC) != 0 )
    goto LABEL_10;
  if ( (v3 & 8) == 0 )
  {
    if ( (char)(4 * v3) >> 6 != 1 )
    {
      if ( (char)(4 * v3) >> 6 >= 0 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                                  + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                          - 1.0) & _xmm) >= 0.000081380211 )
        {
          *(_BYTE *)(a1 + 65) = v3 & 0xC3 | 0x14;
          goto LABEL_10;
        }
        v3 |= 0x30u;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
          goto LABEL_26;
      }
      else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
      {
        goto LABEL_26;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & _xmm) < 0.000081380211 )
      {
        v3 |= 0xCu;
        *(_BYTE *)(a1 + 65) = v3;
        goto LABEL_5;
      }
    }
LABEL_26:
    *(_BYTE *)(a1 + 65) = v3 & 0xF3 | 4;
    goto LABEL_10;
  }
LABEL_5:
  if ( (char)(16 * v1) >> 6 == 1 )
    goto LABEL_10;
  if ( (char)(16 * v1) >> 6 < 0 )
  {
LABEL_7:
    v4 = *(_BYTE *)(a1 + 64);
    if ( (char)(4 * v4) >> 6 == 1 )
      goto LABEL_10;
    if ( (char)(4 * v4) >> 6 < 0 )
      goto LABEL_9;
    if ( v4 >> 6 == 1 )
      goto LABEL_20;
    if ( v4 >> 6 < 0 )
      goto LABEL_19;
    v6 = *(_BYTE *)(a1 + 65);
    if ( (char)(4 * v6) >> 6 != 1 )
    {
      if ( (char)(4 * v6) >> 6 >= 0 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                                  + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                          - 1.0) & _xmm) >= 0.000081380211 )
        {
          *(_BYTE *)(a1 + 65) = v6 & 0xCF | 0x10;
          v4 = v4 & 0x3F | 0x40;
          goto LABEL_20;
        }
        *(_BYTE *)(a1 + 65) = v6 | 0x30;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 4) - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 0.0) & _xmm) < 0.000081380211 )
      {
        v4 |= 0xC0u;
LABEL_19:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 1.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 1.0) & _xmm) < 0.000081380211 )
        {
          *(_BYTE *)(a1 + 64) = v4 | 0x30;
LABEL_9:
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 40) - 1.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 48) - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 52) - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 56) - 0.0) & _xmm) < 0.000081380211 )
          {
            *(_BYTE *)(a1 + 64) &= 0xFCu;
            result = 1;
            *(_BYTE *)(a1 + 64) |= 3u;
            return result;
          }
LABEL_10:
          *(_BYTE *)(a1 + 64) &= 0xFCu;
          result = 0;
          *(_BYTE *)(a1 + 64) |= 1u;
          return result;
        }
        goto LABEL_20;
      }
    }
    v4 = v4 & 0x3F | 0x40;
LABEL_20:
    result = 0;
    *(_BYTE *)(a1 + 64) = v4 & 0xCF | 0x10;
    *(_BYTE *)(a1 + 64) &= 0xFCu;
    *(_BYTE *)(a1 + 64) |= 1u;
    return result;
  }
  if ( (char)(4 * v3) >> 6 != 1 )
  {
    if ( (char)(4 * v3) >> 6 >= 0 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                        - 1.0) & _xmm) >= 0.000081380211 )
      {
        *(_BYTE *)(a1 + 65) = v3 & 0xCF | 0x10;
        goto LABEL_30;
      }
      *(_BYTE *)(a1 + 65) = v3 | 0x30;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - 0.0) & _xmm) < 0.000081380211 )
    {
      *(_BYTE *)(a1 + 64) = v1 | 0xC;
      goto LABEL_7;
    }
  }
LABEL_30:
  result = 0;
  *(_BYTE *)(a1 + 64) = v1 & 0xF3 | 4;
  *(_BYTE *)(a1 + 64) &= 0xFCu;
  *(_BYTE *)(a1 + 64) |= 1u;
  return result;
}
