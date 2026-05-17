/*
 * XREFs of RtlpLangNameInMultiSzString_Size @ 0x1800600E0
 * Callers:
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18005C790 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18005E960 (LdrpConvertLangFallbackListToMultiSz.c)
 * Callees:
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 */

char __fastcall RtlpLangNameInMultiSzString_Size(wchar_t *String1, wchar_t *String2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  const wchar_t *v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  const wchar_t *v8; // rax
  __int64 v10; // rax

  v3 = 0LL;
  v5 = String1;
  if ( !String1 || !String2 )
    return 0;
  v6 = a3;
  if ( a3 <= 0x7FFFFFFFuLL )
  {
    v7 = a3;
    v8 = v5;
    if ( a3 )
    {
      do
      {
        if ( !*v8 )
          break;
        ++v8;
        --v7;
      }
      while ( v7 );
    }
    if ( v7 )
    {
      while ( v3 < v6 && v5 && *v5 )
      {
        if ( !wcsicmp(v5, String2) )
          return 1;
        v10 = -1LL;
        do
          ++v10;
        while ( v5[v10] );
        v3 += v10 + 1;
        v5 += v10 + 1;
      }
    }
  }
  return 0;
}
