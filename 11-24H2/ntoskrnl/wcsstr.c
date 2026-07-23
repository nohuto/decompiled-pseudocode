/*
 * XREFs of wcsstr @ 0x1404FDB70
 * Callers:
 *     SmUniqueIdParseProductName @ 0x14060B270 (SmUniqueIdParseProductName.c)
 *     BcpGetProgressMessages @ 0x14069AF40 (BcpGetProgressMessages.c)
 *     IopCheckIfNotNativeDriver @ 0x14070F824 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x14071C7B8 (PiGetDeviceRegistryProperty.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140816288 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetBiosSystemPartition @ 0x1408174E0 (SiGetBiosSystemPartition.c)
 *     PiGetDeviceRegProperty @ 0x1408BA9AC (PiGetDeviceRegProperty.c)
 *     PfSnIsHostingApplication @ 0x1409496E4 (PfSnIsHostingApplication.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409A60FC (BiGetObjectReferenceFromEfiEntry.c)
 *     BiIsWinPEBoot @ 0x1409A81CC (BiIsWinPEBoot.c)
 *     EtwpGenerateFileName @ 0x1409D6D84 (EtwpGenerateFileName.c)
 *     SubstringMatch @ 0x140A1EB1C (SubstringMatch.c)
 *     SiIsWinPEBoot @ 0x140A22390 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x140A2240C (SiGetBootDeviceName.c)
 *     PopGetBitlockerKeyLocation @ 0x140B5D82C (PopGetBitlockerKeyLocation.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsstr(const wchar_t *Str, const wchar_t *SubStr)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  __m128i v6; // xmm4
  __m128i v7; // xmm1
  unsigned int v8; // eax
  unsigned __int64 v9; // rcx
  const __m128i *v10; // rdx
  const __m128i *j; // r9
  __m128i v12; // xmm2
  unsigned int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __m128i inserted; // xmm0
  wchar_t v17; // dx
  const wchar_t *v18; // r9
  wchar_t v19; // di
  wchar_t *v20; // rax
  __m128i v21; // xmm1
  unsigned __int8 v22; // cf
  const __m128i *v23; // rdx
  const __m128i *i; // r9
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  unsigned __int8 v27; // sf

  if ( !*SubStr )
    return (wchar_t *)Str;
  v4 = 8LL;
  if ( (_isa_info & 8) != 0 )
  {
    if ( ((unsigned __int16)SubStr & 0xFFFu) > 0xFF0uLL )
    {
      v17 = *SubStr;
      inserted = 0LL;
      v18 = SubStr;
      do
      {
        v19 = v17;
        inserted = _mm_insert_epi16(_mm_srli_si128(inserted, 2), v17, 7);
        v20 = (wchar_t *)(v18 + 1);
        if ( v17 )
          v17 = *v20;
        if ( !v19 )
          v20 = (wchar_t *)v18;
        v18 = v20;
        --v4;
      }
      while ( v4 );
    }
    else
    {
      inserted = _mm_loadu_si128((const __m128i *)SubStr);
    }
    while ( 1 )
    {
      while ( ((unsigned __int16)Str & 0xFFFu) > 0xFF0uLL )
      {
        if ( !*Str )
          return 0LL;
        if ( *Str == *SubStr )
          goto LABEL_34;
LABEL_42:
        ++Str;
      }
      v21 = _mm_loadu_si128((const __m128i *)Str);
      v22 = _mm_cmpistrc(inserted, v21, 13);
      if ( v22 | _mm_cmpistrz(inserted, v21, 13) )
      {
        if ( !v22 )
          return 0LL;
        Str += _mm_cmpistri(inserted, v21, 13);
LABEL_34:
        v23 = (const __m128i *)Str;
        for ( i = (const __m128i *)SubStr; ; i = (const __m128i *)((char *)i + 2) )
        {
          while ( ((unsigned __int16)v23 & 0xFFFu) <= 0xFF0uLL && ((unsigned __int16)i & 0xFFFu) <= 0xFF0uLL )
          {
            v25 = _mm_loadu_si128(v23);
            v26 = _mm_loadu_si128(i);
            v27 = _mm_cmpistrs(v26, v25, 13);
            if ( !_mm_cmpistro(v26, v25, 13) )
              goto LABEL_42;
            if ( v27 )
              return (wchar_t *)Str;
            ++v23;
            ++i;
          }
          if ( !i->m128i_i16[0] )
            return (wchar_t *)Str;
          if ( v23->m128i_i16[0] != i->m128i_i16[0] )
            break;
          v23 = (const __m128i *)((char *)v23 + 2);
        }
        goto LABEL_42;
      }
      Str += 8;
    }
  }
  v5 = *SubStr;
  if ( (_WORD)v5 )
  {
    v6 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v5), 0), 0);
    while ( 1 )
    {
      if ( ((unsigned __int16)Str & 0xFFFu) > 0xFF0uLL )
        goto LABEL_9;
      v7 = _mm_loadu_si128((const __m128i *)Str);
      v8 = _mm_movemask_epi8((__m128i)_mm_or_ps(
                                        (__m128)_mm_cmpeq_epi16(v7, v6),
                                        (__m128)_mm_cmpeq_epi16(v7, (__m128i)0LL)));
      if ( v8 )
      {
        _BitScanForward((unsigned int *)&v9, v8);
        Str += v9 >> 1;
LABEL_9:
        if ( !*Str )
          return 0LL;
        if ( (_WORD)v5 == *Str )
        {
          v10 = (const __m128i *)Str;
          for ( j = (const __m128i *)SubStr; ; j = (const __m128i *)((char *)j + 2) )
          {
            while ( 2 )
            {
              if ( ((unsigned __int16)j & 0xFFFu) <= 0xFF0uLL && ((unsigned __int16)v10 & 0xFFFu) <= 0xFF0uLL )
              {
                v12 = _mm_loadu_si128(j);
                v13 = _mm_movemask_epi8((__m128i)_mm_or_ps(
                                                   (__m128)_mm_cmpeq_epi16(
                                                             _mm_cmpeq_epi16(v12, _mm_loadu_si128(v10)),
                                                             (__m128i)0LL),
                                                   (__m128)_mm_cmpeq_epi16(v12, (__m128i)0LL)));
                if ( !v13 )
                {
                  ++v10;
                  ++j;
                  continue;
                }
                _BitScanForward((unsigned int *)&v14, v13);
                v15 = 2 * (v14 >> 1);
                v10 = (const __m128i *)((char *)v10 + v15);
                j = (const __m128i *)((char *)j + v15);
              }
              break;
            }
            if ( !j->m128i_i16[0] )
              return (wchar_t *)Str;
            if ( v10->m128i_i16[0] != j->m128i_i16[0] )
              break;
            v10 = (const __m128i *)((char *)v10 + 2);
          }
        }
        ++Str;
      }
      else
      {
        Str += 8;
      }
    }
  }
  return (wchar_t *)Str;
}
