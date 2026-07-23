/*
 * XREFs of RtlpIsALicensedRegularLanguage @ 0x1800CAE30
 * Callers:
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800775F0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x1800CAB90 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegAddLanguageByName @ 0x180147570 (RtlpMuiRegAddLanguageByName.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180149010 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpLangNameInMultiSzString @ 0x1800CB1D0 (RtlpLangNameInMultiSzString.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 */

__int64 __fastcall RtlpIsALicensedRegularLanguage(_QWORD *a1, wchar_t *a2)
{
  const wchar_t *v4; // rbx
  unsigned int v5; // edx
  __int64 v7; // rax
  wchar_t *v9; // rcx
  wchar_t *v10; // rcx
  char v11; // al
  unsigned int v12; // ecx

  if ( !a1 )
    return 3221225524LL;
  v4 = (const wchar_t *)a1[17];
  if ( v4 )
  {
    if ( a2 )
    {
      while ( v4 && *v4 )
      {
        if ( !wcsicmp(v4, a2) )
          goto LABEL_13;
        v7 = -1LL;
        while ( v4[++v7] != 0 )
          ;
        v4 += v7 + 1;
      }
    }
    return (unsigned int)-1073741772;
  }
LABEL_13:
  v9 = (wchar_t *)a1[16];
  if ( !v9 )
  {
    v10 = (wchar_t *)a1[19];
    v5 = 0;
    if ( v10 )
      return (unsigned __int8)RtlpLangNameInMultiSzString(v10, a2) != 0 ? 0xC0000034 : 0;
    return v5;
  }
  v11 = RtlpLangNameInMultiSzString(v9, a2);
  v12 = 0;
  if ( !v11 )
    return (unsigned int)-1073741772;
  return v12;
}
