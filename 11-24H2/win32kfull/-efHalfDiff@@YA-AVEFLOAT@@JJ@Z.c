/*
 * XREFs of ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1400E8AF0
 * Callers:
 *     NtGdiArcInternal @ 0x1400E5070 (NtGdiArcInternal.c)
 *     ??0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1400E73A8 (--0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1400E8608 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall efHalfDiff(int a1, int a2)
{
  __m128i v2; // xmm1
  __m128i v3; // xmm0

  v2 = (__m128i)COERCE_UNSIGNED_INT((float)((a1 >> 1) - (a2 >> 1)));
  v3 = v2;
  if ( (((unsigned __int8)a2 ^ (unsigned __int8)a1) & 1) != 0 )
  {
    if ( (a1 & 1) != 0 )
      *(float *)v2.m128i_i32 = *(float *)v2.m128i_i32 + FP_0_5;
    else
      *(float *)v2.m128i_i32 = *(float *)v2.m128i_i32 - FP_0_5;
    v3 = v2;
  }
  return (unsigned int)_mm_cvtsi128_si32(v3);
}
