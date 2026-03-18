/*
 * XREFs of RtlpLangNameInMultiSzString @ 0x140774FE8
 * Callers:
 *     RtlpIsALicensedRegularLanguage @ 0x14081B64C (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegAddLanguageByName @ 0x14081BBA8 (RtlpMuiRegAddLanguageByName.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x14081D8F4 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x14081E88C (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
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
