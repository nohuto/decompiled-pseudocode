/*
 * XREFs of RtlpIsALicensedRegularLanguage @ 0x14082BBBC
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x14082C118 (RtlpMuiRegAddLanguageByName.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14082EEA4 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpLangNameInMultiSzString @ 0x1407841C8 (RtlpLangNameInMultiSzString.c)
 */

__int64 __fastcall RtlpIsALicensedRegularLanguage(_QWORD *a1, wchar_t *a2)
{
  __int64 result; // rax
  wchar_t *v5; // rcx
  char v6; // cl
  wchar_t *v7; // rcx
  int v8; // eax
  wchar_t *v9; // rcx

  result = 0LL;
  if ( !a1 )
    return 3221225524LL;
  v5 = (wchar_t *)a1[17];
  if ( !v5 || (v6 = RtlpLangNameInMultiSzString(v5, a2), result = v6 == 0 ? 0xC0000034 : 0, v6) )
  {
    v7 = (wchar_t *)a1[16];
    if ( v7 )
    {
      v8 = -(RtlpLangNameInMultiSzString(v7, a2) == 0);
    }
    else
    {
      v9 = (wchar_t *)a1[19];
      if ( !v9 )
        return result;
      v8 = -(RtlpLangNameInMultiSzString(v9, a2) != 0);
    }
    return v8 & 0xC0000034;
  }
  return result;
}
