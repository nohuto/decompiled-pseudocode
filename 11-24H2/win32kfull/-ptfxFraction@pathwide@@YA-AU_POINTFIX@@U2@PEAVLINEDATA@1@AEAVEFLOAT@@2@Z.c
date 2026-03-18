/*
 * XREFs of ?ptfxFraction@pathwide@@YA?AU_POINTFIX@@U2@PEAVLINEDATA@1@AEAVEFLOAT@@2@Z @ 0x1400EAD28
 * Callers:
 *     ?vNextStyleEvent@STYLER@pathwide@@QEAAXXZ @ 0x1400EA778 (-vNextStyleEvent@STYLER@pathwide@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct _POINTFIX __fastcall pathwide::ptfxFraction(
        pathwide *this,
        struct _POINTFIX a2,
        struct pathwide::LINEDATA *a3,
        struct EFLOAT *a4)
{
  struct _POINTFIX result; // rax
  int v6; // r8d
  float v7; // xmm0_4
  __m128i v8; // xmm1
  int v9; // r11d
  int v10; // r10d
  __m128i v11; // xmm2
  int v12; // ebx
  unsigned int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // ebx
  unsigned int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  float v21; // xmm3_4
  float v22; // xmm4_4
  float v23; // xmm2_4
  __int64 v24; // [rsp+20h] [rbp+20h]

  result = (struct _POINTFIX)this;
  if ( *(float *)a4 != 0.0 )
  {
    v6 = *(_DWORD *)a2.x;
    if ( (*(_DWORD *)a2.x & 0x10) == 0 )
    {
      v21 = (float)*(int *)(*(_QWORD *)&a2 + 40LL);
      v22 = (float)*(int *)(*(_QWORD *)&a2 + 44LL);
      *(float *)(*(_QWORD *)&a2 + 80LL) = v21;
      *(float *)(*(_QWORD *)&a2 + 84LL) = v22;
      v23 = FP_1_0 / *(float *)a4;
      *(float *)(*(_QWORD *)&a2 + 80LL) = v23 * v21;
      *(float *)(*(_QWORD *)&a2 + 84LL) = v23 * v22;
      *(_DWORD *)a2.x = v6 | 0x10;
    }
    v7 = *(float *)a3;
    v8 = (__m128i)*(unsigned int *)(*(_QWORD *)&a2 + 80LL);
    v9 = 0;
    v11 = (__m128i)*(unsigned int *)(*(_QWORD *)&a2 + 84LL);
    v10 = 0;
    *(float *)v8.m128i_i32 = *(float *)v8.m128i_i32 * v7;
    *(float *)v11.m128i_i32 = *(float *)v11.m128i_i32 * v7;
    v12 = _mm_cvtsi128_si32(v8);
    v13 = (unsigned __int8)(v12 >> 23);
    if ( v13 <= 0x9E )
    {
      v14 = v12 & 0x7FFFFF | 0x800000LL;
      v15 = v13 < 0x76 ? v14 >> (118 - (unsigned __int8)v13) : v14 << ((unsigned __int8)v13 - 118);
      v10 = -((unsigned __int64)(v15 + 0x80000000LL) >> 32);
      if ( v12 >= 0 )
        v10 = (unsigned __int64)(v15 + 0x80000000LL) >> 32;
    }
    v16 = _mm_cvtsi128_si32(v11);
    v17 = (unsigned __int8)(v16 >> 23);
    if ( v17 <= 0x9E )
    {
      v18 = v16 & 0x7FFFFF | 0x800000LL;
      if ( v17 < 0x76 )
        v19 = v18 >> (118 - (unsigned __int8)v17);
      else
        v19 = v18 << ((unsigned __int8)v17 - 118);
      v20 = (v19 + 0x80000000LL) >> 32;
      v9 = -(int)v20;
      if ( v16 >= 0 )
        v9 = v20;
    }
    HIDWORD(v24) = v9 + HIDWORD(this);
    LODWORD(v24) = (_DWORD)this + v10;
    return (struct _POINTFIX)v24;
  }
  return result;
}
