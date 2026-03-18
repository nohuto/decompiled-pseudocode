/*
 * XREFs of ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x180209D14
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@AEBVCMILMatrix@@I@Z @ 0x1802B7050 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@A.c)
 * Callees:
 *     IsEqualMatrix @ 0x180209FF8 (IsEqualMatrix.c)
 *     GetIndividualScales @ 0x18020A054 (GetIndividualScales.c)
 *     GetInverse @ 0x18020A128 (GetInverse.c)
 */

__int64 __fastcall CInteractionContextTransformHelper::UpdateTransform(
        CInteractionContextTransformHelper *this,
        const struct D2D1::Matrix3x2F *a2,
        bool *a3)
{
  int Inverse; // r8d
  __int64 v6; // xmm1_8
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  float v9; // xmm6_4
  float v10; // xmm11_4
  float v11; // xmm12_4
  __int128 v12; // xmm7
  __m128 v13; // xmm9
  __m128 v14; // xmm8
  float v15; // xmm5_4
  __m128 v16; // xmm13
  unsigned __int64 v17; // xmm7_8
  __m128 v18; // xmm6
  __int128 v19; // xmm5
  __int128 v20; // xmm0
  __int64 v21; // xmm1_8
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int64 v24; // xmm1_8
  __int128 v25; // xmm1
  float v27; // [rsp+28h] [rbp-E0h] BYREF
  float v28; // [rsp+2Ch] [rbp-DCh] BYREF
  int v29; // [rsp+38h] [rbp-D0h] BYREF
  float v30; // [rsp+3Ch] [rbp-CCh]
  float v31; // [rsp+40h] [rbp-C8h]
  float v32; // [rsp+44h] [rbp-C4h]
  unsigned __int64 v33; // [rsp+48h] [rbp-C0h]
  __int128 v34; // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+68h] [rbp-A0h]
  __int128 v36; // [rsp+78h] [rbp-90h] BYREF
  __int64 v37; // [rsp+88h] [rbp-80h]
  __int128 v38; // [rsp+98h] [rbp-70h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-60h]
  __int128 v40; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-48h]
  __int128 v42; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-30h]

  if ( !(unsigned __int8)IsEqualMatrix(a2, this, 0LL) )
  {
    v6 = *((_QWORD *)a2 + 2);
    v36 = *(_OWORD *)a2;
    v37 = v6;
    Inverse = GetInverse(&v36, &v38);
    if ( Inverse >= 0 )
    {
      v7 = *(_OWORD *)a2;
      v28 = 1.0;
      v8 = *((_QWORD *)a2 + 2);
      v36 = v7;
      v27 = 1.0;
      v37 = v8;
      Inverse = GetIndividualScales(&v36, &v28, &v27);
      if ( Inverse >= 0 )
      {
        v12 = *(_OWORD *)a2;
        v9 = 1.0 / v28;
        v35 = *((_QWORD *)a2 + 2);
        v14 = (__m128)(unsigned int)v35;
        v13 = (__m128)HIDWORD(v35);
        v10 = *((float *)&v12 + 1) * (float)(1.0 / v27);
        v11 = *((float *)&v12 + 3) * (float)(1.0 / v27);
        *(float *)&v12 = *(float *)&v12 * (float)(1.0 / v28);
        v13.m128_f32[0] = *((float *)&v35 + 1) * (float)(1.0 / v27);
        v14.m128_f32[0] = *(float *)&v35 * (float)(1.0 / v28);
        *((float *)&v34 + 1) = v10;
        *((float *)&v34 + 3) = v11;
        v30 = v10;
        v32 = v11;
        *((float *)&v33 + 1) = v13.m128_f32[0];
        LODWORD(v34) = v12;
        *((float *)&v34 + 2) = *((float *)&v12 + 2) * (float)(1.0 / v28);
        v29 = v12;
        v31 = *((float *)&v34 + 2);
        *(float *)&v33 = v14.m128_f32[0];
        Inverse = GetInverse(&v29, &v40);
        if ( Inverse >= 0 )
        {
          DWORD2(v36) = 0;
          v29 = v12;
          *(_QWORD *)&v36 = LODWORD(v9);
          v16 = 0LL;
          v30 = v10;
          v16.m128_f32[0] = 0.0 - (float)(v9 * 0.0);
          v31 = *((float *)&v12 + 2) * v9;
          v18 = 0LL;
          v32 = v11;
          *((float *)&v36 + 3) = v15;
          v17 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          v33 = v17;
          v18.m128_f32[0] = 0.0 - (float)(v15 * 0.0);
          Inverse = GetInverse(&v29, &v42);
          if ( Inverse >= 0 )
          {
            *(_OWORD *)this = *(_OWORD *)a2;
            v20 = v38;
            *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
            v21 = v39;
            *(_OWORD *)((char *)this + 24) = v20;
            v22 = v34;
            *((_QWORD *)this + 5) = v21;
            *((_OWORD *)this + 3) = v22;
            *(_OWORD *)((char *)this + 72) = v40;
            v23 = v36;
            *((_QWORD *)this + 8) = _mm_unpacklo_ps(v14, v13).m128_u64[0];
            v24 = v41;
            *((_OWORD *)this + 6) = v23;
            *(_QWORD *)&v23 = v43;
            *((_QWORD *)this + 11) = v24;
            v25 = v42;
            *(_OWORD *)((char *)this + 120) = v19;
            *((_OWORD *)this + 9) = v25;
            *((_QWORD *)this + 20) = v23;
            *((_QWORD *)this + 14) = _mm_unpacklo_ps(v16, v18).m128_u64[0];
            *((_QWORD *)this + 17) = v17;
          }
        }
      }
    }
  }
  return (unsigned int)Inverse;
}
