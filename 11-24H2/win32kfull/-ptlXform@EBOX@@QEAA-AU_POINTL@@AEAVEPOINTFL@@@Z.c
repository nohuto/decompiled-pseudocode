/*
 * XREFs of ?ptlXform@EBOX@@QEAA?AU_POINTL@@AEAVEPOINTFL@@@Z @ 0x1400E8CC4
 * Callers:
 *     ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1400E8308 (-bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z.c)
 * Callees:
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 */

struct _POINTL __fastcall EBOX::ptlXform(__int64 this, struct EPOINTFL *a2, float *a3)
{
  __int64 v4; // rbx
  __m128i v5; // xmm1
  int v6; // r8d
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  v5 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(this + 56));
  *(float *)v5.m128i_i32 = (float)(*(float *)v5.m128i_i32 * a3[1]) + (float)((float)*(int *)(this + 48) * *a3);
  v6 = _mm_cvtsi128_si32(v5);
  v7 = (unsigned __int8)(v6 >> 23);
  if ( v7 <= 0x9E )
  {
    v8 = v6 & 0x7FFFFF | 0x800000LL;
    if ( v7 < 0x76 )
      v9 = v8 >> (118 - (unsigned __int8)v7);
    else
      v9 = v8 << ((unsigned __int8)v7 - 118);
    this = (v9 + 0x80000000LL) >> 32;
    if ( v6 < 0 )
      this = (unsigned int)-(int)this;
    LODWORD(v11) = this;
  }
  bFToL(this, (char *)&v11 + 4, 6LL);
  LODWORD(v11) = *(_DWORD *)(v4 + 40) + v11;
  HIDWORD(v11) += *(_DWORD *)(v4 + 44);
  *(_QWORD *)a2 = v11;
  return (struct _POINTL)a2;
}
