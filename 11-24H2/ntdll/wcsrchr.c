/*
 * XREFs of wcsrchr @ 0x180125E80
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800033D8 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpGetDirPath @ 0x180005A04 (RtlpGetDirPath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     CompatCachepLookupCdb @ 0x18008F2EC (CompatCachepLookupCdb.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800EE0E4 (LdrpGetModuleInfoFromVirtualMemory.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  wchar_t *v3; // rcx
  unsigned int v4; // r9d
  const wchar_t *v5; // rdx
  wchar_t *v8; // rdx
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  int v11; // ecx
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  unsigned __int8 v14; // zf
  int v15; // ecx

  v3 = 0LL;
  v4 = Ch;
  if ( (_isa_info & 8) != 0 )
  {
    v8 = 0LL;
    while ( (((_BYTE)Str + 1) & 0xE) != 0 )
    {
      if ( *Str == (_WORD)v4 )
        v8 = (wchar_t *)Str;
      if ( !*Str )
        return v8;
      ++Str;
    }
    if ( (_WORD)v4 )
    {
      v12 = _mm_cvtsi32_si128(v4);
      while ( 1 )
      {
        v13 = _mm_loadu_si128((const __m128i *)Str);
        v15 = _mm_cmpistri(v12, v13, 65);
        v14 = _mm_cmpistrz(v12, v13, 65);
        if ( _mm_cmpistrc(v12, v13, 65) )
          v8 = (wchar_t *)&Str[v15];
        if ( v14 )
          break;
        Str += 8;
      }
      return v8;
    }
    v9 = _mm_cvtsi32_si128(0xFFFF0001);
    while ( 1 )
    {
      v10 = _mm_loadu_si128((const __m128i *)Str);
      v11 = _mm_cmpistri(v9, v10, 21);
      if ( _mm_cmpistrz(v9, v10, 21) )
        break;
      Str += 8;
    }
    return (wchar_t *)&Str[v11];
  }
  else
  {
    v5 = Str;
    while ( *Str++ )
      ;
    while ( --Str != v5 )
    {
      if ( *Str == (_WORD)v4 )
        return (wchar_t *)Str;
    }
    if ( *Str == (_WORD)v4 )
      return (wchar_t *)Str;
    return v3;
  }
}
