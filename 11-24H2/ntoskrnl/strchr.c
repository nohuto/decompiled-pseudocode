/*
 * XREFs of strchr @ 0x1404FD0E0
 * Callers:
 *     WmipSMBiosFindStringAndZero @ 0x1407A4B90 (WmipSMBiosFindStringAndZero.c)
 *     MiSnapThunk @ 0x140A11224 (MiSnapThunk.c)
 *     EmpParseRuleTerm @ 0x140C18E50 (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140C197EC (EmpParseTargetRuleStringIndexList.c)
 *     CmpGetToken @ 0x140C1A318 (CmpGetToken.c)
 *     PipSmBiosGetString @ 0x140C243BC (PipSmBiosGetString.c)
 * Callees:
 *     <none>
 */

char *__cdecl strchr(const char *Str, int Val)
{
  const __m128i *v2; // r8
  unsigned int v3; // r10d
  char *v4; // r9
  __m128i v5; // xmm2
  __m128i v6; // xmm3
  __int64 v7; // rdx
  __m128i v8; // xmm1
  char *v9; // rdx

  v2 = (const __m128i *)((unsigned __int64)Str & 0xFFFFFFFFFFFFFFF0uLL);
  v3 = (unsigned __int8)Val | ((unsigned __int8)Val << 8);
  v4 = 0LL;
  v5 = _mm_loadu_si128((const __m128i *)((unsigned __int64)Str & 0xFFFFFFFFFFFFFFF0uLL));
  v6 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v3), 0), 0);
  for ( LODWORD(v7) = (-1 << ((unsigned __int8)Str & 0xF)) & _mm_movemask_epi8((__m128i)_mm_or_ps(
                                                                                          (__m128)_mm_cmpeq_epi8(v6, v5),
                                                                                          (__m128)_mm_cmpeq_epi8(
                                                                                                    (__m128i)0LL,
                                                                                                    v5)));
        !(_DWORD)v7;
        LODWORD(v7) = _mm_movemask_epi8((__m128i)_mm_or_ps(
                                                   (__m128)_mm_cmpeq_epi8(v8, v6),
                                                   (__m128)_mm_cmpeq_epi8(v8, (__m128i)_xmm))) )
  {
    v8 = _mm_loadu_si128(++v2);
  }
  _BitScanForward((unsigned int *)&v7, v7);
  v9 = &v2->m128i_i8[v7];
  if ( *v9 == (_BYTE)v3 )
    return v9;
  return v4;
}
