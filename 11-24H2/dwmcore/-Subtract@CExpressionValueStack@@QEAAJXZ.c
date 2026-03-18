/*
 * XREFs of ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x1801D2190
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x180298BB4 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??GD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1802B50AC (--GD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Subtract(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  __int128 *v4; // rsi
  __int128 *v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  float v8; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  __int128 *v12; // rax
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm0_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  __m128 v23; // xmm3
  float v24; // xmm1_4
  float v25; // xmm2_4
  __m128 v26; // xmm3
  __m128 v27; // xmm3
  __m128 v28; // xmm3
  float v29; // xmm2_4
  float v30; // xmm3_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  _BYTE v34[64]; // [rsp+40h] [rbp-68h] BYREF
  CPathData *v35; // [rsp+80h] [rbp-28h] BYREF
  int v36; // [rsp+88h] [rbp-20h]

  v1 = *((_DWORD *)this + 2);
  if ( v1 < 2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x2BBu,
      0LL);
    return 2147500037LL;
  }
  v3 = v1 - 2;
  v4 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 >= *((_DWORD *)this + 10) )
  {
    memset_0(v34, 0, sizeof(v34));
    v35 = 0LL;
    v36 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v34);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v35);
    v5 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v5 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v3);
  }
  v6 = (unsigned int)(*((_DWORD *)this + 2) - 1);
  if ( (unsigned int)v6 >= *((_DWORD *)this + 10) )
  {
    memset_0(v34, 0, sizeof(v34));
    v35 = 0LL;
    v36 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v34);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v35);
  }
  else
  {
    v4 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v6);
  }
  v7 = *((_DWORD *)v5 + 18);
  if ( v7 != *((_DWORD *)v4 + 18) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x2D2u,
      0LL);
    return 2147500037LL;
  }
  if ( v7 != 18 )
  {
    switch ( v7 )
    {
      case 35:
        v10 = *(float *)v5 - *(float *)v4;
        v11 = *((float *)v5 + 1) - *((float *)v4 + 1);
        *((_DWORD *)v5 + 18) = 35;
        *(float *)v5 = v10;
        *((float *)v5 + 1) = v11;
        goto LABEL_9;
      case 52:
        v29 = *((float *)v4 + 1);
        v30 = *((float *)v4 + 2);
        v31 = *(float *)v5 - *(float *)v4;
        *((_DWORD *)v5 + 18) = 52;
        v32 = *((float *)v5 + 1) - v29;
        *(float *)v5 = v31;
        v33 = *((float *)v5 + 2) - v30;
        *((float *)v5 + 1) = v32;
        *((float *)v5 + 2) = v33;
        goto LABEL_9;
      case 69:
        v23 = (__m128)*(unsigned int *)v5;
        v23.m128_f32[0] = v23.m128_f32[0] - *(float *)v4;
        v24 = *((float *)v5 + 2) - *((float *)v4 + 2);
        v25 = *((float *)v5 + 3) - *((float *)v4 + 3);
        v26 = _mm_shuffle_ps(v23, v23, 225);
        v26.m128_f32[0] = *((float *)v5 + 1) - *((float *)v4 + 1);
        *((_DWORD *)v5 + 18) = 69;
        v27 = _mm_shuffle_ps(v26, v26, 198);
        v27.m128_f32[0] = v24;
        v28 = _mm_shuffle_ps(v27, v27, 39);
        v28.m128_f32[0] = v25;
        *v5 = (__int128)_mm_shuffle_ps(v28, v28, 57);
        goto LABEL_9;
      case 104:
        v13 = *((float *)v4 + 2);
        v14 = *((float *)v4 + 3);
        v15 = *((float *)v4 + 4);
        v16 = *(float *)v5 - *(float *)v4;
        v17 = *((float *)v4 + 5);
        v18 = *((float *)v5 + 1) - *((float *)v4 + 1);
        *((_DWORD *)v5 + 18) = 104;
        *(float *)v5 = v16;
        v19 = *((float *)v5 + 2) - v13;
        *((float *)v5 + 1) = v18;
        v20 = *((float *)v5 + 3) - v14;
        *((float *)v5 + 2) = v19;
        v21 = *((float *)v5 + 4) - v15;
        *((float *)v5 + 3) = v20;
        v22 = *((float *)v5 + 5) - v17;
        *((float *)v5 + 4) = v21;
        *((float *)v5 + 5) = v22;
        goto LABEL_9;
      case 265:
        v12 = (__int128 *)D2DMatrix::operator-(v5, v34, v4);
        *((_DWORD *)v5 + 18) = 265;
        *v5 = *v12;
        v5[1] = v12[1];
        v5[2] = v12[2];
        v5[3] = v12[3];
        goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x308u,
      0LL);
    return 2147500037LL;
  }
  v8 = *(float *)v5 - *(float *)v4;
  *((_DWORD *)v5 + 18) = 18;
  *(float *)v5 = v8;
LABEL_9:
  --*((_DWORD *)this + 2);
  return 0LL;
}
