/*
 * XREFs of wcsrchr @ 0x1404FDA40
 * Callers:
 *     AslPathGetFileNamePart @ 0x14080A524 (AslPathGetFileNamePart.c)
 *     BiTranslateSymbolicLinkFile @ 0x140814AA8 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14081D374 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x140821D0C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092644C (DrvDbGetDriverPackageMappedProperty.c)
 *     SdbGetDatabaseMatchEx @ 0x140944EEC (SdbGetDatabaseMatchEx.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     PiLookupInDDBCache @ 0x1409B8B68 (PiLookupInDDBCache.c)
 *     PiIsDriverBlocked @ 0x1409BA914 (PiIsDriverBlocked.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1409C7B64 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     EtwpGenerateFileName @ 0x1409D6D84 (EtwpGenerateFileName.c)
 *     _RegRtlDeletePathInternal @ 0x140A64448 (_RegRtlDeletePathInternal.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A6B0FC (PopBcdSetDefaultResumeObjectElements.c)
 *     PiUpdateDriverDBCache @ 0x140A6C434 (PiUpdateDriverDBCache.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A73AFC (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDqDeleteUserObject @ 0x140A7EF78 (PiDqDeleteUserObject.c)
 *     AslPathSplit @ 0x140AA151C (AslPathSplit.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140C492B0 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
