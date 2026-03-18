/*
 * XREFs of ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1400E8308
 * Callers:
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1400ECD90 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 * Callees:
 *     ?ptlXform@EBOX@@QEAA?AU_POINTL@@AEAVEPOINTFL@@@Z @ 0x1400E8CC4 (-ptlXform@EBOX@@QEAA-AU_POINTL@@AEAVEPOINTFL@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bPartialQuadrantArc(int a1, __int64 a2, EBOX *a3, float *a4, float *a5, float *a6, unsigned int *a7)
{
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v12; // xmm4_4
  float v14; // xmm6_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  int v18; // ebx
  char v19; // al
  _QWORD *v20; // rax
  __m128i v22; // xmm1
  float v23; // xmm6_4
  float v24; // xmm7_4
  float v25; // xmm0_4
  __m128 v26; // xmm2
  float v27; // xmm4_4
  float v28; // xmm5_4
  float v29; // xmm4_4
  float v30; // xmm3_4
  __m128 v31; // xmm1
  _BYTE v32[4]; // [rsp+28h] [rbp-81h] BYREF
  float v33; // [rsp+2Ch] [rbp-7Dh]
  __int64 v34; // [rsp+30h] [rbp-79h]
  __int64 v35; // [rsp+38h] [rbp-71h]
  float v36; // [rsp+40h] [rbp-69h]
  float v37; // [rsp+44h] [rbp-65h]
  unsigned __int64 v38; // [rsp+48h] [rbp-61h]
  _BYTE *v39; // [rsp+50h] [rbp-59h] BYREF
  __int64 v40; // [rsp+58h] [rbp-51h]
  __int64 v41; // [rsp+60h] [rbp-49h]
  __int16 v42; // [rsp+68h] [rbp-41h]
  _QWORD v43[3]; // [rsp+70h] [rbp-39h] BYREF

  v7 = *a4;
  v8 = a4[1];
  v12 = *a6;
  v14 = a6[1];
  v15 = (float)(*a4 * v14) - (float)(v8 * *a6);
  v16 = v15;
  if ( v15 < 0.0 )
    LODWORD(v16) = LODWORD(v15) ^ _xmm;
  if ( FP_EPSILON < v16 )
  {
    v22 = (__m128i)*a7;
    v33 = *a4;
    v23 = (float)(v14 - v8) / v16;
    *(float *)v22.m128i_i32 = (float)(*(float *)v22.m128i_i32 - *a5) * 0.5;
    v24 = (float)(v7 - v12) / v16;
    v25 = COERCE_FLOAT(efCos((unsigned int)_mm_cvtsi128_si32(v22)));
    if ( v25 < 0.0 )
      LODWORD(v25) ^= _xmm;
    v26 = (__m128)*((unsigned int *)a6 + 1);
    v27 = (float)(FP_4DIV3 * v25) / (float)(v25 + FP_1_0);
    v34 = *(_QWORD *)a4;
    v28 = FP_1_0 - v27;
    v29 = v27 * v24;
    v30 = (float)((float)(FP_4DIV3 * v25) / (float)(v25 + FP_1_0)) * v23;
    *((float *)&v35 + 1) = (float)(v28 * *((float *)&v34 + 1)) + v29;
    *(float *)&v35 = (float)(v28 * *(float *)&v34) + v30;
    v31 = (__m128)*(unsigned int *)a6;
    v38 = _mm_unpacklo_ps(v31, v26).m128_u64[0];
    v37 = (float)(v28 * v26.m128_f32[0]) + v29;
    v36 = (float)(v28 * v31.m128_f32[0]) + v30;
  }
  else
  {
    v34 = *(_QWORD *)a4;
    v35 = v34;
    v17 = a6[1];
    v36 = *a6;
    v37 = v17;
    v38 = __PAIR64__(LODWORD(v17), LODWORD(v36));
  }
  if ( !a1 )
    goto LABEL_10;
  EBOX::ptlXform(a3, (struct EPOINTFL *)v32);
  v18 = a1 - 1;
  if ( v18 )
  {
    if ( v18 != 1 )
    {
LABEL_10:
      v43[0] = **(_QWORD **)&EBOX::ptlXform(a3, (struct EPOINTFL *)v32);
      v43[1] = **(_QWORD **)&EBOX::ptlXform(a3, (struct EPOINTFL *)v32);
      v20 = (_QWORD *)EBOX::ptlXform(a3, (struct EPOINTFL *)v32);
      v41 = 0LL;
      v43[2] = *v20;
      v42 = 0;
      v39 = v43;
      v40 = 3LL;
      return (unsigned __int8)EPATHOBJ::bPolyBezierTo(a2, 0LL, &v39, 3LL);
    }
    v40 = 1LL;
    v42 = 0;
    v39 = v32;
    v41 = 0LL;
    v19 = EPATHOBJ::bPolyLineTo(a2, 0LL, &v39, 1LL);
  }
  else
  {
    v40 = 1LL;
    v42 = 0;
    v39 = v32;
    v41 = 0LL;
    v19 = EPATHOBJ::bMoveTo(a2, 0LL, &v39);
  }
  if ( v19 )
    goto LABEL_10;
  return 0LL;
}
