/*
 * XREFs of ?GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019FA20
 * Callers:
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180289FB8 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800D1D50 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D3EB0 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderingBatchCommand::GetWorldBounds(__int64 a1, __int64 a2)
{
  int v4; // ecx
  __int64 v5; // rax
  float *v6; // rcx
  float v7; // xmm7_4
  float v8; // xmm5_4
  float v9; // xmm8_4
  float v10; // xmm6_4
  char v11; // cl
  float *v12; // rcx
  __int64 v13; // rdx
  FLOAT v14; // eax
  int v15; // xmm4_4
  float v16; // xmm10_4
  float v17; // xmm9_4
  float v18; // xmm7_4
  float v19; // xmm5_4
  float v20; // xmm8_4
  float v21; // xmm6_4
  __int64 v22; // r12
  float v23; // xmm0_4
  float v24; // xmm1_4
  unsigned int v25; // r15d
  __int64 v26; // r13
  int v27; // esi
  float v28; // xmm0_4
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  __int64 v33; // r14
  char IsTranslateAndScaleIgnore; // al
  char v35; // dl
  float x; // xmm0_4
  unsigned __int64 v37; // rax
  float v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm3_4
  float v41; // xmm6_4
  float v42; // xmm7_4
  float v43; // xmm8_4
  float v44; // xmm9_4
  float v45; // xmm0_4
  float v46; // xmm4_4
  unsigned int v47; // ecx
  unsigned __int64 v48; // rax
  float *v49; // rbx
  float v50; // xmm6_4
  float v51; // xmm8_4
  float v52; // xmm7_4
  float v53; // xmm9_4
  float v54; // xmm0_4
  float v55; // xmm0_4
  unsigned int v56; // ecx
  unsigned __int64 v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // r8d
  unsigned __int64 v60; // rax
  float v61; // xmm3_4
  float v62; // xmm2_4
  float v63; // xmm1_4
  float v64; // xmm0_4
  float v65; // xmm2_4
  float v66; // xmm3_4
  __int64 v67; // rcx
  unsigned __int64 v68; // rax
  float v69; // xmm1_4
  float v70; // xmm2_4
  float Y[4]; // [rsp+28h] [rbp-89h] BYREF
  struct D2D_RECT_F v72; // [rsp+38h] [rbp-79h] BYREF
  struct D2D_POINT_2F v73[4]; // [rsp+48h] [rbp-69h] BYREF

  v4 = *(_DWORD *)a1 - 4;
  if ( !v4 )
  {
    v12 = *(float **)(a1 + 96);
    v13 = *(int *)v12;
    if ( (_DWORD)v13 )
    {
      v72.left = v12[1];
      v72.right = v12[2];
      v14 = v12[3];
      v72.bottom = v12[2 * v13 + 1];
      v72.top = v14;
      *(__m128 *)a2 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)&v72)), (__m128)_xmm);
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
    return;
  }
  v5 = *(_QWORD *)(a1 + 8);
  if ( v4 != 1 )
  {
    v6 = *(float **)(v5 + 16);
    v7 = v6[14];
    v8 = v6[15];
    v9 = v6[16];
    v10 = v6[17];
    v11 = *(_BYTE *)(a1 + 80);
    v72.left = v7;
    v72.top = v8;
    v72.right = v9;
    v72.bottom = v10;
    if ( (char)(4 * v11) >> 6 == 1 )
    {
      v15 = _xmm;
      v16 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v17 = FLOAT_0_000081380211;
    }
    else
    {
      if ( (char)(4 * v11) >> 6 < 0 )
      {
LABEL_5:
        *(float *)a2 = v7 + *(float *)(a1 + 64);
        *(float *)(a2 + 4) = v8 + *(float *)(a1 + 68);
        *(float *)(a2 + 8) = v9 + *(float *)(a1 + 64);
        *(float *)(a2 + 12) = v10 + *(float *)(a1 + 68);
        return;
      }
      IsTranslateAndScaleIgnore = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a1 + 16);
      v15 = _xmm;
      v16 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v17 = FLOAT_0_000081380211;
      if ( IsTranslateAndScaleIgnore
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 1.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 1.0) & _xmm) < 0.000081380211 )
      {
        *(_BYTE *)(a1 + 80) |= 0x30u;
        goto LABEL_5;
      }
      v11 = *(_BYTE *)(a1 + 80) & 0xCF | 0x10;
      *(_BYTE *)(a1 + 80) = v11;
    }
    if ( v11 >> 6 == 1 )
      goto LABEL_31;
    if ( v11 >> 6 < 0 )
    {
LABEL_12:
      v18 = (float)(v7 * *(float *)(a1 + 16)) + *(float *)(a1 + 64);
      *(float *)a2 = v18;
      v19 = (float)(v8 * *(float *)(a1 + 36)) + *(float *)(a1 + 68);
      *(float *)(a2 + 4) = v19;
      v20 = (float)(v9 * *(float *)(a1 + 16)) + *(float *)(a1 + 64);
      *(float *)(a2 + 8) = v20;
      v21 = (float)(v10 * *(float *)(a1 + 36)) + *(float *)(a1 + 68);
      *(float *)(a2 + 12) = v21;
      if ( *(float *)(a1 + 16) <= 0.0 || *(float *)(a1 + 36) <= 0.0 )
      {
        if ( v18 > v20 )
        {
          *(float *)a2 = v20;
          *(float *)(a2 + 8) = v18;
        }
        if ( v19 > v21 )
        {
          *(float *)(a2 + 4) = v21;
          *(float *)(a2 + 12) = v19;
        }
      }
      return;
    }
    v35 = *(_BYTE *)(a1 + 81);
    if ( (char)(4 * v35) >> 6 != 1 )
    {
      if ( (char)(4 * v35) >> 6 < 0 )
      {
LABEL_29:
        if ( v17 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 0.0) & v15)
          && v17 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & v15) )
        {
          *(_BYTE *)(a1 + 80) = v11 | 0xC0;
          goto LABEL_12;
        }
        goto LABEL_30;
      }
      if ( v17 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & v15) * 61440.0)
                                              + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v15) * 61440.0))
                                      + COERCE_FLOAT(*(_DWORD *)(a1 + 76) & v15))
                              - v16) & v15) )
      {
        *(_BYTE *)(a1 + 81) = v35 | 0x30;
        goto LABEL_29;
      }
      *(_BYTE *)(a1 + 81) = v35 & 0xCF | 0x10;
    }
LABEL_30:
    *(_BYTE *)(a1 + 80) = v11 & 0x3F | 0x40;
LABEL_31:
    CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)(a1 + 16), &v72, v73);
    x = v73[0].x;
    v37 = 1LL;
    v38 = v73[0].y;
    v39 = v73[0].x;
    *(FLOAT *)a2 = v73[0].x;
    v40 = v38;
    *(float *)(a2 + 4) = v38;
    *(float *)(a2 + 8) = v39;
    *(float *)(a2 + 12) = v38;
    do
    {
      x = fminf(x, v73[v37].x);
      *(float *)a2 = x;
      v38 = fminf(v38, v73[v37].y);
      *(float *)(a2 + 4) = v38;
      v39 = fmaxf(v39, v73[v37].x);
      *(float *)(a2 + 8) = v39;
      v40 = fmaxf(v40, v73[v37++].y);
      *(float *)(a2 + 12) = v40;
    }
    while ( v37 < 4 );
    return;
  }
  v22 = *(unsigned int *)(a1 + 96);
  if ( !(_DWORD)v22 && *(float *)(a1 + 104) == *(float *)(v5 + 100) && *(float *)(a1 + 108) == *(float *)(v5 + 104) )
  {
    v72 = *(struct D2D_RECT_F *)(*(_QWORD *)(v5 + 16) + 56LL);
    CMILMatrix::Transform2DBoundsHelper<0>(a1 + 16, &v72, (float *)a2);
    return;
  }
  v23 = *(float *)(a1 + 104);
  v24 = *(float *)(a1 + 108);
  if ( v23 >= v24 )
  {
    v41 = FLOAT_3_4028235e38;
    v42 = FLOAT_N3_4028235e38;
    v43 = FLOAT_3_4028235e38;
    v44 = FLOAT_N3_4028235e38;
  }
  else
  {
    v25 = 0;
    v26 = *(_QWORD *)(*(_QWORD *)(v5 + 88) + 8 * v22 + 40);
    v27 = (int)v23;
    Y[0] = 0.0;
    v28 = modff(v24, Y);
    v29 = (int)Y[0];
    if ( COERCE_FLOAT(LODWORD(v28) & _xmm) < 0.000081380211 )
      LOWORD(v29) = v29 - 1;
    v30 = (unsigned __int16)v29 - (unsigned __int16)v27 + 1;
    v31 = (unsigned __int16)(2 * v27);
    v32 = 2 * v30 + 2;
    v33 = *(_QWORD *)(v26 + 40) + 8 * v31;
    if ( !v33 && 2 * v30 != -2 || !*(_QWORD *)(v26 + 48) && 6 * v30 )
      goto LABEL_23;
    v54 = *(float *)(a1 + 104);
    Y[0] = 0.0;
    v55 = modff(v54, Y);
    v41 = FLOAT_3_4028235e38;
    v42 = FLOAT_N3_4028235e38;
    v43 = FLOAT_3_4028235e38;
    v44 = FLOAT_N3_4028235e38;
    if ( v55 <= 0.000081380211 )
    {
      while ( v25 < v32 )
      {
        v41 = fminf(v41, *(float *)(v33 + 8LL * v25));
        v43 = fminf(v43, *(float *)(v33 + 8LL * v25 + 4));
        v42 = fmaxf(v42, *(float *)(v33 + 8LL * v25));
        v44 = fmaxf(v44, *(float *)(v33 + 8LL * v25++ + 4));
        if ( v25 >= 2 )
          goto LABEL_41;
      }
LABEL_23:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    do
    {
      v67 = v25;
      if ( v25 >= v32 )
        goto LABEL_23;
      v68 = v25 + 2;
      if ( v68 >= v32 )
        goto LABEL_23;
      ++v25;
      v69 = (float)((float)(1.0 - v55) * *(float *)(v33 + 8 * v67)) + (float)(v55 * *(float *)(v33 + 8 * v68));
      v70 = (float)((float)(1.0 - v55) * *(float *)(v33 + 8 * v67 + 4)) + (float)(v55 * *(float *)(v33 + 8 * v68 + 4));
      v41 = fminf(v41, v69);
      v42 = fmaxf(v42, v69);
      v43 = fminf(v43, v70);
      v44 = fmaxf(v44, v70);
    }
    while ( v25 < 2 );
LABEL_41:
    if ( (_DWORD)v22 != 1 )
    {
      v56 = 2;
      if ( v32 - 2 > 2 )
      {
        v57 = 2LL;
        while ( v57 < v32 )
        {
          v41 = fminf(v41, *(float *)(v33 + 8 * v57));
          v43 = fminf(v43, *(float *)(v33 + 8 * v57 + 4));
          v42 = fmaxf(v42, *(float *)(v33 + 8 * v57));
          v44 = fmaxf(v44, *(float *)(v33 + 8 * v57 + 4));
          v57 = ++v56;
          if ( v56 >= v32 - 2 )
            goto LABEL_42;
        }
        goto LABEL_23;
      }
    }
LABEL_42:
    v45 = *(float *)(a1 + 108);
    Y[0] = 0.0;
    v46 = modff(v45, Y);
    if ( v46 > 0.000081380211 )
    {
      v58 = (unsigned int)(v32 - 4);
      v59 = v58 + 2;
      v60 = (unsigned int)(v58 + 2);
      if ( v60 < v32 )
      {
        while ( (unsigned int)v58 < v32 && v60 < v32 )
        {
          ++v59;
          v61 = v46 * *(float *)(v33 + 8 * v60);
          v62 = v46 * *(float *)(v33 + 8 * v60 + 4);
          v60 = v59;
          v63 = (float)(1.0 - v46) * *(float *)(v33 + 8 * v58 + 4);
          v64 = (float)(1.0 - v46) * *(float *)(v33 + 8 * v58);
          v58 = (unsigned int)(v58 + 1);
          v65 = v62 + v63;
          v66 = v61 + v64;
          v43 = fminf(v43, v65);
          v44 = fmaxf(v44, v65);
          v41 = fminf(v41, v66);
          v42 = fmaxf(v42, v66);
          if ( v59 >= v32 )
            goto LABEL_45;
        }
        goto LABEL_23;
      }
    }
    else
    {
      v47 = v32 - 2;
      v48 = (unsigned int)(v32 - 2);
      if ( v48 < v32 )
      {
        do
        {
          v41 = fminf(v41, *(float *)(v33 + 8 * v48));
          v43 = fminf(v43, *(float *)(v33 + 8 * v48 + 4));
          v42 = fmaxf(v42, *(float *)(v33 + 8 * v48));
          v44 = fmaxf(v44, *(float *)(v33 + 8 * v48 + 4));
          v48 = ++v47;
        }
        while ( v47 < v32 );
      }
    }
  }
LABEL_45:
  v49 = (float *)(a1 + 16);
  v72.left = v41;
  v72.top = v43;
  v72.right = v42;
  v72.bottom = v44;
  if ( CMILMatrix::IsTranslateIgnoreZ<1>((__int64)v49) )
  {
    *(float *)a2 = v41 + v49[12];
    *(float *)(a2 + 4) = v43 + v49[13];
    *(float *)(a2 + 8) = v42 + v49[12];
    *(float *)(a2 + 12) = v44 + v49[13];
  }
  else if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v49) )
  {
    v50 = (float)(v41 * *v49) + v49[12];
    *(float *)a2 = v50;
    v51 = (float)(v43 * v49[5]) + v49[13];
    *(float *)(a2 + 4) = v51;
    v52 = (float)(v42 * *v49) + v49[12];
    *(float *)(a2 + 8) = v52;
    v53 = (float)(v44 * v49[5]) + v49[13];
    *(float *)(a2 + 12) = v53;
    if ( *v49 <= 0.0 || v49[5] <= 0.0 )
    {
      if ( v50 > v52 )
      {
        *(float *)a2 = v52;
        *(float *)(a2 + 8) = v50;
      }
      if ( v51 > v53 )
      {
        *(float *)(a2 + 4) = v53;
        *(float *)(a2 + 12) = v51;
      }
    }
  }
  else
  {
    CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v49, &v72, v73);
    *(_QWORD *)&v72.left = 4LL;
    *(_QWORD *)&v72.right = v73;
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
      (float *)a2,
      (unsigned __int64 *)&v72);
  }
}
