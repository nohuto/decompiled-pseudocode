/*
 * XREFs of RtlpLangNameInMultiSzString @ 0x140784298
 * Callers:
 *     RtlpIsALicensedRegularLanguage @ 0x14082B38C (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegAddLanguageByName @ 0x14082B8E8 (RtlpMuiRegAddLanguageByName.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x14082D634 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x14082E5CC (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
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
