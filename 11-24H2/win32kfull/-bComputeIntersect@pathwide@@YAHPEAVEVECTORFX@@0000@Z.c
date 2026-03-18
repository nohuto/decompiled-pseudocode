/*
 * XREFs of ?bComputeIntersect@pathwide@@YAHPEAVEVECTORFX@@0000@Z @ 0x1400E96CC
 * Callers:
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400E8E9C (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 * Callees:
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 */

_BOOL8 __fastcall pathwide::bComputeIntersect(
        pathwide *this,
        struct EVECTORFX *a2,
        struct EVECTORFX *a3,
        struct EVECTORFX *a4,
        struct EVECTORFX *a5)
{
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm5_4
  float v9; // xmm6_4
  __m128i v10; // xmm3
  float v11; // xmm4_4
  __m128i v12; // xmm0
  int v13; // r8d
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v19; // edx
  struct EVECTORFX *v20; // rcx
  int v21; // r9d
  int v22; // [rsp+40h] [rbp+8h]
  int v23; // [rsp+44h] [rbp+Ch] BYREF

  v6 = (float)*(int *)a4;
  v10 = (__m128i)COERCE_UNSIGNED_INT((float)(*((_DWORD *)a3 + 1) - *((_DWORD *)this + 1)));
  v7 = (float)-*((_DWORD *)a4 + 1);
  v8 = (float)*((int *)a2 + 1);
  v9 = (float)*(int *)a2;
  *(float *)v10.m128i_i32 = (float)(*(float *)v10.m128i_i32 * v6)
                          + (float)((float)(*(_DWORD *)a3 - *(_DWORD *)this) * v7);
  v11 = (float)(v8 * v6) + (float)(v9 * v7);
  if ( v11 == 0.0 )
    return 0LL;
  v23 = 0;
  *(float *)v10.m128i_i32 = *(float *)v10.m128i_i32 / v11;
  v12 = v10;
  *(float *)v10.m128i_i32 = *(float *)v10.m128i_i32 * v8;
  *(float *)v12.m128i_i32 = *(float *)v12.m128i_i32 * v9;
  v13 = _mm_cvtsi128_si32(v12);
  v14 = (unsigned __int8)(v13 >> 23);
  if ( v14 > 0x9E )
    return 0LL;
  v15 = v13 & 0x7FFFFF | 0x800000LL;
  v16 = v14 < 0x76 ? v15 >> (118 - (unsigned __int8)v14) : v15 << ((unsigned __int8)v14 - 118);
  v17 = (v16 + 0x80000000LL) >> 32;
  if ( v13 < 0 )
    LODWORD(v17) = -(int)v17;
  v22 = v17;
  if ( !(unsigned int)bFToL(*(double *)v10.m128i_i64, &v23, 6u) )
    return 0LL;
  if ( (unsigned int)(v22 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v23 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v19 = v22 + *(_DWORD *)this;
  v20 = a5;
  v21 = v23 + *((_DWORD *)this + 1);
  *(_DWORD *)a5 = v19;
  *((_DWORD *)v20 + 1) = v21;
  return (unsigned int)(v19 + 0x3FFFFFFF) <= 0x7FFFFFFD && (unsigned int)(v21 + 0x3FFFFFFF) <= 0x7FFFFFFD;
}
