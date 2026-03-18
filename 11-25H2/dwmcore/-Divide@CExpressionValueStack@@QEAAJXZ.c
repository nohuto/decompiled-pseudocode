/*
 * XREFs of ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x1801DC5C0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1802BEBA8 (-D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1802BEC6C (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Divide(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  __int128 *v4; // rsi
  __int128 *v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // r14d
  float v9; // xmm0_4
  __m128 v11; // xmm1
  bool v12; // zf
  __int128 v13; // xmm0
  __m128 v14; // xmm0
  __m128 v15; // xmm6
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  __m128 v19; // xmm2
  __m128 v20; // xmm2
  __m128 v21; // xmm2
  __m128 v22; // xmm2
  unsigned __int64 v23; // xmm1_8
  float v24; // eax
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm4_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  unsigned int v32; // [rsp+28h] [rbp-49h]
  __m128 v33; // [rsp+38h] [rbp-39h] BYREF
  __int128 v34; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v35[16]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v36[64]; // [rsp+68h] [rbp-9h] BYREF
  CPathData *v37; // [rsp+A8h] [rbp+37h] BYREF
  __int128 v38; // [rsp+B0h] [rbp+3Fh]

  v1 = *((_DWORD *)this + 2);
  if ( v1 < 2 )
  {
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x3C8u,
      0LL);
    return v8;
  }
  v3 = v1 - 2;
  v4 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 >= *((_DWORD *)this + 10) )
  {
    memset_0(v36, 0, sizeof(v36));
    v37 = 0LL;
    LODWORD(v38) = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v36);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v37);
    v5 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v5 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v3);
  }
  v6 = (unsigned int)(*((_DWORD *)this + 2) - 1);
  if ( (unsigned int)v6 >= *((_DWORD *)this + 10) )
  {
    memset_0(v36, 0, sizeof(v36));
    v37 = 0LL;
    LODWORD(v38) = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v36);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v37);
  }
  else
  {
    v4 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v6);
  }
  v7 = *((_DWORD *)v5 + 18);
  v8 = 0;
  if ( v7 != *((_DWORD *)v4 + 18) )
  {
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x3DFu,
      0LL);
    return v8;
  }
  if ( v7 != 18 )
  {
    switch ( v7 )
    {
      case '#':
        v28 = *(float *)v4;
        v29 = *(float *)v5;
        v30 = *((float *)v5 + 1);
        v31 = *((float *)v4 + 1);
        if ( *(float *)v4 != 0.0 && v31 != 0.0 )
        {
          *((_DWORD *)v5 + 18) = 35;
          v9 = v29 / v28;
          *((float *)v5 + 1) = v30 / v31;
          goto LABEL_10;
        }
        v32 = 1023;
        break;
      case '4':
        v23 = *(_QWORD *)v4;
        v24 = *((float *)v5 + 2);
        *(_QWORD *)&v34 = *(_QWORD *)v5;
        v33.m128_u64[0] = v23;
        if ( *(float *)&v23 != 0.0 )
        {
          v25 = v33.m128_f32[1];
          if ( v33.m128_f32[1] != 0.0 )
          {
            v26 = *((float *)v4 + 2);
            if ( v26 != 0.0 )
            {
              v27 = *(float *)&v34 / *(float *)&v23;
              *((_DWORD *)v5 + 18) = 52;
              *(float *)v5 = v27;
              *((float *)v5 + 1) = *((float *)&v34 + 1) / v25;
              *((float *)v5 + 2) = v24 / v26;
              goto LABEL_11;
            }
          }
        }
        v32 = 1044;
        break;
      case 'E':
        v14 = (__m128)*v4;
        v15 = (__m128)*v5;
        if ( COERCE_FLOAT(*v4) != 0.0 )
        {
          v16 = _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
          if ( v16 != 0.0 )
          {
            v17 = _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
            if ( v17 != 0.0 )
            {
              v18 = _mm_shuffle_ps(v14, v14, 255).m128_f32[0];
              if ( v18 != 0.0 )
              {
                v19 = (__m128)*v5;
                *((_DWORD *)v5 + 18) = 69;
                v19.m128_f32[0] = v15.m128_f32[0] / v14.m128_f32[0];
                v20 = _mm_shuffle_ps(v19, v19, 225);
                v20.m128_f32[0] = _mm_shuffle_ps(v15, v15, 85).m128_f32[0] / v16;
                v21 = _mm_shuffle_ps(v20, v20, 198);
                v21.m128_f32[0] = _mm_shuffle_ps(v15, v15, 170).m128_f32[0] / v17;
                v22 = _mm_shuffle_ps(v21, v21, 39);
                v22.m128_f32[0] = _mm_shuffle_ps(v15, v15, 255).m128_f32[0] / v18;
                *v5 = (__int128)_mm_shuffle_ps(v22, v22, 57);
                goto LABEL_11;
              }
            }
          }
        }
        v32 = 1067;
        break;
      case 'G':
        v11 = (__m128)*v4;
        v12 = COERCE_FLOAT(*v4) == 0.0;
        v34 = *v5;
        v33 = v11;
        if ( !v12
          && _mm_shuffle_ps(v11, v11, 85).m128_f32[0] != 0.0
          && _mm_shuffle_ps(v11, v11, 170).m128_f32[0] != 0.0
          && _mm_shuffle_ps(v11, v11, 255).m128_f32[0] != 0.0 )
        {
          D3DXQuaternionInverse((struct D2DQuaternion *)v35, (const struct D2DQuaternion *)&v33);
          D3DXQuaternionMultiply(
            (struct D2DQuaternion *)&v33,
            (const struct D2DQuaternion *)v35,
            (const struct D2DQuaternion *)&v34);
          v13 = (__int128)v33;
          *((_DWORD *)v5 + 18) = 71;
          *v5 = v13;
          goto LABEL_11;
        }
        v32 = 1091;
        break;
      default:
        v32 = 1119;
        break;
    }
LABEL_15:
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v32,
      0LL);
    return v8;
  }
  if ( *(float *)v4 == 0.0 )
  {
    v32 = 1004;
    goto LABEL_15;
  }
  v9 = *(float *)v5 / *(float *)v4;
  *((_DWORD *)v5 + 18) = 18;
LABEL_10:
  *(float *)v5 = v9;
LABEL_11:
  --*((_DWORD *)this + 2);
  return v8;
}
