/*
 * XREFs of RtlpLangNameInMultiSzString @ 0x1800CB1D0
 * Callers:
 *     RtlpIsALicensedRegularLanguage @ 0x1800CAE30 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpIsALicensedLIPLanguage @ 0x1800CAF28 (RtlpIsALicensedLIPLanguage.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x18013D30C (RtlpAddLanguagesToMultiSZ.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x180148248 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x180148F68 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 */

char __fastcall RtlpLangNameInMultiSzString(wchar_t *String1, wchar_t *String2)
{
  const wchar_t *v3; // rbx
  __int64 v5; // rax

  v3 = String1;
  if ( String1 && String2 )
  {
    while ( v3 && *v3 )
    {
      if ( !wcsicmp(v3, String2) )
        return 1;
      v5 = -1LL;
      while ( v3[++v5] != 0 )
        ;
      v3 += v5 + 1;
    }
  }
  return 0;
}
