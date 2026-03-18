/*
 * XREFs of ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x18015AA24
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromScale(CExpressionValueStack *this, unsigned int a2)
{
  char v2; // r14
  struct CExpressionValue *v5; // rax
  float v6; // xmm0_4
  __m128 v7; // xmm3
  float v8; // xmm2_4
  __m128 v9; // xmm1
  unsigned int v10; // ebx
  struct CExpressionValue *v12; // r15
  struct CExpressionValue *v13; // rbx
  struct CExpressionValue *v14; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  __m128 v17; // xmm3
  __m128 v18; // xmm4
  struct CExpressionValue *v19; // rbx
  float *v20; // rax
  _DWORD *v21; // rcx
  float v22; // xmm0_4
  __m128 v23; // xmm3
  float v24; // xmm2_4
  __m128 v25; // xmm1
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  __m128 v30; // xmm3
  float v31; // xmm1_4
  float v32; // xmm0_4
  __m128 v33; // xmm4
  float v34; // xmm2_4
  unsigned int v35; // [rsp+20h] [rbp-30h]
  float v36[8]; // [rsp+30h] [rbp-20h]
  float v37[8]; // [rsp+30h] [rbp-20h]
  __int128 v38; // [rsp+30h] [rbp-20h]
  __int128 v39; // [rsp+30h] [rbp-20h]

  v2 = 0;
  if ( *((_DWORD *)this + 2) < a2 )
  {
    v35 = 5562;
LABEL_10:
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v35,
      0LL);
    return v10;
  }
  if ( a2 == 1 )
  {
    v5 = CExpressionValueStack::PeekStackValue(this, 0);
    if ( *((_DWORD *)v5 + 18) != 18 )
    {
      if ( *((_DWORD *)v5 + 18) == 35 )
      {
        v6 = *(float *)v5;
        v7 = 0LL;
        v8 = *((float *)v5 + 1);
        v9 = 0LL;
        v2 = a2;
        v36[2] = 0.0;
        *(_QWORD *)v36 = *(unsigned int *)v5;
        *((_DWORD *)v5 + 18) = 104;
        v36[3] = v8;
        v9.m128_f32[0] = 0.0 - (float)(v6 * 0.0);
        v7.m128_f32[0] = 0.0 - (float)(v8 * 0.0);
        *(_OWORD *)v5 = *(_OWORD *)v36;
        *((_QWORD *)v5 + 2) = _mm_unpacklo_ps(v9, v7).m128_u64[0];
      }
      goto LABEL_6;
    }
    v15 = *(float *)v5;
    *((_DWORD *)v5 + 18) = 104;
    *(float *)v5 = v15;
    *((_DWORD *)v5 + 1) = 0;
    *((_DWORD *)v5 + 2) = 0;
    *((float *)v5 + 3) = v15;
    *((_DWORD *)v5 + 4) = 0;
    *((_DWORD *)v5 + 5) = 0;
LABEL_19:
    v10 = 0;
    goto LABEL_7;
  }
  if ( a2 != 2 )
  {
    if ( a2 != 3 )
      goto LABEL_6;
    v12 = CExpressionValueStack::PeekStackValue(this, -2);
    v13 = CExpressionValueStack::PeekStackValue(this, -1);
    v14 = CExpressionValueStack::PeekStackValue(this, 0);
    if ( *((_DWORD *)v12 + 18) != 18 || *((_DWORD *)v13 + 18) != 18 || *((_DWORD *)v14 + 18) != 35 )
      goto LABEL_6;
    v16 = *(float *)v12;
    v17 = (__m128)*(unsigned int *)v14;
    v18 = (__m128)*((unsigned int *)v14 + 1);
    v37[2] = 0.0;
    *(_QWORD *)v37 = *(unsigned int *)v12;
    v37[3] = *(float *)v13;
    *((_DWORD *)v12 + 18) = 104;
    v17.m128_f32[0] = v17.m128_f32[0] - (float)(v16 * v17.m128_f32[0]);
    *(_OWORD *)v12 = *(_OWORD *)v37;
    v18.m128_f32[0] = v18.m128_f32[0] - (float)(v37[3] * v18.m128_f32[0]);
    *((_QWORD *)v12 + 2) = _mm_unpacklo_ps(v17, v18).m128_u64[0];
    goto LABEL_19;
  }
  v19 = CExpressionValueStack::PeekStackValue(this, -1);
  v20 = (float *)CExpressionValueStack::PeekStackValue(this, 0);
  v21 = v20 + 18;
  if ( *((_DWORD *)v19 + 18) == 18 )
  {
    if ( *v21 == 18 )
    {
      v22 = *(float *)v19;
      v23 = 0LL;
      v24 = *v20;
      v25 = 0LL;
      DWORD2(v38) = 0;
      *(_QWORD *)&v38 = *(unsigned int *)v19;
      *((_DWORD *)v19 + 18) = 104;
      *((float *)&v38 + 3) = v24;
      v25.m128_f32[0] = 0.0 - (float)(v22 * 0.0);
      v23.m128_f32[0] = 0.0 - (float)(v24 * 0.0);
      *(_OWORD *)v19 = v38;
      *((_QWORD *)v19 + 2) = _mm_unpacklo_ps(v25, v23).m128_u64[0];
      goto LABEL_19;
    }
    if ( *v21 == 35 )
    {
      v26 = *(float *)v19;
      v27 = *v20;
      v28 = 1.0 - *(float *)v19;
      v29 = v20[1];
      *((_DWORD *)v19 + 18) = 104;
      *(float *)v19 = v26;
      *((_DWORD *)v19 + 1) = 0;
      *((_DWORD *)v19 + 2) = 0;
      *((float *)v19 + 3) = v26;
      *((float *)v19 + 4) = v28 * v27;
      *((float *)v19 + 5) = v28 * v29;
      goto LABEL_19;
    }
  }
  if ( *((_DWORD *)v19 + 18) == 35 && *v21 == 35 )
  {
    v30 = (__m128)*(unsigned int *)v20;
    v2 = 1;
    v31 = *(float *)v19;
    v32 = *v20;
    v33 = (__m128)*((unsigned int *)v20 + 1);
    v34 = *((float *)v19 + 1);
    *(_QWORD *)((char *)&v39 + 4) = 0LL;
    *((_DWORD *)v19 + 18) = 104;
    *(float *)&v39 = v31;
    *((float *)&v39 + 3) = v34;
    v30.m128_f32[0] = v30.m128_f32[0] - (float)(v32 * v31);
    v33.m128_f32[0] = v33.m128_f32[0] - (float)(v33.m128_f32[0] * v34);
    *(_OWORD *)v19 = v39;
    *((_QWORD *)v19 + 2) = _mm_unpacklo_ps(v30, v33).m128_u64[0];
  }
LABEL_6:
  v10 = 0;
  if ( !v2 )
  {
    v35 = 5659;
    goto LABEL_10;
  }
LABEL_7:
  *((_DWORD *)this + 2) = *((_DWORD *)this + 2) - a2 + 1;
  return v10;
}
