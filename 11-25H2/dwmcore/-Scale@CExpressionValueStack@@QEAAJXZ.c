/*
 * XREFs of ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x1801BB7B8
 * Callers:
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x1801BAF70 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x1802BE6C0 (--DD2DMatrix@@QEBA-AU0@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Scale(CExpressionValueStack *this)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __int128 *v4; // rdi
  __int128 *v5; // rbx
  float *v6; // r13
  __int64 v7; // rax
  float *v8; // r8
  _DWORD *v9; // rcx
  __int128 *v10; // r9
  __int128 *v11; // rdx
  __int128 *v12; // rax
  int v13; // eax
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  unsigned int v18; // ebx
  float v20; // xmm1_4
  float v21; // xmm0_4
  _OWORD *v22; // rax
  __int64 v23; // r9
  int v24; // r10d
  __m128 v25; // xmm1
  float v26; // xmm0_4
  float v27; // xmm5_4
  __m128 v28; // xmm6
  __m128 v29; // xmm2
  __m128 v30; // xmm0
  float v31; // xmm1_4
  unsigned int v32; // [rsp+28h] [rbp-39h]
  _BYTE v33[64]; // [rsp+48h] [rbp-19h] BYREF
  CPathData *v34; // [rsp+88h] [rbp+27h] BYREF
  int v35; // [rsp+90h] [rbp+2Fh]

  v2 = *((_DWORD *)this + 2);
  if ( v2 < 2 )
  {
    v32 = 2387;
    goto LABEL_15;
  }
  v3 = v2 - 2;
  v4 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 >= *((_DWORD *)this + 10) )
  {
    memset_0(v33, 0, sizeof(v33));
    v34 = 0LL;
    v35 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v33);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v34);
    v5 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v5 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v3);
  }
  v6 = (float *)v5;
  v7 = (unsigned int)(*((_DWORD *)this + 2) - 1);
  v8 = (float *)v5;
  if ( (unsigned int)v7 >= *((_DWORD *)this + 10) )
  {
    memset_0(v33, 0, sizeof(v33));
    v34 = 0LL;
    v35 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v33);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v34);
    v8 = (float *)v5;
  }
  else
  {
    v4 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v7);
  }
  v9 = (_DWORD *)v5 + 18;
  v10 = v5;
  v11 = v5;
  if ( *((_DWORD *)v4 + 18) != 18 )
  {
    if ( *v9 != 18 )
    {
      v32 = 2421;
      goto LABEL_15;
    }
    v12 = v5;
    v5 = v4;
    v4 = v12;
  }
  v13 = *((_DWORD *)v5 + 18);
  if ( v13 == 18 )
  {
    v31 = *(float *)v5 * *(float *)v4;
    *v9 = 18;
    *(float *)v10 = v31;
    goto LABEL_12;
  }
  if ( v13 != 52 )
  {
    switch ( v13 )
    {
      case 35:
        v20 = *(float *)v4 * *((float *)v5 + 1);
        v21 = *(float *)v4 * *(float *)v5;
        *v9 = 35;
        *((float *)v10 + 1) = v20;
        *v6 = v21;
        goto LABEL_12;
      case 69:
        v29 = (__m128)*(unsigned int *)v4;
        v30 = (__m128)*v5;
        *((_DWORD *)v10 + 18) = 69;
        *v10 = (__int128)_mm_mul_ps(v30, _mm_shuffle_ps(v29, v29, 0));
        goto LABEL_12;
      case 104:
        v25 = *(__m128 *)((char *)v5 + 4);
        v26 = *(float *)v5;
        v27 = *((float *)v5 + 5);
        v28 = _mm_shuffle_ps((__m128)*(unsigned int *)v4, (__m128)*(unsigned int *)v4, 0);
        *((_DWORD *)v10 + 18) = 104;
        *v8 = v26 * v28.m128_f32[0];
        *(__int128 *)((char *)v11 + 4) = (__int128)_mm_mul_ps(v25, v28);
        *((float *)v11 + 5) = v27 * v28.m128_f32[0];
        goto LABEL_12;
      case 265:
        v22 = (_OWORD *)D2DMatrix::operator*(v5, v33, v8, v10);
        *(_DWORD *)(v23 + 72) = v24;
        *(_OWORD *)v23 = *v22;
        *(_OWORD *)(v23 + 16) = v22[1];
        *(_OWORD *)(v23 + 32) = v22[2];
        *(_OWORD *)(v23 + 48) = v22[3];
        goto LABEL_12;
    }
    v32 = 2484;
LABEL_15:
    v18 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v32,
      0LL);
    return v18;
  }
  v14 = *(float *)v4;
  v15 = *(float *)v5;
  v16 = *((float *)v5 + 1);
  v17 = *((float *)v5 + 2);
  *v9 = 52;
  *v8 = v15 * v14;
  *((float *)v11 + 1) = v16 * v14;
  *((float *)v11 + 2) = v14 * v17;
LABEL_12:
  --*((_DWORD *)this + 2);
  return 0;
}
