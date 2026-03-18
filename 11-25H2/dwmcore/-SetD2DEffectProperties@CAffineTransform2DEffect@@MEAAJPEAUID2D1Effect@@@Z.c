/*
 * XREFs of ?SetD2DEffectProperties@CAffineTransform2DEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x1802B3240
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x18019BD20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1801EC220 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAffineTransform2DEffect::SetD2DEffectProperties(
        CAffineTransform2DEffect *this,
        struct ID2D1Effect *a2)
{
  float v2; // xmm2_4
  const struct D2D1::Matrix3x2F *v3; // rbx
  float v4; // xmm3_4
  __int128 v6; // xmm0
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  __int128 v11; // xmm0
  float v12; // xmm3_4
  __int64 (__fastcall *v13)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int); // rax
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int128 v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int128 v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+58h] [rbp-28h]
  D2D1_MATRIX_3X2_F v24; // [rsp+60h] [rbp-20h] BYREF

  v2 = *((float *)this + 54);
  v3 = (CAffineTransform2DEffect *)((char *)this + 220);
  v4 = *((float *)this + 53);
  v6 = *(_OWORD *)((char *)this + 184);
  v23 = *((_QWORD *)this + 25);
  v8 = v2 * *((float *)this + 48);
  v22 = v6;
  v9 = (float)((float)(v8 + (float)(v4 * *((float *)this + 46))) + *((float *)this + 50)) - v4;
  v10 = (float)(v4 * *((float *)this + 47)) + (float)(v2 * *((float *)this + 49));
  v11 = *(_OWORD *)((char *)this + 220);
  *(float *)&v23 = v9;
  v12 = v10 + *((float *)this + 51);
  *(_QWORD *)&v24.m[2][0] = *(_QWORD *)((char *)this + 236);
  *(_OWORD *)&v24.m11 = v11;
  *((float *)&v23 + 1) = v12 - v2;
  D2D1::Matrix3x2F::Invert(&v24);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v20,
    (const struct D2D1::Matrix3x2F *)&v24,
    (const struct D2D1::Matrix3x2F *)&v22);
  v22 = v20;
  v23 = v21;
  D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v20, (const struct D2D1::Matrix3x2F *)&v22, v3);
  v13 = *(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL);
  v22 = v20;
  v23 = v21;
  v14 = v13(a2, 0LL, 0LL, (char *)this + 176, 4);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x92u, 0LL);
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
            a2,
            1LL,
            0LL,
            (char *)this + 180,
            4);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x93u, 0LL);
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)a2 + 72LL))(
              a2,
              2LL,
              0LL,
              &v22,
              24);
      v15 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x94u, 0LL);
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                a2,
                3LL,
                0LL,
                (char *)this + 208,
                4);
        v15 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x95u, 0LL);
      }
    }
  }
  return v15;
}
