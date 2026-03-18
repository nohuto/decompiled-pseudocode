/*
 * XREFs of ?Lerp@CExpressionValueStack@@QEAAJXZ @ 0x18015A898
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Lerp(CExpressionValueStack *this)
{
  struct CExpressionValue *v2; // rbx
  struct CExpressionValue *v3; // rdi
  struct CExpressionValue *v4; // rax
  int v5; // ecx
  float v6; // xmm12_4
  unsigned int v7; // r14d
  float v8; // xmm1_4
  __m128 v10; // xmm3
  __m128 v11; // xmm4
  __m128 v12; // xmm5
  __m128 v13; // xmm6
  __m128 v14; // xmm7
  __m128 v15; // xmm8
  __m128 v16; // xmm10
  __m128 v17; // xmm11
  float v18; // xmm9_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  __m128 v30; // xmm3
  __m128 v31; // xmm4
  float v32; // xmm0_4
  float v33; // xmm5_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  __m128 v37; // xmm5
  __m128 v38; // xmm4
  float v39; // xmm3_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  float v43; // eax
  float v44; // xmm0_4
  float v45; // xmm3_4
  float v46; // xmm1_4
  float v47; // xmm2_4
  float v48; // xmm0_4
  float v49; // xmm2_4
  unsigned int v50; // [rsp+28h] [rbp-59h]
  float v51[4]; // [rsp+38h] [rbp-49h]
  __int64 v52; // [rsp+48h] [rbp-39h]
  __int128 v53; // [rsp+50h] [rbp-31h]
  __int64 v54; // [rsp+50h] [rbp-31h]
  float v55[30]; // [rsp+60h] [rbp-21h]

  if ( *((_DWORD *)this + 2) < 3u )
  {
    v50 = 2722;
    goto LABEL_9;
  }
  v2 = CExpressionValueStack::PeekStackValue(this, -2);
  v3 = CExpressionValueStack::PeekStackValue(this, -1);
  v4 = CExpressionValueStack::PeekStackValue(this, 0);
  v5 = *((_DWORD *)v2 + 18);
  v6 = *(float *)v4;
  if ( *((_DWORD *)v4 + 18) != 18 || (v7 = 0, v5 != *((_DWORD *)v3 + 18)) )
  {
    v50 = 2748;
    goto LABEL_9;
  }
  if ( v5 != 18 )
  {
    switch ( v5 )
    {
      case 35:
        v46 = *(float *)v3 - *(float *)v2;
        v47 = *((float *)v3 + 1) - *((float *)v2 + 1);
        *((_DWORD *)v2 + 18) = 35;
        v48 = fmaxf(0.0, fminf(v6, 1.0));
        v49 = (float)(v47 * v48) + *((float *)v2 + 1);
        *(float *)v2 = (float)(v46 * v48) + *(float *)v2;
        *((float *)v2 + 1) = v49;
        goto LABEL_6;
      case 52:
        v43 = *((float *)v3 + 2);
        *(_QWORD *)v51 = *(_QWORD *)v2;
        v54 = *(_QWORD *)v3;
        v44 = COERCE_FLOAT(*(_QWORD *)v3) - COERCE_FLOAT(*(_QWORD *)v2);
        v45 = fmaxf(0.0, fminf(v6, 1.0));
        *((_DWORD *)v2 + 18) = 52;
        *(float *)v2 = (float)(v44 * v45) + v51[0];
        *((float *)v2 + 1) = (float)((float)(*((float *)&v54 + 1) - v51[1]) * v45) + v51[1];
        *((float *)v2 + 2) = (float)((float)(v43 - *((float *)v2 + 2)) * v45) + *((float *)v2 + 2);
        goto LABEL_6;
      case 69:
        v37 = (__m128)_mm_loadu_si128((const __m128i *)v3);
        *((_DWORD *)v2 + 18) = 69;
        v38 = (__m128)_mm_loadu_si128((const __m128i *)v2);
        v39 = fmaxf(0.0, fminf(v6, 1.0));
        *(float *)&v53 = (float)((float)(v37.m128_f32[0] - v38.m128_f32[0]) * v39) + v38.m128_f32[0];
        v40 = _mm_shuffle_ps(v38, v38, 85).m128_f32[0];
        v41 = (float)((float)(_mm_shuffle_ps(v37, v37, 85).m128_f32[0] - v40) * v39) + v40;
        v42 = _mm_shuffle_ps(v38, v38, 170).m128_f32[0];
        v38.m128_f32[0] = _mm_shuffle_ps(v38, v38, 255).m128_f32[0];
        *((float *)&v53 + 1) = v41;
        *((float *)&v53 + 2) = (float)((float)(_mm_shuffle_ps(v37, v37, 170).m128_f32[0] - v42) * v39) + v42;
        *((float *)&v53 + 3) = (float)((float)(_mm_shuffle_ps(v37, v37, 255).m128_f32[0] - v38.m128_f32[0]) * v39)
                             + v38.m128_f32[0];
        *(_OWORD *)v2 = v53;
        goto LABEL_6;
      case 104:
        v30 = *(__m128 *)v3;
        v31 = *(__m128 *)v2;
        *(_QWORD *)v55 = *((_QWORD *)v2 + 2);
        v52 = *((_QWORD *)v3 + 2);
        v32 = COERCE_FLOAT(*(_OWORD *)v3) - COERCE_FLOAT(*(_OWORD *)v2);
        v33 = fmaxf(0.0, fminf(v6, 1.0));
        *((_DWORD *)v2 + 18) = 104;
        *(float *)v2 = (float)(v32 * v33) + v31.m128_f32[0];
        v34 = _mm_shuffle_ps(v31, v31, 85).m128_f32[0];
        v35 = (float)((float)(_mm_shuffle_ps(v30, v30, 85).m128_f32[0] - v34) * v33) + v34;
        v36 = _mm_shuffle_ps(v31, v31, 170).m128_f32[0];
        v31.m128_f32[0] = _mm_shuffle_ps(v31, v31, 255).m128_f32[0];
        *((float *)v2 + 1) = v35;
        *((float *)v2 + 2) = (float)((float)(_mm_shuffle_ps(v30, v30, 170).m128_f32[0] - v36) * v33) + v36;
        *((float *)v2 + 3) = (float)((float)(_mm_shuffle_ps(v30, v30, 255).m128_f32[0] - v31.m128_f32[0]) * v33)
                           + v31.m128_f32[0];
        *((float *)v2 + 4) = (float)((float)(*(float *)&v52 - v55[0]) * v33) + v55[0];
        *((float *)v2 + 5) = (float)((float)(*((float *)&v52 + 1) - v55[1]) * v33) + v55[1];
        goto LABEL_6;
      case 265:
        v10 = *(__m128 *)v3;
        v11 = *(__m128 *)v2;
        v12 = *((__m128 *)v3 + 1);
        v13 = *((__m128 *)v2 + 1);
        v14 = *((__m128 *)v3 + 2);
        v15 = *((__m128 *)v2 + 2);
        v16 = *((__m128 *)v3 + 3);
        *((_DWORD *)v2 + 18) = 265;
        v17 = *((__m128 *)v2 + 3);
        v18 = fmaxf(0.0, fminf(v6, 1.0));
        *(float *)v2 = (float)((float)(v10.m128_f32[0] - v11.m128_f32[0]) * v18) + v11.m128_f32[0];
        v19 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
        v20 = (float)((float)(_mm_shuffle_ps(v10, v10, 85).m128_f32[0] - v19) * v18) + v19;
        v21 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
        v11.m128_f32[0] = _mm_shuffle_ps(v11, v11, 255).m128_f32[0];
        *((float *)v2 + 1) = v20;
        *((float *)v2 + 2) = (float)((float)(_mm_shuffle_ps(v10, v10, 170).m128_f32[0] - v21) * v18) + v21;
        *((float *)v2 + 3) = (float)((float)(_mm_shuffle_ps(v10, v10, 255).m128_f32[0] - v11.m128_f32[0]) * v18)
                           + v11.m128_f32[0];
        *((float *)v2 + 4) = (float)((float)(v12.m128_f32[0] - v13.m128_f32[0]) * v18) + v13.m128_f32[0];
        v22 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
        v23 = (float)((float)(_mm_shuffle_ps(v12, v12, 85).m128_f32[0] - v22) * v18) + v22;
        v24 = _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
        v13.m128_f32[0] = _mm_shuffle_ps(v13, v13, 255).m128_f32[0];
        *((float *)v2 + 5) = v23;
        *((float *)v2 + 6) = (float)((float)(_mm_shuffle_ps(v12, v12, 170).m128_f32[0] - v24) * v18) + v24;
        *((float *)v2 + 7) = (float)((float)(_mm_shuffle_ps(v12, v12, 255).m128_f32[0] - v13.m128_f32[0]) * v18)
                           + v13.m128_f32[0];
        *((float *)v2 + 8) = (float)((float)(v14.m128_f32[0] - v15.m128_f32[0]) * v18) + v15.m128_f32[0];
        v25 = _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
        *((float *)v2 + 9) = (float)((float)(_mm_shuffle_ps(v14, v14, 85).m128_f32[0] - v25) * v18) + v25;
        v26 = _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
        v15.m128_f32[0] = _mm_shuffle_ps(v15, v15, 255).m128_f32[0];
        *((float *)v2 + 10) = (float)((float)(_mm_shuffle_ps(v14, v14, 170).m128_f32[0] - v26) * v18) + v26;
        *((float *)v2 + 11) = (float)((float)(_mm_shuffle_ps(v14, v14, 255).m128_f32[0] - v15.m128_f32[0]) * v18)
                            + v15.m128_f32[0];
        *((float *)v2 + 12) = (float)((float)(v16.m128_f32[0] - v17.m128_f32[0]) * v18) + v17.m128_f32[0];
        v27 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
        v28 = (float)((float)(_mm_shuffle_ps(v16, v16, 85).m128_f32[0] - v27) * v18) + v27;
        v29 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
        v17.m128_f32[0] = _mm_shuffle_ps(v17, v17, 255).m128_f32[0];
        *((float *)v2 + 13) = v28;
        *((float *)v2 + 14) = (float)((float)(_mm_shuffle_ps(v16, v16, 170).m128_f32[0] - v29) * v18) + v29;
        *((float *)v2 + 15) = (float)((float)(_mm_shuffle_ps(v16, v16, 255).m128_f32[0] - v17.m128_f32[0]) * v18)
                            + v17.m128_f32[0];
        goto LABEL_6;
    }
    v50 = 2857;
LABEL_9:
    v7 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v50,
      0LL);
    return v7;
  }
  v8 = *(float *)v3 - *(float *)v2;
  *((_DWORD *)v2 + 18) = 18;
  *(float *)v2 = (float)(fmaxf(0.0, fminf(v6, 1.0)) * v8) + *(float *)v2;
LABEL_6:
  *((_DWORD *)this + 2) -= 2;
  return v7;
}
