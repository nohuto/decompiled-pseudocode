/*
 * XREFs of ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B4A00
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180075170 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA3A0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800ABE30 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800B2F20 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800B4D30 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsTranslate<1>(__int64 a1)
{
  char v1; // dl
  char v2; // r9
  char v3; // dl
  bool result; // al
  char v5; // r9

  v1 = *(_BYTE *)(a1 + 65);
  if ( (v1 & 8) == 0 && 16 * (v1 & 0xFC) != 0 )
    return 0;
  if ( (v1 & 8) == 0 )
  {
    if ( (char)(4 * v1) >> 6 != 1 )
    {
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
          goto LABEL_19;
      }
      else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
      {
        goto LABEL_19;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & _xmm) < 0.000081380211 )
      {
        v1 |= 0xCu;
        *(_BYTE *)(a1 + 65) = v1;
        goto LABEL_3;
      }
    }
LABEL_19:
    *(_BYTE *)(a1 + 65) = v1 & 0xF3 | 4;
    return 0;
  }
LABEL_3:
  v2 = *(_BYTE *)(a1 + 64);
  if ( (char)(16 * v2) >> 6 == 1 )
    return 0;
  if ( (char)(16 * v2) >> 6 < 0 )
  {
LABEL_5:
    v3 = *(_BYTE *)(a1 + 64);
    if ( (char)(4 * v3) >> 6 != 1 )
    {
      if ( (char)(4 * v3) >> 6 < 0 )
        return COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 40) - 1.0) & _xmm) < 0.000081380211;
      if ( v3 >> 6 == 1 )
        goto LABEL_9;
      if ( v3 >> 6 < 0 )
        goto LABEL_13;
      v5 = *(_BYTE *)(a1 + 65);
      if ( (char)(4 * v5) >> 6 != 1 )
      {
        if ( (char)(4 * v5) >> 6 >= 0 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                            + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                                    + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                            - 1.0) & _xmm) >= 0.000081380211 )
          {
            v3 = v3 & 0x3F | 0x40;
            *(_BYTE *)(a1 + 65) = v5 & 0xCF | 0x10;
            *(_BYTE *)(a1 + 64) = v3;
            goto LABEL_9;
          }
          *(_BYTE *)(a1 + 65) = v5 | 0x30;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 4) - 0.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 0.0) & _xmm) < 0.000081380211 )
        {
          v3 |= 0xC0u;
          *(_BYTE *)(a1 + 64) = v3;
LABEL_13:
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 1.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 1.0) & _xmm) < 0.000081380211 )
          {
            *(_BYTE *)(a1 + 64) = v3 | 0x30;
            return COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 40) - 1.0) & _xmm) < 0.000081380211;
          }
          goto LABEL_9;
        }
      }
      v3 = v3 & 0x3F | 0x40;
      *(_BYTE *)(a1 + 64) = v3;
LABEL_9:
      *(_BYTE *)(a1 + 64) = v3 & 0xCF | 0x10;
    }
    return 0;
  }
  if ( (char)(4 * v1) >> 6 == 1 )
    goto LABEL_23;
  if ( (char)(4 * v1) >> 6 < 0 )
  {
LABEL_22:
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - 0.0) & _xmm) < 0.000081380211 )
    {
      *(_BYTE *)(a1 + 64) = v2 | 0xC;
      goto LABEL_5;
    }
LABEL_23:
    *(_BYTE *)(a1 + 64) = v2 & 0xF3 | 4;
    return 0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                    + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                            + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                    - 1.0) & _xmm) < 0.000081380211 )
  {
    *(_BYTE *)(a1 + 65) = v1 | 0x30;
    goto LABEL_22;
  }
  *(_BYTE *)(a1 + 65) = v1 & 0xCF | 0x10;
  result = 0;
  *(_BYTE *)(a1 + 64) = v2 & 0xF3 | 4;
  return result;
}
