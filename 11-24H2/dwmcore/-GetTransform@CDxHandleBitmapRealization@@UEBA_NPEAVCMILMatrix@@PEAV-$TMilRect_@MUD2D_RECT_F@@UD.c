/*
 * XREFs of ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA3A0
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x180028BD0 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@WBAA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802D7EC0 (-GetTransform@CDxHandleBitmapRealization@@WBAA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027EE0 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800AA280 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800AB7C8 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AB9B0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B2A40 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B2C70 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B4A00 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x1801ADB70 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDxHandleBitmapRealization::GetTransform(__int64 a1, __m128 *a2, float *a3)
{
  _DWORD *v5; // r15
  __int64 v6; // r14
  int *v7; // rdi
  int v8; // eax
  int v9; // ecx
  int v10; // r15d
  int v11; // r13d
  int v12; // eax
  char v13; // cl
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  float v19; // xmm5_4
  float v20; // xmm8_4
  float v21; // xmm6_4
  struct D2D_SIZE_U (__fastcall *v22)(CBitmapRealization *__hidden); // rax
  int v23; // r8d
  int v24; // r9d
  int v25; // edx
  int v26; // r10d
  int v27; // eax
  int v28; // ecx
  char v29; // al
  __int8 v30; // cl
  char v31; // cl
  int v32; // xmm2_4
  float v33; // xmm3_4
  char v34; // cl
  float v36; // xmm6_4
  __m128 v37; // xmm2
  __m128 v38; // xmm3
  __m128 v39; // xmm4
  __m128 v40; // xmm10
  __m128 v41; // xmm8
  __m128 v42; // xmm7
  __m128 v43; // xmm6
  __m128 v44; // xmm5
  __m128 v45; // xmm1
  __m128 v46; // xmm11
  __m128 v47; // xmm2
  __m128 v48; // xmm11
  __m128 v49; // xmm9
  __m128 v50; // xmm0
  __m128 v51; // xmm1
  __m128 v52; // xmm1
  __int32 v53; // eax
  __m128 v54; // xmm0
  float v55; // xmm4_4
  float v56; // xmm8_4
  float v57; // xmm5_4
  __int8 v58; // cl
  float v59; // xmm4_4
  float v60; // xmm5_4
  float v61; // xmm8_4
  __m128 v62; // xmm1
  __int32 v63; // eax
  __m128 v64; // xmm0
  __m128 v65; // xmm1
  __int8 v66; // cl
  float v67; // xmm0_4
  float v68; // xmm3_4
  float v69; // xmm1_4
  float v70; // xmm2_4
  float v71; // xmm4_4
  float v72; // xmm4_4
  float v73; // xmm2_4
  float v74; // xmm3_4
  float v75; // xmm4_4
  float v76; // xmm5_4
  float v77; // xmm8_4
  __int8 v78; // cl
  __int8 v79; // cl
  float v80; // xmm2_4
  float v81; // xmm3_4
  float v82; // xmm0_4
  float v83; // xmm8_4
  float v84; // xmm6_4
  float v85; // xmm4_4
  float v86; // xmm5_4
  float v87; // xmm10_4
  float v88; // xmm11_4
  float v89; // xmm9_4
  float v90; // xmm7_4
  float v91; // xmm1_4
  char v92; // al
  float v93; // xmm12_4
  float v94; // xmm13_4
  float v95; // xmm13_4
  float v96; // xmm1_4
  float v97; // xmm11_4
  float v98; // xmm2_4
  float v99; // xmm3_4
  float v100; // xmm0_4
  float v101; // xmm1_4
  float v102; // xmm2_4
  float v103; // xmm0_4
  float v104; // xmm1_4
  float v105; // xmm3_4
  float v106; // xmm2_4
  float v107; // xmm0_4
  float v108; // xmm1_4
  float v109; // xmm3_4
  float v110; // xmm0_4
  float v111; // xmm1_4
  float v112; // xmm3_4
  float v113; // xmm0_4
  float v114; // xmm5_4
  float v115; // xmm8_4
  float v116; // xmm0_4
  float v117; // xmm2_4
  float v118; // xmm3_4
  float v119; // xmm0_4
  float v120; // xmm1_4
  float v121; // xmm2_4
  float v122; // xmm0_4
  float v123; // xmm1_4
  float v124; // xmm3_4
  float v125; // xmm2_4
  float v126; // xmm0_4
  float v127; // xmm1_4
  float v128; // xmm3_4
  float v129; // xmm0_4
  float v130; // xmm1_4
  float v131; // xmm3_4
  float v132; // xmm0_4
  float v133; // xmm8_4
  float v134; // xmm5_4
  char v135; // cl
  char v136; // al
  char v137; // cl
  __int8 v138; // cl
  int v139; // r8d
  int v140; // r9d
  __m128 v141; // [rsp+28h] [rbp-E0h] BYREF
  __m128 v142; // [rsp+38h] [rbp-D0h]
  __m128 v143; // [rsp+48h] [rbp-C0h]
  _BYTE v144[20]; // [rsp+58h] [rbp-B0h]
  _DWORD v145[2]; // [rsp+78h] [rbp-90h] BYREF

  v5 = (_DWORD *)a1;
  if ( *(_QWORD *)(a1 + 296) )
  {
    if ( *(_BYTE *)(a1 + 313) )
    {
      v6 = a1 - 80;
      if ( *(_BYTE *)(a1 - 80 + 320) )
      {
        v7 = (int *)(v6 + 304);
        goto LABEL_5;
      }
      v22 = *(struct D2D_SIZE_U (__fastcall **)(CBitmapRealization *__hidden))(*(_QWORD *)v6 + 48LL);
      if ( v22 == CBitmapRealization::GetTextureSize )
        v22 = *(struct D2D_SIZE_U (__fastcall **)(CBitmapRealization *__hidden))(*(_QWORD *)a1 + 32LL);
      else
        a1 -= 80LL;
      ((void (__fastcall *)(__int64, _DWORD *))v22)(a1, v145);
      v23 = *(_DWORD *)(v6 + 164);
      v24 = *(_DWORD *)(v6 + 156);
      v25 = v145[0];
      v26 = v145[1];
      if ( *(_DWORD *)(v6 + 300) == 2 )
      {
        if ( v23 - v24 > 0 && *(_DWORD *)(v6 + 168) - *(_DWORD *)(v6 + 160) > 0 )
        {
LABEL_156:
          v26 = *(_DWORD *)(v6 + 168);
          v25 = *(_DWORD *)(v6 + 164);
          v27 = *(_DWORD *)(v6 + 160);
          v28 = *(_DWORD *)(v6 + 156);
          goto LABEL_21;
        }
      }
      else if ( v24 <= v23
             && *(_DWORD *)(v6 + 160) <= *(_DWORD *)(v6 + 168)
             && (TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)(v6 + 156))
              || v140 >= 0 && *(int *)(v6 + 160) >= 0 && v139 <= v25 && *(_DWORD *)(v6 + 168) <= v26) )
      {
        goto LABEL_156;
      }
      v27 = 0;
      v28 = 0;
LABEL_21:
      v7 = v5 + 56;
      v5[56] = v28;
      v5[57] = v27;
      v5[58] = v25;
      v5[59] = v26;
      *(_BYTE *)(v6 + 320) = 1;
LABEL_5:
      v8 = *v7;
      v9 = v7[1];
      a2->m128_u64[0] = 1065353216LL;
      a2->m128_u64[1] = 0LL;
      a2[1].m128_i32[0] = 0;
      *(unsigned __int64 *)((char *)a2[1].m128_u64 + 4) = 1065353216LL;
      *(unsigned __int64 *)((char *)&a2[1].m128_u64[1] + 4) = 0LL;
      a2[2].m128_i32[1] = 0;
      a2[2].m128_u64[1] = 1065353216LL;
      a2[3].m128_i32[0] = COERCE_UNSIGNED_INT((float)v8) ^ _xmm;
      *(unsigned __int64 *)((char *)a2[3].m128_u64 + 4) = COERCE_UNSIGNED_INT((float)v9) ^ (unsigned int)_xmm;
      a2[3].m128_i32[3] = 1065353216;
      LOBYTE(v8) = a2[4].m128_i8[0] & 0xF8;
      *(_DWORD *)&v144[16] = 0;
      a2[4].m128_i8[0] = v8 & 7 | 0xA8;
      a2[4].m128_i8[1] = a2[4].m128_i8[1] & 0xC0 | 0x29;
      v10 = v7[2] - *v7;
      v11 = v7[3] - v7[1];
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
      if ( v12 == 1 )
      {
LABEL_11:
        v16 = *(float *)(v6 + 176);
        v17 = *(float *)(v6 + 180);
        v18 = *(float *)(v6 + 184);
        v19 = *(float *)(v6 + 188);
        v20 = *(float *)(v6 + 192);
        v21 = *(float *)(v6 + 196);
        *(_QWORD *)&v144[12] = 0x28083F800000LL;
        v141 = (__m128)__PAIR64__(LODWORD(v17), LODWORD(v16));
        v142 = (__m128)__PAIR64__(LODWORD(v19), LODWORD(v18));
        *(float *)v144 = v20;
        *(float *)&v144[4] = v21;
        v143 = (__m128)_xmm;
        *(_DWORD *)&v144[8] = 0;
        if ( v17 == 0.0 && v18 == 0.0 )
        {
          v144[16] = -120;
          if ( v16 == 1.0 && v19 == 1.0 )
          {
            v144[16] = -88;
            if ( v20 == 0.0 && v21 == 0.0 )
              goto LABEL_28;
          }
        }
        if ( (char)(a2[4].m128_i8[0] << 6) >> 6 == 1 )
        {
          v36 = FLOAT_0_000081380211;
        }
        else
        {
          if ( (char)(a2[4].m128_i8[0] << 6) >> 6 < 0
            || (v36 = FLOAT_0_000081380211, (unsigned __int8)CMILMatrix::IsTranslate<1>(a2))
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(a2[3].m128_f32[0] - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(a2[3].m128_f32[1] - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(a2[3].m128_f32[2] - 0.0) & _xmm) < 0.000081380211 )
          {
            v52 = v142;
            v53 = *(_DWORD *)&v144[16];
            *a2 = v141;
            v54 = *(__m128 *)v144;
            a2[1] = v52;
            a2[2] = (__m128)_xmm;
            a2[3] = v54;
            a2[4].m128_i32[0] = v53;
            goto LABEL_28;
          }
          a2[4].m128_i8[0] = a2[4].m128_i8[0] & 0xFC | 1;
        }
        if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(&v141) )
          goto LABEL_28;
        if ( !(unsigned __int8)CMILMatrix::IsTranslate<1>(&v141) )
        {
          if ( !(unsigned __int8)CMILMatrix::IsTranslate<1>(a2) )
          {
            if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(&v141) )
            {
              if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(a2)
                && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v141) )
              {
                v80 = a2->m128_f32[0];
                v81 = a2->m128_f32[1];
                v82 = a2->m128_f32[0];
                v83 = v142.m128_f32[0];
                v84 = v141.m128_f32[0];
                v85 = a2[1].m128_f32[0];
                v86 = a2[1].m128_f32[1];
                v87 = a2[3].m128_f32[0];
                v88 = a2[3].m128_f32[1];
                v89 = v142.m128_f32[1];
                v90 = v141.m128_f32[1];
                v91 = v81 * v142.m128_f32[0];
                *(unsigned __int64 *)((char *)&a2[3].m128_u64[1] + 4) = 1065353216LL;
                v92 = a2[4].m128_i8[1] & 0xF3 | 8;
                a2->m128_u64[1] = 0LL;
                v93 = a2[2].m128_f32[2] * v143.m128_f32[2];
                a2[1].m128_u64[1] = 0LL;
                v94 = a2[3].m128_f32[2] * v143.m128_f32[2];
                a2[2].m128_u64[0] = 0LL;
                a2->m128_f32[0] = v91 + (float)(v82 * v84);
                a2[2].m128_i32[3] = 0;
                v95 = v94 + *(float *)&v144[8];
                a2[4].m128_i8[0] = 8;
                a2[4].m128_i8[1] = v92 & 0xCF | 0x20;
                a2[1].m128_f32[0] = (float)(v86 * v83) + (float)(v85 * v84);
                a2[2].m128_f32[2] = v93;
                v96 = (float)((float)(v88 * v83) + (float)(v87 * v84)) + *(float *)v144;
                a2[3].m128_f32[2] = v95;
                v97 = (float)((float)(v88 * v89) + (float)(v87 * v90)) + *(float *)&v144[4];
                a2[3].m128_f32[0] = v96;
                a2->m128_f32[1] = (float)(v81 * v89) + (float)(v80 * v90);
                a2[1].m128_f32[1] = (float)(v86 * v89) + (float)(v85 * v90);
                a2[3].m128_f32[1] = v97;
              }
              else
              {
                v37 = *a2;
                v38 = a2[1];
                v39 = a2[2];
                v40 = a2[3];
                v41 = *(__m128 *)v144;
                v42 = v142;
                v43 = v143;
                v44 = v141;
                v45 = _mm_add_ps(
                        _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 170), v143),
                        _mm_mul_ps(_mm_shuffle_ps(v37, v37, 0), v141));
                v46 = _mm_add_ps(
                        _mm_mul_ps(_mm_shuffle_ps(v37, v37, 255), *(__m128 *)v144),
                        _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), v142));
                v47 = _mm_mul_ps(_mm_shuffle_ps(v40, v40, 255), *(__m128 *)v144);
                v48 = _mm_add_ps(v46, v45);
                v49 = _mm_add_ps(
                        _mm_mul_ps(_mm_shuffle_ps(v38, v38, 255), *(__m128 *)v144),
                        _mm_mul_ps(_mm_shuffle_ps(v38, v38, 85), v142));
                v50 = _mm_mul_ps(_mm_shuffle_ps(v39, v39, 85), v142);
                v51 = _mm_add_ps(
                        _mm_mul_ps(_mm_shuffle_ps(v38, v38, 170), v143),
                        _mm_mul_ps(_mm_shuffle_ps(v38, v38, 0), v141));
                *a2 = v48;
                a2[1] = _mm_add_ps(v49, v51);
                a2[2] = _mm_add_ps(
                          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v39, v39, 255), v41), v50),
                          _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps(v39, v39, 170), v43),
                            _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0), v44)));
                a2[3] = _mm_add_ps(
                          _mm_add_ps(v47, _mm_mul_ps(_mm_shuffle_ps(v40, v40, 85), v42)),
                          _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps(v40, v40, 170), v43),
                            _mm_mul_ps(_mm_shuffle_ps(v40, v40, 0), v44)));
                a2[4].m128_i32[0] = 0;
              }
              goto LABEL_28;
            }
            v72 = v141.m128_f32[0];
            v73 = v143.m128_f32[2];
            v74 = v142.m128_f32[1];
            if ( v36 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v141.m128_f32[0] - 1.0) & _xmm)
              || v36 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v142.m128_f32[1] - 1.0) & _xmm)
              || v36 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v143.m128_f32[2] - 1.0) & _xmm) )
            {
              a2->m128_f32[0] = v141.m128_f32[0] * a2->m128_f32[0];
              a2[1].m128_f32[0] = v72 * a2[1].m128_f32[0];
              a2[2].m128_f32[0] = v72 * a2[2].m128_f32[0];
              a2[3].m128_f32[0] = v72 * a2[3].m128_f32[0];
              a2->m128_f32[1] = v74 * a2->m128_f32[1];
              a2[1].m128_f32[1] = v74 * a2[1].m128_f32[1];
              a2[2].m128_f32[1] = v74 * a2[2].m128_f32[1];
              a2[3].m128_f32[1] = v74 * a2[3].m128_f32[1];
              if ( v36 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v73 - 1.0) & _xmm) )
              {
                a2->m128_f32[2] = v73 * a2->m128_f32[2];
                a2[1].m128_f32[2] = v73 * a2[1].m128_f32[2];
                a2[2].m128_f32[2] = v73 * a2[2].m128_f32[2];
                a2[3].m128_f32[2] = v73 * a2[3].m128_f32[2];
              }
              a2[4].m128_i8[0] &= 0xCCu;
            }
            v75 = *(float *)v144;
            v76 = *(float *)&v144[8];
            v77 = *(float *)&v144[4];
            if ( v36 > COERCE_FLOAT(*(_DWORD *)v144 & _xmm)
              && v36 > COERCE_FLOAT(*(_DWORD *)&v144[4] & _xmm)
              && v36 > COERCE_FLOAT(*(_DWORD *)&v144[8] & _xmm) )
            {
LABEL_28:
              if ( a3 )
              {
                *a3 = (float)*v7;
                a3[1] = (float)v7[1];
                a3[2] = (float)v7[2];
                a3[3] = (float)v7[3];
              }
              v29 = (char)(a2[4].m128_i8[0] << 6) >> 6;
              if ( v29 == 1 )
                return 1;
              if ( v29 < 0 && v29 == -2 )
                return 0;
              v30 = a2[4].m128_i8[1];
              if ( (char)(16 * v30) >> 6 != 1 )
              {
                if ( (char)(16 * v30) >> 6 == 0xFE )
                {
                  v32 = _xmm;
                  v33 = FLOAT_61440_0;
                }
                else
                {
                  v31 = (char)(4 * v30) >> 6;
                  if ( v31 > 0 )
                    return 1;
                  if ( v31 == -2 )
                  {
                    v32 = _xmm;
                    v33 = FLOAT_61440_0;
                    if ( (float)(COERCE_FLOAT(a2[2].m128_i32[3] & _xmm) * 61440.0) != 0.0 )
                      return 1;
                  }
                  else
                  {
                    v32 = _xmm;
                    v33 = FLOAT_61440_0;
                    if ( (float)((float)((float)(COERCE_FLOAT(a2[1].m128_i32[3] & _xmm) * 61440.0)
                                       + (float)(COERCE_FLOAT(a2->m128_i32[3] & _xmm) * 61440.0))
                               + COERCE_FLOAT(a2[3].m128_i32[3] & _xmm)) == 1.0 )
                    {
                      v34 = 1;
                      a2[4].m128_i8[1] = a2[4].m128_i8[1] & 0xCF ^ 0x20;
                    }
                    else
                    {
                      v34 = 0;
                    }
                    if ( ((unsigned __int8)v34 & ((float)(COERCE_FLOAT(a2[2].m128_i32[3] & _xmm) * 61440.0) == 0.0)) == 0 )
                      return 1;
                  }
                  if ( a2[2].m128_f32[0] != 0.0 || a2[2].m128_f32[1] != 0.0 )
                    return 1;
                  a2[4].m128_i8[1] = a2[4].m128_i8[1] & 0xF3 ^ 8;
                }
                if ( (char)(16 * a2[4].m128_i8[0]) >> 6 != 1 )
                {
                  if ( (char)(16 * a2[4].m128_i8[0]) >> 6 != 0xFE )
                  {
                    v79 = a2[4].m128_i8[1];
                    if ( (char)(4 * v79) >> 6 == 1 )
                      return 1;
                    if ( (char)(4 * v79) >> 6 != 0xFE )
                    {
                      if ( (float)((float)((float)(COERCE_FLOAT(a2[1].m128_i32[3] & v32) * v33)
                                         + (float)(COERCE_FLOAT(a2->m128_i32[3] & v32) * v33))
                                 + COERCE_FLOAT(a2[3].m128_i32[3] & v32)) != 1.0 )
                        return 1;
                      a2[4].m128_i8[1] = v79 & 0xCF ^ 0x20;
                    }
                    if ( a2->m128_f32[2] != 0.0 || a2[1].m128_f32[2] != 0.0 )
                      return 1;
                    a2[4].m128_i8[0] = a2[4].m128_i8[0] & 0xF3 ^ 8;
                  }
                  v135 = a2[4].m128_i8[0];
                  v136 = (char)(4 * v135) >> 6;
                  if ( v136 != 1 )
                  {
                    if ( v136 >= 0 || v136 != -2 )
                    {
                      v137 = v135 >> 6;
                      if ( v137 > 0 )
                        return 1;
                      if ( v137 >= 0 || v137 != -2 )
                      {
                        v138 = a2[4].m128_i8[1];
                        if ( (char)(4 * v138) >> 6 == 1 )
                          return 1;
                        if ( (char)(4 * v138) >> 6 != 0xFE )
                        {
                          if ( (float)((float)((float)(COERCE_FLOAT(a2[1].m128_i32[3] & v32) * v33)
                                             + (float)(COERCE_FLOAT(a2->m128_i32[3] & v32) * v33))
                                     + COERCE_FLOAT(a2[3].m128_i32[3] & v32)) != 1.0 )
                            return 1;
                          a2[4].m128_i8[1] = v138 & 0xCF ^ 0x20;
                        }
                        if ( a2->m128_f32[1] != 0.0 || a2[1].m128_f32[0] != 0.0 )
                          return 1;
                        a2[4].m128_i8[0] = a2[4].m128_i8[0] & 0x3F | 0x80;
                      }
                      if ( a2->m128_f32[0] != 1.0 || a2[1].m128_f32[1] != 1.0 )
                        return 1;
                      a2[4].m128_i8[0] = a2[4].m128_i8[0] & 0xCF ^ 0x20;
                    }
                    if ( a2[2].m128_f32[2] == 1.0
                      && a2[3].m128_f32[0] == 0.0
                      && a2[3].m128_f32[1] == 0.0
                      && a2[3].m128_f32[2] == 0.0 )
                    {
                      a2[4].m128_i8[0] = a2[4].m128_i8[0] & 0xFC ^ 2;
                      return 0;
                    }
                  }
                }
              }
              return 1;
            }
            v78 = a2[4].m128_i8[1];
            if ( (char)(4 * v78) >> 6 != 1 )
            {
              if ( (char)(4 * v78) >> 6 >= 0 )
              {
                if ( v36 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                          (float)((float)((float)(COERCE_FLOAT(a2[1].m128_i32[3] & _xmm) * 61440.0)
                                                        + (float)(COERCE_FLOAT(a2->m128_i32[3] & _xmm) * 61440.0))
                                                + COERCE_FLOAT(a2[3].m128_i32[3] & _xmm))
                                        - 1.0) & _xmm) )
                {
                  v78 |= 0x30u;
                  LODWORD(v132) = a2[2].m128_i32[3] & _xmm;
                  a2[4].m128_i8[1] = v78;
                  if ( v36 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v132 * 61440.0) - 0.0) & _xmm) )
                  {
LABEL_111:
                    v133 = v77 + a2[3].m128_f32[1];
                    v134 = v76 + a2[3].m128_f32[2];
                    a2[3].m128_f32[0] = v75 + a2[3].m128_f32[0];
                    a2[3].m128_f32[1] = v133;
                    a2[3].m128_f32[2] = v134;
                    goto LABEL_112;
                  }
                }
                else
                {
                  v78 = v78 & 0xCF | 0x10;
                }
              }
              else if ( v36 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(a2[2].m128_i32[3] & _xmm) * 61440.0) - 0.0) & _xmm) )
              {
                goto LABEL_111;
              }
            }
            v117 = a2->m128_f32[3];
            v118 = a2[1].m128_f32[3];
            v119 = v117 * v75;
            a2[4].m128_i8[1] = v78 & 0xF3;
            v120 = (float)(v117 * v77) + a2->m128_f32[1];
            v121 = (float)(v117 * v76) + a2->m128_f32[2];
            a2->m128_f32[0] = v119 + a2->m128_f32[0];
            a2->m128_f32[1] = v120;
            v122 = (float)(v118 * v75) + a2[1].m128_f32[0];
            v123 = (float)(v118 * v77) + a2[1].m128_f32[1];
            a2->m128_f32[2] = v121;
            v124 = (float)(v118 * v76) + a2[1].m128_f32[2];
            v125 = a2[2].m128_f32[3];
            a2[1].m128_f32[0] = v122;
            a2[1].m128_f32[1] = v123;
            v126 = (float)(v125 * v75) + a2[2].m128_f32[0];
            a2[1].m128_f32[2] = v124;
            v127 = (float)(v125 * v77) + a2[2].m128_f32[1];
            v128 = a2[3].m128_f32[3];
            a2[2].m128_f32[0] = v126;
            a2[2].m128_f32[1] = v127;
            v129 = (float)(v128 * v75) + a2[3].m128_f32[0];
            v130 = (float)(v128 * v77) + a2[3].m128_f32[1];
            a2[2].m128_f32[2] = (float)(v125 * v76) + a2[2].m128_f32[2];
            v131 = (float)(v128 * v76) + a2[3].m128_f32[2];
            a2[3].m128_f32[0] = v129;
            a2[3].m128_f32[1] = v130;
            a2[3].m128_f32[2] = v131;
LABEL_112:
            a2[4].m128_i8[0] &= 0xFCu;
            goto LABEL_28;
          }
          v59 = a2[3].m128_f32[0];
          v60 = a2[3].m128_f32[1];
          v61 = a2[3].m128_f32[2];
          v62 = v142;
          v63 = *(_DWORD *)&v144[16];
          *a2 = v141;
          v64 = v143;
          a2[1] = v62;
          v65 = *(__m128 *)v144;
          a2[2] = v64;
          a2[3] = v65;
          a2[4].m128_i32[0] = v63;
          if ( v36 > COERCE_FLOAT(LODWORD(v59) & _xmm)
            && v36 > COERCE_FLOAT(LODWORD(v60) & _xmm)
            && v36 > COERCE_FLOAT(LODWORD(v61) & _xmm) )
          {
            goto LABEL_28;
          }
          v66 = a2[4].m128_i8[1];
          v67 = v60 * a2[1].m128_f32[2];
          v68 = (float)((float)(v59 * a2->m128_f32[1]) + (float)(v60 * a2[1].m128_f32[1]))
              + (float)(v61 * a2[2].m128_f32[1]);
          v69 = v61 * a2[2].m128_f32[2];
          a2[3].m128_f32[0] = (float)((float)((float)(v60 * a2[1].m128_f32[0]) + (float)(v59 * a2->m128_f32[0]))
                                    + (float)(v61 * a2[2].m128_f32[0]))
                            + a2[3].m128_f32[0];
          v70 = (float)(v59 * a2->m128_f32[2]) + v67;
          a2[3].m128_f32[1] = v68 + a2[3].m128_f32[1];
          a2[3].m128_f32[2] = (float)(v70 + v69) + a2[3].m128_f32[2];
          if ( (char)(4 * v66) >> 6 != 1 )
          {
            if ( (char)(4 * v66) >> 6 >= 0 )
            {
              if ( v36 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                         (float)((float)((float)(COERCE_FLOAT(a2[1].m128_i32[3] & _xmm) * 61440.0)
                                                       + (float)(COERCE_FLOAT(a2->m128_i32[3] & _xmm) * 61440.0))
                                               + COERCE_FLOAT(a2[3].m128_i32[3] & _xmm))
                                       - 1.0) & _xmm) )
                goto LABEL_64;
              LODWORD(v116) = a2[2].m128_i32[3] & _xmm;
              a2[4].m128_i8[1] = v66 | 0x30;
              if ( v36 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v116 * 61440.0) - 0.0) & _xmm) )
                goto LABEL_64;
            }
            else if ( v36 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(a2[2].m128_i32[3] & _xmm) * 61440.0) - 0.0) & _xmm) )
            {
              goto LABEL_64;
            }
            a2[4].m128_i8[0] &= 0xFCu;
            goto LABEL_28;
          }
LABEL_64:
          v71 = v59 * a2->m128_f32[3];
          a2[4].m128_i32[0] = 0;
          a2[3].m128_f32[3] = (float)((float)(v71 + (float)(v60 * a2[1].m128_f32[3])) + (float)(v61 * a2[2].m128_f32[3]))
                            + a2[3].m128_f32[3];
          goto LABEL_28;
        }
        v55 = *(float *)v144;
        v56 = *(float *)&v144[8];
        v57 = *(float *)&v144[4];
        if ( v36 > COERCE_FLOAT(*(_DWORD *)v144 & _xmm)
          && v36 > COERCE_FLOAT(*(_DWORD *)&v144[4] & _xmm)
          && v36 > COERCE_FLOAT(*(_DWORD *)&v144[8] & _xmm) )
        {
          goto LABEL_28;
        }
        v58 = a2[4].m128_i8[1];
        if ( (char)(4 * v58) >> 6 != 1 )
        {
          if ( (char)(4 * v58) >> 6 >= 0 )
          {
            if ( v36 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                      (float)((float)((float)(COERCE_FLOAT(a2[1].m128_i32[3] & _xmm) * 61440.0)
                                                    + (float)(COERCE_FLOAT(a2->m128_i32[3] & _xmm) * 61440.0))
                                            + COERCE_FLOAT(a2[3].m128_i32[3] & _xmm))
                                    - 1.0) & _xmm) )
            {
              v58 |= 0x30u;
              LODWORD(v113) = a2[2].m128_i32[3] & _xmm;
              a2[4].m128_i8[1] = v58;
              if ( v36 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v113 * 61440.0) - 0.0) & _xmm) )
              {
LABEL_92:
                v114 = v57 + a2[3].m128_f32[1];
                v115 = v56 + a2[3].m128_f32[2];
                a2[3].m128_f32[0] = v55 + a2[3].m128_f32[0];
                a2[3].m128_f32[1] = v114;
                a2[3].m128_f32[2] = v115;
                goto LABEL_93;
              }
            }
            else
            {
              v58 = v58 & 0xCF | 0x10;
            }
          }
          else if ( v36 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(a2[2].m128_i32[3] & _xmm) * 61440.0) - 0.0) & _xmm) )
          {
            goto LABEL_92;
          }
        }
        v98 = a2->m128_f32[3];
        v99 = a2[1].m128_f32[3];
        v100 = v98 * v55;
        a2[4].m128_i8[1] = v58 & 0xF3;
        v101 = (float)(v98 * v57) + a2->m128_f32[1];
        v102 = (float)(v98 * v56) + a2->m128_f32[2];
        a2->m128_f32[0] = v100 + a2->m128_f32[0];
        a2->m128_f32[1] = v101;
        v103 = (float)(v99 * v55) + a2[1].m128_f32[0];
        v104 = (float)(v99 * v57) + a2[1].m128_f32[1];
        a2->m128_f32[2] = v102;
        v105 = (float)(v99 * v56) + a2[1].m128_f32[2];
        v106 = a2[2].m128_f32[3];
        a2[1].m128_f32[0] = v103;
        a2[1].m128_f32[1] = v104;
        v107 = (float)(v106 * v55) + a2[2].m128_f32[0];
        a2[1].m128_f32[2] = v105;
        v108 = (float)(v106 * v57) + a2[2].m128_f32[1];
        v109 = a2[3].m128_f32[3];
        a2[2].m128_f32[0] = v107;
        a2[2].m128_f32[1] = v108;
        v110 = (float)(v109 * v55) + a2[3].m128_f32[0];
        v111 = (float)(v109 * v57) + a2[3].m128_f32[1];
        a2[2].m128_f32[2] = (float)(v106 * v56) + a2[2].m128_f32[2];
        v112 = (float)(v109 * v56) + a2[3].m128_f32[2];
        a2[3].m128_f32[0] = v110;
        a2[3].m128_f32[1] = v111;
        a2[3].m128_f32[2] = v112;
LABEL_93:
        a2[4].m128_i8[0] &= 0xFCu;
        goto LABEL_28;
      }
      v141 = (__m128)_xmm;
      v142 = (__m128)_xmm;
      v144[16] = -86;
      v13 = v144[17] & 0xC0 | 0x29;
      v144[17] = v13;
      v143 = (__m128)_xmm;
      *(struct _D3DCOLORVALUE *)v144 = *(const struct _D3DCOLORVALUE *)&_xmm.r;
      switch ( v12 )
      {
        case 2:
          v141.m128_u64[0] = 0xBF80000000000000uLL;
          v14 = (float)v10;
          v15 = 0.0;
          v142.m128_u64[0] = 0x800000003F800000uLL;
          v143.m128_i32[1] = 0x80000000;
          *(_DWORD *)&v144[4] = 0x80000000;
          break;
        case 3:
          CMILMatrix::Scale((CMILMatrix *)&v141, -1.0, -1.0, 1.0);
          v14 = (float)v11;
          v15 = (float)v10;
          goto LABEL_9;
        case 4:
          v141.m128_u64[0] = 0x3F80000080000000LL;
          v14 = 0.0;
          v15 = (float)v11;
          v142.m128_u64[0] = 3212836864LL;
          v143.m128_i32[0] = 0x80000000;
          *(_DWORD *)v144 = 0x80000000;
          break;
        default:
          goto LABEL_10;
      }
      v144[16] = 8;
      v144[17] = v13 & 0xFC;
LABEL_9:
      CMILMatrix::Translate((CMILMatrix *)&v141, v15, v14);
LABEL_10:
      CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)&v141);
      goto LABEL_11;
    }
    return CBitmapRealization::GetTransform();
  }
  else
  {
    if ( a3 )
    {
      *((_QWORD *)a3 + 1) = 0LL;
      *(_QWORD *)a3 = 0LL;
    }
    CMILMatrix::SetToIdentity((CMILMatrix *)a2);
    return 0;
  }
}
