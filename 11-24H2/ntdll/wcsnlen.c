/*
 * XREFs of wcsnlen @ 0x180125C50
 * Callers:
 *     RtlpLangNameInMultiSzString_Size @ 0x1800196B0 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x18011E770 (RtlpConvertCultureNamesToLCIDs.c)
 *     _wcslwr_s @ 0x180120F60 (_wcslwr_s.c)
 *     _wcsupr_s @ 0x180121440 (_wcsupr_s.c)
 *     wcsncat @ 0x180125B20 (wcsncat.c)
 *     wcsncpy @ 0x180125BD0 (wcsncpy.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x18013CD50 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x18013CDD8 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x18013DBC0 (RtlpConvertLCIDsToCultureNames.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Source, size_t MaxCount)
{
  __int64 v5; // rcx
  const wchar_t *v7; // rax
  const wchar_t *i; // rdx
  const wchar_t *v9; // rdx
  size_t v10; // rbx
  const wchar_t *v11; // rax
  size_t v12; // rdx
  __m128i *v13; // r9
  const wchar_t *j; // rdx
  const wchar_t *v16; // rax
  const wchar_t *v17; // rdx
  size_t v18; // rbx
  const wchar_t *v19; // rax
  const wchar_t *v20; // rdx

  v5 = (unsigned __int8)Source & 1;
  if ( (_isa_info & 0x10) != 0 )
  {
    if ( v5 )
    {
      v7 = &Source[MaxCount];
      for ( i = Source; i != v7; ++i )
      {
        if ( !*i )
          break;
      }
      return i - Source;
    }
    v9 = Source;
    v10 = ((32LL - ((unsigned __int8)Source & 0x1F)) & ((unsigned __int128)-(__int128)((unsigned __int8)Source & 0x1F) >> 64)) >> 1;
    if ( MaxCount < v10 )
      v10 = MaxCount;
    v11 = &Source[v10];
    if ( Source != v11 )
    {
      do
      {
        if ( !*v9 )
          break;
        ++v9;
      }
      while ( v9 != v11 );
    }
    v12 = v9 - Source;
    if ( v12 == v10 )
    {
      v13 = (__m128i *)&Source[v12];
      for ( j = &Source[v12 + MaxCount - v10 - (((_BYTE)MaxCount - (_BYTE)v10) & 0x1F)]; v13 != (__m128i *)j; v13 += 2 )
      {
        __asm
        {
          vpxor   xmm1, xmm1, xmm1
          vpcmpeqw ymm1, ymm1, ymmword ptr [r9]
          vpmovmskb eax, ymm1
        }
        __asm { vzeroupper }
        if ( _EAX )
          break;
      }
      while ( v13 != (__m128i *)&Source[MaxCount] && v13->m128i_i16[0] )
        v13 = (__m128i *)((char *)v13 + 2);
      goto LABEL_40;
    }
  }
  else
  {
    if ( v5 )
    {
      v16 = &Source[MaxCount];
      for ( i = Source; i != v16; ++i )
      {
        if ( !*i )
          break;
      }
      return i - Source;
    }
    v17 = Source;
    v18 = ((16LL - ((unsigned __int8)Source & 0xF)) & ((unsigned __int128)-(__int128)((unsigned __int8)Source & 0xF) >> 64)) >> 1;
    if ( MaxCount < v18 )
      v18 = MaxCount;
    v19 = &Source[v18];
    if ( Source != v19 )
    {
      do
      {
        if ( !*v17 )
          break;
        ++v17;
      }
      while ( v17 != v19 );
    }
    v12 = v17 - Source;
    if ( v12 == v18 )
    {
      v13 = (__m128i *)&Source[v12];
      v20 = &Source[v12 + MaxCount - v18 - (((_BYTE)MaxCount - (_BYTE)v18) & 0xF)];
      while ( v13 != (__m128i *)v20 && !_mm_movemask_epi8(_mm_cmpeq_epi16((__m128i)0LL, *v13)) )
        ++v13;
      while ( v13 != (__m128i *)&Source[MaxCount] && v13->m128i_i16[0] )
        v13 = (__m128i *)((char *)v13 + 2);
LABEL_40:
      i = (const wchar_t *)v13;
      return i - Source;
    }
  }
  return v12;
}
