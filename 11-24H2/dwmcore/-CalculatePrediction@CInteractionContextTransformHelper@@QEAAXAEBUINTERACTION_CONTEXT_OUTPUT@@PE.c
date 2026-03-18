/*
 * XREFs of ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x180126044
 * Callers:
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x1801259D4 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 * Callees:
 *     ?TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z @ 0x180126A84 (-TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180126E00 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CInteractionContextTransformHelper::CalculatePrediction(
        CInteractionContextTransformHelper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2,
        const struct MANIPULATION_TRANSFORM *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        float a6,
        float a7,
        float *a8,
        float *a9)
{
  CInteractionContextTransformHelper *v9; // r10
  float *v10; // rcx
  float v11; // xmm1_4
  const struct MANIPULATION_TRANSFORM *v12; // rax
  __m128 v13; // xmm9
  int v14; // r8d
  float v15; // xmm2_4
  float v16; // xmm14_4
  __int128 v17; // xmm0
  float v18; // xmm12_4
  unsigned int v19; // xmm4_4
  __int64 v20; // xmm1_8
  float v21; // xmm14_4
  float v22; // xmm13_4
  float v23; // xmm15_4
  float v24; // xmm3_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm7_4
  char v28; // r11
  float v29; // xmm4_4
  __int128 v30; // xmm0
  __int64 v31; // r10
  __int128 v32; // xmm0
  __int64 v33; // r10
  __int128 v34; // xmm0
  float v35; // xmm5_4
  float v36; // xmm8_4
  float v37; // xmm3_4
  __int64 v38; // xmm1_8
  __int128 v39; // xmm0
  float v40; // xmm1_4
  float v41; // [rsp+38h] [rbp-B1h] BYREF
  float v42; // [rsp+3Ch] [rbp-ADh] BYREF
  float v43; // [rsp+40h] [rbp-A9h] BYREF
  float v44; // [rsp+44h] [rbp-A5h] BYREF
  _QWORD v45[3]; // [rsp+48h] [rbp-A1h] BYREF
  _QWORD v46[3]; // [rsp+60h] [rbp-89h] BYREF
  __int64 v47; // [rsp+78h] [rbp-71h]

  v9 = this;
  if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
  {
    v10 = (float *)((char *)this + 176);
    *v10 = 0.0;
    v10[1] = 0.0;
    v10[2] = 1.0;
    v10[3] = 0.0;
    v10[4] = 0.0;
    *((_BYTE *)v9 + 196) = 0;
    *((_BYTE *)v9 + 197) = a5 == 1;
  }
  else
  {
    *((_BYTE *)this + 197) &= a5 == 1;
    v10 = (float *)((char *)this + 176);
  }
  v11 = v10[1];
  v12 = (const struct MANIPULATION_TRANSFORM *)v10;
  if ( a3 )
    v12 = a3;
  v13 = *(__m128 *)v12;
  v14 = *((_DWORD *)v12 + 4);
  v15 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
  *a8 = (float)(COERCE_FLOAT(*(_OWORD *)v12) - *v10) + a6;
  *a9 = (float)(v15 - v11) + a7;
  if ( *(_DWORD *)a2 == 1 && *((_DWORD *)a2 + 2) == 2 && a4 )
  {
    v16 = *((float *)a2 + 10);
    v17 = *(_OWORD *)v9;
    v18 = *v10;
    *(float *)&v19 = v16 + v13.m128_f32[0];
    v20 = *((_QWORD *)v9 + 2);
    v21 = v16 - *((float *)a2 + 5);
    v22 = *((float *)v9 + 45);
    v23 = *((float *)a2 + 11) - *((float *)a2 + 6);
    v24 = *((float *)a2 + 11) + v15;
    v25 = (float)(a4->right - a4->left) - 1.0;
    v26 = (float)(a4->bottom - a4->top);
    v41 = v21;
    v27 = v26 - 1.0;
    v42 = v23;
    v43 = v18;
    v44 = v22;
    v45[0] = __PAIR64__(LODWORD(v24), v19);
    *(_OWORD *)&v46[1] = v17;
    v47 = v20;
    if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v46[1]) )
    {
      v30 = *((_OWORD *)v9 + 3);
      v46[0] = *((_QWORD *)v9 + 8);
      *(_OWORD *)&v45[1] = v30;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v45[1],
        v29,
        v24,
        (float *)v45,
        (float *)v45 + 1);
      v32 = *(_OWORD *)(v31 + 48);
      v46[0] = *(_QWORD *)(v31 + 64);
      *(_OWORD *)&v45[1] = v32;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v45[1],
        v21,
        v23,
        &v41,
        &v42);
      v34 = *(_OWORD *)(v33 + 48);
      v46[0] = *(_QWORD *)(v33 + 64);
      *(_OWORD *)&v45[1] = v34;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v45[1],
        v18,
        v22,
        &v43,
        &v44);
      v29 = *(float *)v45;
      v24 = *((float *)v45 + 1);
      v21 = v41;
      v23 = v42;
      v18 = v43;
      v22 = v44;
    }
    if ( !*((_BYTE *)v9 + 197)
      || COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v29) & _xmm) <= v25
      && COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v24) & _xmm) <= v27 )
    {
      v28 = 0;
    }
    if ( v28 )
    {
      if ( *((_BYTE *)v9 + 196) )
      {
        *a8 = 0.0;
        *a9 = 0.0;
      }
      else
      {
        v35 = v29;
        v36 = v24;
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v29) & _xmm) > v25 )
        {
          v29 = v25;
          if ( v35 < 0.0 )
            LODWORD(v29) = LODWORD(v25) ^ _xmm;
          v24 = (float)(v24 * v29) / v35;
        }
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v24) & _xmm) > v27 )
        {
          v24 = v27;
          if ( v36 < 0.0 )
            LODWORD(v24) = LODWORD(v27) ^ _xmm;
          v29 = (float)(v35 * v24) / v36;
        }
        v37 = v24 - (float)(v22 + v23);
        *a8 = v29 - (float)(v18 + v21);
        *a9 = v37;
        v38 = *((_QWORD *)v9 + 2);
        *(_OWORD *)&v45[1] = *(_OWORD *)v9;
        v46[0] = v38;
        if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v45[1]) )
        {
          v39 = *(_OWORD *)((char *)v9 + 72);
          v40 = *a8;
          v47 = *((_QWORD *)v9 + 11);
          *(_OWORD *)&v46[1] = v39;
          CInteractionContextTransformHelper::TransformDirection(
            (const struct D2D1::Matrix3x2F *)&v46[1],
            v40,
            v37,
            a8,
            a9);
        }
      }
    }
    *((_BYTE *)v9 + 196) = v28;
  }
  *((__m128 *)v9 + 11) = v13;
  *((_DWORD *)v9 + 48) = v14;
}
