/*
 * XREFs of strnlen @ 0x1404FD180
 * Callers:
 *     EtwpGetEventNameFromEventMetadata @ 0x1403FB210 (EtwpGetEventNameFromEventMetadata.c)
 *     EtwpApplyEventNameFilter @ 0x1404ED680 (EtwpApplyEventNameFilter.c)
 *     EtwpAllocateEventNameFilter @ 0x1409E7998 (EtwpAllocateEventNameFilter.c)
 *     EtwpSetProviderTraitsCommon @ 0x1409F69B4 (EtwpSetProviderTraitsCommon.c)
 *     EtwpGetProviderGroupFromTraits @ 0x140A15AC4 (EtwpGetProviderGroupFromTraits.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strnlen(const char *Str, size_t MaxCount)
{
  __int64 v2; // r8
  __int64 v4; // rax
  bool v5; // cf
  const char *v6; // r8
  size_t v7; // r10
  size_t v8; // rdx
  __m128i *v9; // rdx
  size_t v10; // r10

  v2 = (unsigned __int8)Str & 0xF;
  v4 = 16 - v2;
  v5 = v2 != 0;
  v6 = Str;
  v7 = v4 & -(__int64)v5;
  if ( MaxCount < v7 )
    v7 = MaxCount;
  if ( Str != &Str[v7] )
  {
    do
    {
      if ( !*v6 )
        break;
      ++v6;
    }
    while ( v6 != &Str[v7] );
  }
  v8 = v6 - Str;
  if ( v6 - Str == v7 )
  {
    v9 = (__m128i *)v6;
    v10 = (size_t)&v6[MaxCount - v7 - (((_BYTE)MaxCount - (_BYTE)v7) & 0xF)];
    if ( v6 != (const char *)v10 )
    {
      do
      {
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8((__m128i)0LL, *v9)) )
          break;
        ++v9;
      }
      while ( v9 != (__m128i *)v10 );
    }
    while ( v9 != (__m128i *)&Str[MaxCount] && v9->m128i_i8[0] )
      v9 = (__m128i *)((char *)v9 + 1);
    return (char *)v9 - Str;
  }
  return v8;
}
