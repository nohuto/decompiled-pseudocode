/*
 * XREFs of ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1801AF150
 * Callers:
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C6560 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1801AF150 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x180065E2C (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800D1D50 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D3EB0 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1801470D0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1801AF150 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

char __fastcall CRoundedRectangleGeometryData::FillContainsRect(__int64 a1, const struct D2D_RECT_F *a2, __int64 a3)
{
  float v6; // xmm14_4
  float v7; // xmm15_4
  float v8; // xmm13_4
  float v9; // xmm12_4
  struct D2D_RECT_F v10; // xmm0
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  __m128 v15; // xmm6
  float y; // xmm8_4
  float x; // xmm10_4
  float v18; // xmm7_4
  float v19; // xmm10_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  __m128 v23; // xmm3
  __m128 v24; // xmm4
  float v25; // xmm9_4
  float v26; // xmm2_4
  __m128 v27; // xmm0
  float v28; // xmm1_4
  float v29; // xmm5_4
  float v30; // xmm11_4
  FLOAT v31; // xmm0_4
  float v32; // xmm3_4
  float v33; // xmm13_4
  int v34; // xmm3_4
  FLOAT v35; // xmm0_4
  bool v36; // cf
  float v37; // xmm14_4
  float v38; // xmm9_4
  float v39; // xmm12_4
  FLOAT top; // xmm1_4
  FLOAT right; // xmm0_4
  FLOAT left; // xmm2_4
  FLOAT bottom; // xmm1_4
  __int64 i; // rcx
  float *v45; // rax
  __int64 j; // rax
  float v47; // xmm1_4
  float v48; // xmm0_4
  char v50; // cl
  char v51; // al
  FLOAT v52; // xmm3_4
  float v53; // xmm1_4
  FLOAT v54; // xmm2_4
  float v55; // xmm1_4
  float v56; // xmm0_4
  float v57; // xmm1_4
  char v58; // dl
  float v59; // xmm2_4
  float v60; // xmm6_4
  float v61; // xmm4_4
  float v62; // xmm3_4
  float v63; // xmm5_4
  char v64; // r10
  float v65; // xmm2_4
  float v66; // xmm3_4
  float v67; // xmm8_4
  float v68; // xmm0_4
  float v69; // xmm1_4
  char v70; // r10
  float v71; // xmm5_4
  float v72; // xmm0_4
  float v73; // xmm0_4
  float v74; // [rsp+20h] [rbp-E0h]
  float v75; // [rsp+20h] [rbp-E0h]
  float v76; // [rsp+24h] [rbp-DCh]
  float v77; // [rsp+24h] [rbp-DCh]
  float v78; // [rsp+2Ch] [rbp-D4h]
  struct D2D_POINT_2F v79[2]; // [rsp+30h] [rbp-D0h] BYREF
  FLOAT v80; // [rsp+40h] [rbp-C0h]
  FLOAT v81; // [rsp+44h] [rbp-BCh]
  FLOAT v82; // [rsp+48h] [rbp-B8h]
  FLOAT v83; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 v84; // [rsp+50h] [rbp-B0h] BYREF
  struct D2D_POINT_2F *v85; // [rsp+58h] [rbp-A8h]
  float v86; // [rsp+60h] [rbp-A0h]
  float v87; // [rsp+64h] [rbp-9Ch]
  int v88; // [rsp+68h] [rbp-98h]
  float v89; // [rsp+6Ch] [rbp-94h]
  struct D2D_POINT_2F v90; // [rsp+70h] [rbp-90h] BYREF
  float v91; // [rsp+78h] [rbp-88h]
  float v92; // [rsp+7Ch] [rbp-84h]
  float v93; // [rsp+80h] [rbp-80h]
  float v94; // [rsp+84h] [rbp-7Ch]
  float v95; // [rsp+88h] [rbp-78h]
  float v96; // [rsp+8Ch] [rbp-74h]
  struct D2D_POINT_2F v97; // [rsp+90h] [rbp-70h] BYREF

  if ( !a3 )
    goto LABEL_2;
  v50 = *(_BYTE *)(a3 + 64);
  if ( v50 >> 6 != 1 )
  {
    if ( v50 >> 6 < 0 )
      goto LABEL_50;
    v58 = *(_BYTE *)(a3 + 65);
    if ( (char)(4 * v58) >> 6 != 1 )
    {
      if ( (char)(4 * v58) >> 6 < 0 )
      {
LABEL_73:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 4) - 0.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 16) - 0.0) & _xmm) < 0.000081380211 )
        {
          *(_BYTE *)(a3 + 64) = v50 | 0xC0;
          goto LABEL_50;
        }
        goto LABEL_74;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a3 + 28) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a3 + 12) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a3 + 60) & _xmm))
                        - 1.0) & _xmm) < 0.000081380211 )
      {
        *(_BYTE *)(a3 + 65) = v58 | 0x30;
        goto LABEL_73;
      }
      *(_BYTE *)(a3 + 65) = v58 & 0xCF | 0x10;
    }
LABEL_74:
    *(_BYTE *)(a3 + 64) = v50 & 0x3F | 0x40;
  }
  if ( CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a3) )
  {
LABEL_50:
    v51 = (char)(4 * *(_BYTE *)(a3 + 64)) >> 6;
    *(_OWORD *)&v79[0].x = 0LL;
    if ( v51 <= 0 )
    {
      if ( v51 < 0 )
      {
LABEL_52:
        v52 = *(float *)(a3 + 48) + a2->right;
        v53 = *(float *)(a3 + 52);
        v54 = v53 + a2->bottom;
        v55 = v53 + a2->top;
        v79[0].x = *(float *)(a3 + 48) + a2->left;
        v79[1].x = v52;
        v79[1].y = v54;
        goto LABEL_53;
      }
      if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a3)
        && v71 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a3 - 1.0) & _xmm)
        && v71 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 20) - 1.0) & _xmm) )
      {
        *(_BYTE *)(a3 + 64) |= 0x30u;
        goto LABEL_52;
      }
      *(_BYTE *)(a3 + 64) &= ~0x20u;
      *(_BYTE *)(a3 + 64) |= 0x10u;
    }
    if ( !CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a3) )
    {
      CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)a3, a2, &v90);
      v84 = 4LL;
      v85 = &v90;
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
        (float *)v79,
        &v84);
      return CRoundedRectangleGeometryData::FillContainsRect(a1, v79, 0LL);
    }
    v59 = *(float *)a3;
    v60 = *(float *)(a3 + 20);
    v61 = (float)(*(float *)a3 * a2->left) + *(float *)(a3 + 48);
    v62 = (float)(v60 * a2->top) + *(float *)(a3 + 52);
    v63 = (float)(*(float *)a3 * a2->right) + *(float *)(a3 + 48);
    v55 = (float)(v60 * a2->bottom) + *(float *)(a3 + 52);
    v79[0].x = v61;
    v79[0].y = v62;
    v79[1].x = v63;
    v79[1].y = v55;
    if ( v59 > 0.0 && v60 > 0.0 )
      return CRoundedRectangleGeometryData::FillContainsRect(a1, v79, 0LL);
    if ( v61 > v63 )
    {
      v79[0].x = v63;
      v79[1].x = v61;
    }
    if ( v62 <= v55 )
      return CRoundedRectangleGeometryData::FillContainsRect(a1, v79, 0LL);
    v79[1].y = v62;
LABEL_53:
    v79[0].y = v55;
    return CRoundedRectangleGeometryData::FillContainsRect(a1, v79, 0LL);
  }
LABEL_2:
  v6 = *(float *)(a1 + 4);
  v7 = *(float *)a1;
  if ( *(_BYTE *)(a1 + 52) )
  {
    v8 = v7 + *(float *)(a1 + 8);
    v9 = v6 + *(float *)(a1 + 12);
  }
  else
  {
    v8 = *(float *)(a1 + 8);
    v9 = *(float *)(a1 + 12);
  }
  *(_OWORD *)&v79[0].x = 0LL;
  if ( a3 )
  {
    if ( CMILMatrix::IsTranslateIgnoreZ<1>(a3) )
    {
      v15.m128_f32[0] = *(float *)(a3 + 48) + a2->left;
      x = *(float *)(a3 + 48) + a2->right;
      v18 = *(float *)(a3 + 52) + a2->top;
      y = *(float *)(a3 + 52) + a2->bottom;
      goto LABEL_20;
    }
    v77 = 0.0;
    v75 = 0.0;
    if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a3) )
    {
      v65 = *(float *)a3;
      v64 = 1;
      v66 = *(float *)(a3 + 20);
      v15.m128_f32[0] = (float)(*(float *)a3 * a2->left) + *(float *)(a3 + 48);
      x = (float)(*(float *)a3 * a2->right) + *(float *)(a3 + 48);
      v67 = v66 * a2->bottom;
      v18 = (float)(v66 * a2->top) + *(float *)(a3 + 52);
      LODWORD(v79[0].x) = v15.m128_i32[0];
      v68 = v15.m128_f32[0];
      y = v67 + *(float *)(a3 + 52);
      v69 = x;
      v79[1].x = x;
      v75 = x;
      v79[0].y = v18;
      v77 = v15.m128_f32[0];
      v79[1].y = y;
      if ( v65 > 0.0 )
      {
        v77 = v15.m128_f32[0];
        v75 = x;
        if ( v66 > 0.0 )
          goto LABEL_20;
      }
    }
    else
    {
      y = v79[1].y;
      v68 = 0.0;
      x = v79[1].x;
      v69 = 0.0;
      v18 = v79[0].y;
      v15.m128_i32[0] = LODWORD(v79[0].x);
    }
    if ( v64 || (CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)a3, a2, &v97), v68 = v77, v69 = v75, v70) )
    {
      if ( v68 > v69 )
      {
        v72 = v15.m128_f32[0];
        v15.m128_f32[0] = x;
        x = v72;
      }
      if ( v18 > y )
      {
        v73 = v18;
        v18 = y;
        y = v73;
      }
    }
    else
    {
      v84 = 4LL;
      v85 = &v97;
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
        (float *)v79,
        &v84);
      y = v79[1].y;
      x = v79[1].x;
      v18 = v79[0].y;
      v15.m128_i32[0] = LODWORD(v79[0].x);
    }
  }
  else
  {
    v10 = *a2;
    *(struct D2D_RECT_F *)&v79[0].x = *a2;
    if ( v79[0].x <= -3.4028235e38 )
      v11 = FLOAT_N3_4028235e38;
    else
      v11 = v10.left + -0.015625;
    if ( v79[0].y <= -3.4028235e38 )
      v12 = FLOAT_N3_4028235e38;
    else
      v12 = v79[0].y + -0.015625;
    if ( v79[1].x >= 3.4028235e38 )
      v13 = FLOAT_3_4028235e38;
    else
      v13 = v79[1].x + 0.015625;
    if ( v79[1].y >= 3.4028235e38 )
      v14 = FLOAT_3_4028235e38;
    else
      v14 = v79[1].y + 0.015625;
    if ( v8 <= v7 || v9 <= v6 || v7 >= v11 && v6 >= v12 && v13 >= v8 && v14 >= v9 )
      return 0;
    v15 = *(__m128 *)a2;
    LODWORD(y) = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
    LODWORD(x) = _mm_shuffle_ps(*(__m128 *)a2, *(__m128 *)a2, 170).m128_u32[0];
    LODWORD(v18) = _mm_shuffle_ps(*(__m128 *)a2, *(__m128 *)a2, 85).m128_u32[0];
  }
LABEL_20:
  v19 = x + -0.015625;
  v20 = v15.m128_f32[0] + 0.015625;
  v21 = v18 + 0.015625;
  v22 = y - 0.015625;
  if ( v19 <= v20 || v22 <= v21 )
  {
    v22 = 0.0;
    v19 = 0.0;
    v21 = 0.0;
    v20 = 0.0;
  }
  if ( v19 > v20 && v22 > v21 && (v20 < v7 || v21 < v6 || v8 < v19 || v9 < v22) )
    return 0;
  v23 = (__m128)*(unsigned int *)(a1 + 16);
  v24 = (__m128)*(unsigned int *)(a1 + 20);
  if ( *(_BYTE *)(a1 + 52) )
  {
    v27 = _mm_unpacklo_ps(v23, v24);
    v29 = v27.m128_f32[0];
    v84 = _mm_shuffle_ps(v27, v27, 85).m128_u64[0];
    v79[0] = *(struct D2D_POINT_2F *)v27.m128_f32;
    v25 = v27.m128_f32[0];
    v28 = *(float *)&v84;
    LODWORD(v30) = _mm_shuffle_ps(v27, v27, 85).m128_u32[0];
    v26 = v30;
  }
  else
  {
    v25 = *(float *)(a1 + 24);
    v26 = *(float *)(a1 + 28);
    v27.m128_i32[0] = *(_DWORD *)(a1 + 32);
    v28 = *(float *)(a1 + 36);
    v29 = *(float *)(a1 + 40);
    v30 = *(float *)(a1 + 44);
  }
  v78 = v25;
  v74 = v27.m128_f32[0];
  v31 = v7 + v23.m128_f32[0];
  v32 = v8;
  v33 = v8 - v74;
  *(FLOAT *)&v84 = v31;
  v90.x = v31;
  v76 = v32 - v25;
  v34 = *(_DWORD *)(a1 + 16);
  v35 = v6 + v24.m128_f32[0];
  v91 = v76;
  v93 = v33;
  v36 = v21 < (float)(v6 + v24.m128_f32[0]);
  v37 = v26 + v6;
  v90.y = v35;
  v92 = v37;
  v38 = v9 - v28;
  v39 = v9 - v30;
  v94 = v38;
  v96 = v39;
  v79[0].x = v29 + v7;
  v95 = v29 + v7;
  if ( (v36 || v21 < v37 || v39 < v22 || v38 < v22)
    && (v20 < *(float *)&v84 || v20 < v79[0].x || v76 < v19 || v33 < v19) )
  {
    v87 = v28;
    top = a2->top;
    HIDWORD(v85) = LODWORD(v26) ^ _xmm;
    right = a2->right;
    v86 = v74;
    left = a2->left;
    LODWORD(v84) = v34 ^ _xmm;
    v79[0].y = top;
    v79[1].y = top;
    bottom = a2->bottom;
    v79[0].x = left;
    v82 = left;
    HIDWORD(v84) = v24.m128_i32[0] ^ _xmm;
    *(float *)&v85 = v78;
    v88 = LODWORD(v29) ^ _xmm;
    v89 = v30;
    v79[1].x = right;
    v80 = right;
    v81 = bottom;
    v83 = bottom;
    if ( a3 )
      CMILMatrix::Transform((CMILMatrix *)a3, v79, v79, 4);
    for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
    {
      if ( *(_BYTE *)(a1 + 52) )
        v45 = (float *)(a1 + 16);
      else
        v45 = (float *)(a1 + 8 * ((unsigned int)i + 2LL));
      if ( *v45 > 0.0 && v45[1] > 0.0 )
      {
        if ( a3 )
        {
          for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
          {
            v47 = (float)(v79[j].x - *(&v90.x + 2 * i)) / *((float *)&v84 + 2 * i);
            if ( v47 > 0.0 )
            {
              v48 = (float)(v79[j].y - *(&v90.y + 2 * i)) / *((float *)&v84 + 2 * i + 1);
              if ( v48 > 0.0 && (float)((float)(v48 * v48) + (float)(v47 * v47)) > 1.0 )
                return 0;
            }
          }
        }
        else
        {
          v56 = (float)(v79[i].x - *(&v90.x + 2 * i)) / *((float *)&v84 + 2 * i);
          if ( v56 > 0.0 )
          {
            v57 = (float)(v79[i].y - *(&v90.y + 2 * i)) / *((float *)&v84 + 2 * i + 1);
            if ( v57 > 0.0 && (float)((float)(v57 * v57) + (float)(v56 * v56)) > 1.0 )
              return 0;
          }
        }
      }
    }
  }
  return 1;
}
