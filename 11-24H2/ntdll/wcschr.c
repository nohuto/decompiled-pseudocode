/*
 * XREFs of wcschr @ 0x1801258D0
 * Callers:
 *     RtlpNeedCurrentDirectoryForExePath @ 0x1800049A4 (RtlpNeedCurrentDirectoryForExePath.c)
 *     RtlpGetDirPath @ 0x180005A04 (RtlpGetDirPath.c)
 *     LdrSetDllDirectory @ 0x180052B00 (LdrSetDllDirectory.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     wcscspn @ 0x180125990 (wcscspn.c)
 *     wcspbrk @ 0x180125E20 (wcspbrk.c)
 *     wcsspn @ 0x180125F40 (wcsspn.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  wchar_t *v3; // r9
  __m128i v4; // xmm2
  __m128i v5; // xmm0
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  wchar_t *v9; // r8

  v3 = 0LL;
  v4 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(Ch), 0), 0);
  while ( ((unsigned __int16)Str & 0xFFFu) > 0xFF0uLL )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    if ( !*Str )
      return 0LL;
    v7 = 2LL;
LABEL_8:
    Str = (const wchar_t *)((char *)Str + v7);
  }
  v5 = _mm_loadu_si128((const __m128i *)Str);
  v6 = _mm_movemask_epi8((__m128i)_mm_or_ps((__m128)_mm_cmpeq_epi16((__m128i)0LL, v5), (__m128)_mm_cmpeq_epi16(v5, v4)));
  if ( !v6 )
  {
    v7 = 16LL;
    goto LABEL_8;
  }
  _BitScanForward((unsigned int *)&v8, v6);
  v9 = (wchar_t *)((char *)Str + v8);
  if ( *v9 == Ch )
    return v9;
  return v3;
}
