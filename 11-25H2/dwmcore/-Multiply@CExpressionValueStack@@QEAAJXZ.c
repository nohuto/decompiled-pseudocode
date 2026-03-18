/*
 * XREFs of ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x1801BAF70
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1801BB380 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x1801BB7B8 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1802BEC6C (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Multiply(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  __int128 *v4; // rdi
  __int128 *v5; // rsi
  __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm9_4
  float v15; // xmm10_4
  float v16; // xmm11_4
  float v17; // xmm12_4
  float v18; // xmm13_4
  float v19; // xmm14_4
  __int64 result; // rax
  float v21; // xmm0_4
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  unsigned int v25; // ebx
  float v26; // xmm1_4
  float v27; // xmm0_4
  __int128 v28; // xmm0
  __m128 v29; // xmm4
  __m128 v30; // xmm3
  __m128 v31; // xmm5
  __m128 v32; // xmm5
  __m128 v33; // xmm5
  __m128 v34; // xmm5
  void *v35; // xmm1_8
  float v36; // eax
  float v37; // xmm0_4
  void *v38[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+48h] [rbp-C0h]
  _OWORD v40[4]; // [rsp+58h] [rbp-B0h] BYREF
  CPathData *v41; // [rsp+98h] [rbp-70h] BYREF
  int v42; // [rsp+A0h] [rbp-68h]

  v1 = *((_DWORD *)this + 2);
  if ( v1 < 2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x329u,
      0LL);
    return 2147500037LL;
  }
  v3 = v1 - 2;
  v4 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 >= *((_DWORD *)this + 10) )
  {
    memset_0(v40, 0, sizeof(v40));
    v41 = 0LL;
    v42 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v40);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v41);
    v5 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v5 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v3);
  }
  v6 = (unsigned int)(*((_DWORD *)this + 2) - 1);
  if ( (unsigned int)v6 >= *((_DWORD *)this + 10) )
  {
    memset_0(v40, 0, sizeof(v40));
    v41 = 0LL;
    v42 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v40);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v41);
  }
  else
  {
    v4 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v6);
  }
  v7 = *((_DWORD *)v5 + 18);
  v8 = *((_DWORD *)v4 + 18);
  if ( v7 == v8 )
  {
    switch ( v7 )
    {
      case 104:
        v9 = *(float *)v5;
        v10 = *((float *)v5 + 2);
        v11 = *((float *)v5 + 3);
        v12 = *((float *)v4 + 4);
        v13 = *(float *)v4;
        v14 = *((float *)v4 + 5);
        v15 = *((float *)v4 + 2);
        v16 = *((float *)v5 + 5);
        v17 = *((float *)v5 + 4);
        v18 = *((float *)v4 + 1);
        v19 = *((float *)v4 + 3);
        *((_DWORD *)v5 + 18) = 104;
        *(float *)v5 = (float)(v13 * v9) + (float)(v15 * *((float *)v5 + 1));
        *((float *)v5 + 1) = (float)(v18 * v9) + (float)(v19 * *((float *)v5 + 1));
        *((float *)v5 + 2) = (float)(v10 * v13) + (float)(v11 * v15);
        *((float *)v5 + 3) = (float)(v10 * v18) + (float)(v11 * v19);
        *((float *)v5 + 4) = (float)((float)(v17 * v13) + (float)(v16 * v15)) + v12;
        *((float *)v5 + 5) = (float)((float)(v17 * v18) + (float)(v16 * v19)) + v14;
LABEL_9:
        --*((_DWORD *)this + 2);
        return 0LL;
      case 18:
        v21 = *(float *)v4 * *(float *)v5;
        *((_DWORD *)v5 + 18) = 18;
        *(float *)v5 = v21;
        goto LABEL_9;
      case 265:
        D2DMatrixMultiply((struct D2DMatrix *)v40, (const struct D2DMatrix *)v5, (const struct D2DMatrix *)v4);
        v22 = v40[1];
        v23 = v40[2];
        *v5 = v40[0];
        *((_DWORD *)v5 + 18) = 265;
        v5[1] = v22;
        v24 = v40[3];
        v5[2] = v23;
        v5[3] = v24;
        goto LABEL_9;
      case 35:
        v26 = *(float *)v5 * *(float *)v4;
        v27 = *((float *)v5 + 1) * *((float *)v4 + 1);
        *((_DWORD *)v5 + 18) = 35;
        *(float *)v5 = v26;
        *((float *)v5 + 1) = v27;
        goto LABEL_9;
      case 52:
        v35 = *(void **)v5;
        v36 = *((float *)v4 + 2);
        v39 = *(_QWORD *)v4;
        v38[0] = v35;
        v37 = *(float *)&v39 * *(float *)&v35;
        *((_DWORD *)v5 + 18) = 52;
        *(float *)v5 = v37;
        *((float *)v5 + 1) = *((float *)&v39 + 1) * *((float *)v38 + 1);
        *((float *)v5 + 2) = v36 * *((float *)v5 + 2);
        goto LABEL_9;
      case 69:
        v29 = (__m128)*v4;
        *((_DWORD *)v5 + 18) = 69;
        v30 = (__m128)*v5;
        v31 = v29;
        v31.m128_f32[0] = v29.m128_f32[0] * COERCE_FLOAT(*v5);
        v32 = _mm_shuffle_ps(v31, v31, 225);
        v32.m128_f32[0] = _mm_shuffle_ps(v29, v29, 85).m128_f32[0] * _mm_shuffle_ps(v30, v30, 85).m128_f32[0];
        v33 = _mm_shuffle_ps(v32, v32, 198);
        v33.m128_f32[0] = _mm_shuffle_ps(v29, v29, 170).m128_f32[0]
                        * _mm_shuffle_ps(*(__m128 *)v5, *(__m128 *)v5, 170).m128_f32[0];
        v34 = _mm_shuffle_ps(v33, v33, 39);
        v34.m128_f32[0] = _mm_shuffle_ps(v29, v29, 255).m128_f32[0] * _mm_shuffle_ps(v30, v30, 255).m128_f32[0];
        *v5 = (__int128)_mm_shuffle_ps(v34, v34, 57);
        goto LABEL_9;
      case 71:
        D3DXQuaternionMultiply(
          (struct D2DQuaternion *)v38,
          (const struct D2DQuaternion *)v4,
          (const struct D2DQuaternion *)v5);
        v28 = *(_OWORD *)v38;
        *((_DWORD *)v5 + 18) = 71;
        *v5 = v28;
        goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x392u,
      0LL);
    return 2147500037LL;
  }
  if ( v7 != 18 && v8 != 18 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x3ABu,
      0LL);
    return 2147500037LL;
  }
  result = CExpressionValueStack::Scale(this);
  v25 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      result,
      0x3A1u,
      0LL);
    return v25;
  }
  return result;
}
