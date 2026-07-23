/*
 * XREFs of wcsnlen @ 0x1404FD950
 * Callers:
 *     _wcslwr_s @ 0x1404FBD30 (_wcslwr_s.c)
 *     wcsncat @ 0x1404FD820 (wcsncat.c)
 *     wcsncpy @ 0x1404FD8D0 (wcsncpy.c)
 *     EmonAddProfileSource @ 0x140558450 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x140567830 (Amd64AddProfileSource.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1407824F0 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140782578 (RtlpSetTimeZoneInformationWorker.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1407A8AE8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     SiIsValidWindowsBootEntry @ 0x14081733C (SiIsValidWindowsBootEntry.c)
 *     BiIsWindowsEfiEntry @ 0x1409A619C (BiIsWindowsEfiEntry.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Src, size_t MaxCount)
{
  const wchar_t *v3; // rax
  const wchar_t *i; // rdx
  const wchar_t *v5; // rdx
  size_t v6; // rbx
  const wchar_t *v7; // rax
  size_t v8; // rdx
  __m128i *v9; // r9
  const wchar_t *v10; // rdx

  if ( ((unsigned __int8)Src & 1) != 0 )
  {
    v3 = &Src[MaxCount];
    for ( i = Src; i != v3; ++i )
    {
      if ( !*i )
        break;
    }
    return i - Src;
  }
  v5 = Src;
  v6 = ((16LL - ((unsigned __int8)Src & 0xF)) & ((unsigned __int128)-(__int128)((unsigned __int8)Src & 0xF) >> 64)) >> 1;
  if ( MaxCount < v6 )
    v6 = MaxCount;
  v7 = &Src[v6];
  if ( Src != v7 )
  {
    do
    {
      if ( !*v5 )
        break;
      ++v5;
    }
    while ( v5 != v7 );
  }
  v8 = v5 - Src;
  if ( v8 == v6 )
  {
    v9 = (__m128i *)&Src[v8];
    v10 = &Src[v8 + MaxCount - v6 - (((_BYTE)MaxCount - (_BYTE)v6) & 0xF)];
    while ( v9 != (__m128i *)v10 && !_mm_movemask_epi8(_mm_cmpeq_epi16((__m128i)0LL, *v9)) )
      ++v9;
    while ( v9 != (__m128i *)&Src[MaxCount] && v9->m128i_i16[0] )
      v9 = (__m128i *)((char *)v9 + 2);
    i = (const wchar_t *)v9;
    return i - Src;
  }
  return v8;
}
