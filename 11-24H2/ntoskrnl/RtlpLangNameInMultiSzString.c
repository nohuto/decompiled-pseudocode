/*
 * XREFs of RtlpLangNameInMultiSzString @ 0x1407841C8
 * Callers:
 *     RtlpIsALicensedRegularLanguage @ 0x14082BBBC (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegAddLanguageByName @ 0x14082C118 (RtlpMuiRegAddLanguageByName.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x14082DE64 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x14082EDFC (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 */

char __fastcall RtlpLangNameInMultiSzString(wchar_t *Str1, wchar_t *Str2)
{
  char v2; // bl
  const wchar_t *v4; // rdi
  __int64 v5; // rax

  v2 = 0;
  v4 = Str1;
  if ( Str1 && Str2 )
  {
    while ( v4 && *v4 )
    {
      if ( !wcsicmp(v4, Str2) )
        return 1;
      v5 = -1LL;
      do
        ++v5;
      while ( v4[v5] );
      v4 += v5 + 1;
    }
  }
  return v2;
}
