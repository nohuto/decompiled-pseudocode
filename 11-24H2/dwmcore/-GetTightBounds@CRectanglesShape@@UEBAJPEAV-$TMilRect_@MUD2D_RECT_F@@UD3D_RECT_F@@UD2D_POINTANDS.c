/*
 * XREFs of ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CD910
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800AE6F0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800BC1A0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C1560 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C6560 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x1800CD040 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800CE960 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C84C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014DBC0 (-GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?GetBoundsForOcclusion@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C2890 (-GetBoundsForOcclusion@CShapePtr@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?GetBoundsForOcclusion@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D3660 (-GetBoundsForOcclusion@CShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18014CE50 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CRectanglesShape::GetTightBounds(__int64 a1, struct D2D_RECT_F *a2, __int64 a3)
{
  __int64 v3; // r9
  struct D2D_RECT_F *v4; // r10
  __int64 v5; // r8
  struct D2D_RECT_F *v6; // rcx
  int v7; // r11d
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  float v11; // xmm5_4
  char v12; // cl
  char v13; // cl
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // al
  char v16; // cl
  float v17; // xmm2_4
  char v18; // cl
  float right; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm1_4
  __int64 v24; // rdi
  float *v25; // rcx
  int v26; // esi
  float v27; // xmm1_4
  int v28; // eax
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  char v32; // cl
  char v33; // cl
  FLOAT *v34; // r10
  unsigned __int64 v35; // r11
  float x; // xmm0_4
  float y; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  char v40; // cl
  char v41; // al
  char v42; // cl
  char v43; // cl
  struct D2D_RECT_F *v44; // rcx
  struct D2D_POINT_2F v45[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = *(struct D2D_RECT_F **)(a1 + 16);
  if ( *(struct D2D_RECT_F **)(v5 + 24) == v6 )
  {
    *(_QWORD *)&a2->right = 0LL;
    *(_QWORD *)&a2->left = 0LL;
    return 0LL;
  }
  v7 = 1;
  *a2 = *v6;
  v8 = *(_QWORD *)(v5 + 16);
  v9 = 1LL;
  if ( (unsigned __int64)((*(_QWORD *)(v5 + 24) - v8) >> 4) > 1 )
  {
    v24 = 16LL;
    do
    {
      v25 = (float *)(v24 + v8);
      if ( v4->right <= v4->left || v4->bottom <= v4->top )
        v26 = v7;
      else
        v26 = 0;
      v27 = *v25;
      if ( v25[2] <= *v25 || v25[3] <= v25[1] )
        v28 = v7;
      else
        v28 = 0;
      if ( v26 )
      {
        if ( v28
          || !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues(
                                 v25,
                                 v9,
                                 v5,
                                 v3) )
        {
          *(_QWORD *)&v4->right = 0LL;
          *(_QWORD *)&v4->left = 0LL;
        }
        else
        {
          *v4 = *v44;
        }
      }
      else if ( !v28 )
      {
        if ( v4->left > v27 )
          v4->left = v27;
        v29 = v25[1];
        if ( v4->top > v29 )
          v4->top = v29;
        v30 = v25[2];
        if ( v30 > v4->right )
          v4->right = v30;
        v31 = v25[3];
        if ( v31 > v4->bottom )
          v4->bottom = v31;
      }
      v8 = *(_QWORD *)(v5 + 16);
      ++v9;
      v24 += 16LL;
    }
    while ( v9 < (*(_QWORD *)(v5 + 24) - v8) >> 4 );
  }
  if ( v3 )
  {
    v11 = 0.0;
    if ( (char)(*(_BYTE *)(v3 + 64) << 6) >> 6 == 1 )
      goto LABEL_16;
    if ( (char)(*(_BYTE *)(v3 + 64) << 6) >> 6 == 0xFE )
      return 0LL;
    v12 = *(_BYTE *)(v3 + 65);
    if ( (char)(16 * v12) >> 6 == 1 )
      goto LABEL_16;
    if ( (char)(16 * v12) >> 6 != 0xFE )
    {
      v13 = (char)(4 * v12) >> 6;
      if ( v13 > 0 )
        goto LABEL_16;
      if ( v13 == -2 )
      {
        if ( (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 44) & _xmm) * 61440.0) != 0.0 )
          goto LABEL_16;
      }
      else
      {
        if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 28) & _xmm) * 61440.0)
                           + (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 12) & _xmm) * 61440.0))
                   + COERCE_FLOAT(*(_DWORD *)(v3 + 60) & _xmm)) == 1.0 )
        {
          v14 = v7;
          *(_BYTE *)(v3 + 65) = *(_BYTE *)(v3 + 65) & 0xCF ^ 0x20;
        }
        else
        {
          v14 = 0;
        }
        if ( (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 44) & _xmm) * 61440.0) == 0.0 )
          v15 = v7;
        else
          v15 = 0;
        if ( (v14 & v15) == 0 )
          goto LABEL_16;
      }
      if ( *(float *)(v3 + 32) != 0.0 || *(float *)(v3 + 36) != 0.0 )
        goto LABEL_16;
      *(_BYTE *)(v3 + 65) = *(_BYTE *)(v3 + 65) & 0xF3 ^ 8;
    }
    if ( (char)(16 * *(_BYTE *)(v3 + 64)) >> 6 == 1 )
      goto LABEL_16;
    if ( (char)(16 * *(_BYTE *)(v3 + 64)) >> 6 != 0xFE )
    {
      v32 = *(_BYTE *)(v3 + 65);
      if ( (char)(4 * v32) >> 6 == 1 )
        goto LABEL_16;
      if ( (char)(4 * v32) >> 6 != 0xFE )
      {
        if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 28) & _xmm) * 61440.0)
                           + (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 12) & _xmm) * 61440.0))
                   + COERCE_FLOAT(*(_DWORD *)(v3 + 60) & _xmm)) != 1.0 )
          goto LABEL_16;
        *(_BYTE *)(v3 + 65) = v32 & 0xCF ^ 0x20;
      }
      if ( *(float *)(v3 + 8) != 0.0 || *(float *)(v3 + 24) != 0.0 )
        goto LABEL_16;
      *(_BYTE *)(v3 + 64) = *(_BYTE *)(v3 + 64) & 0xF3 ^ 8;
    }
    v40 = *(_BYTE *)(v3 + 64);
    v41 = (char)(4 * v40) >> 6;
    if ( v41 == 1 )
      goto LABEL_16;
    if ( v41 < 0 && v41 == -2 )
    {
LABEL_95:
      if ( *(float *)(v3 + 40) == 1.0
        && *(float *)(v3 + 48) == 0.0
        && *(float *)(v3 + 52) == 0.0
        && *(float *)(v3 + 56) == 0.0 )
      {
        *(_BYTE *)(v3 + 64) = *(_BYTE *)(v3 + 64) & 0xFC ^ 2;
        return 0LL;
      }
      goto LABEL_16;
    }
    v42 = v40 >> 6;
    if ( v42 > 0 )
      goto LABEL_16;
    if ( v42 < 0 && v42 == -2 )
    {
LABEL_92:
      if ( *(float *)v3 != 1.0 || *(float *)(v3 + 20) != 1.0 )
        goto LABEL_16;
      *(_BYTE *)(v3 + 64) = *(_BYTE *)(v3 + 64) & 0xCF ^ 0x20;
      goto LABEL_95;
    }
    v43 = *(_BYTE *)(v3 + 65);
    if ( (char)(4 * v43) >> 6 == 1 )
      goto LABEL_16;
    if ( (char)(4 * v43) >> 6 != 0xFE )
    {
      if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 28) & _xmm) * 61440.0)
                         + (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 12) & _xmm) * 61440.0))
                 + COERCE_FLOAT(*(_DWORD *)(v3 + 60) & _xmm)) != 1.0 )
        goto LABEL_16;
      *(_BYTE *)(v3 + 65) = v43 & 0xCF ^ 0x20;
    }
    if ( *(float *)(v3 + 4) == 0.0 && *(float *)(v3 + 16) == 0.0 )
    {
      *(_BYTE *)(v3 + 64) = *(_BYTE *)(v3 + 64) & 0x3F | 0x80;
      goto LABEL_92;
    }
LABEL_16:
    v16 = *(_BYTE *)(v3 + 64);
    if ( (char)(4 * v16) >> 6 == 1 )
    {
      v17 = FLOAT_0_000081380211;
    }
    else
    {
      if ( (char)(4 * v16) >> 6 < 0 )
      {
LABEL_18:
        v4->left = *(float *)(v3 + 48) + v4->left;
        v4->top = *(float *)(v3 + 52) + v4->top;
        v4->right = *(float *)(v3 + 48) + v4->right;
        v4->bottom = *(float *)(v3 + 52) + v4->bottom;
        return 0LL;
      }
      v17 = FLOAT_0_000081380211;
      if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v3)
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v3 - 1.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 20) - 1.0) & _xmm) < 0.000081380211 )
      {
        *(_BYTE *)(v3 + 64) |= 0x30u;
        goto LABEL_18;
      }
      v16 = *(_BYTE *)(v3 + 64) & 0xCF | 0x10;
      *(_BYTE *)(v3 + 64) = v16;
    }
    v18 = v16 >> 6;
    if ( v18 > 0 )
    {
LABEL_65:
      CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v3, v4, v45);
      x = v45[0].x;
      y = v45[0].y;
      v38 = v45[0].x;
      *v34 = v45[0].x;
      v39 = y;
      v34[1] = y;
      v34[2] = v38;
      v34[3] = y;
      do
      {
        x = fminf(x, v45[v35].x);
        *v34 = x;
        y = fminf(y, v45[v35].y);
        v34[1] = y;
        v38 = fmaxf(v38, v45[v35].x);
        v34[2] = v38;
        v39 = fmaxf(v39, v45[v35++].y);
        v34[3] = v39;
      }
      while ( v35 < 4 );
      return 0LL;
    }
    if ( v18 < 0 )
    {
LABEL_23:
      right = v4->right;
      v20 = (float)(*(float *)v3 * v4->left) + *(float *)(v3 + 48);
      v4->left = v20;
      v21 = (float)(*(float *)(v3 + 20) * v4->top) + *(float *)(v3 + 52);
      v4->top = v21;
      v22 = (float)(right * *(float *)v3) + *(float *)(v3 + 48);
      v4->right = v22;
      v23 = (float)(*(float *)(v3 + 20) * v4->bottom) + *(float *)(v3 + 52);
      v4->bottom = v23;
      if ( *(float *)v3 <= v11 || *(float *)(v3 + 20) <= v11 )
      {
        if ( v20 > v22 )
        {
          v4->left = v22;
          v4->right = v20;
        }
        if ( v21 > v23 )
        {
          v4->top = v23;
          v4->bottom = v21;
        }
      }
      return 0LL;
    }
    v33 = *(_BYTE *)(v3 + 65);
    if ( (char)(4 * v33) >> 6 != 1 )
    {
      if ( (char)(4 * v33) >> 6 < 0 )
      {
LABEL_63:
        if ( v17 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 4) - v11) & _xmm)
          && v17 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 16) - v11) & _xmm) )
        {
          *(_BYTE *)(v3 + 64) |= 0xC0u;
          goto LABEL_23;
        }
        goto LABEL_64;
      }
      if ( v17 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 28) & _xmm) * 61440.0)
                                              + (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 12) & _xmm) * 61440.0))
                                      + COERCE_FLOAT(*(_DWORD *)(v3 + 60) & _xmm))
                              - 1.0) & _xmm) )
      {
        *(_BYTE *)(v3 + 65) = v33 | 0x30;
        goto LABEL_63;
      }
      *(_BYTE *)(v3 + 65) = v33 & 0xCF | 0x10;
    }
LABEL_64:
    *(_BYTE *)(v3 + 64) = *(_BYTE *)(v3 + 64) & 0x3F | 0x40;
    goto LABEL_65;
  }
  return 0LL;
}
