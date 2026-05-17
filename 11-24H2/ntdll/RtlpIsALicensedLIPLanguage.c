/*
 * XREFs of RtlpIsALicensedLIPLanguage @ 0x18007D508
 * Callers:
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180061A10 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18007D170 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegAddLanguageByName @ 0x1801491C0 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlpLangNameInMultiSzString @ 0x18007D7B0 (RtlpLangNameInMultiSzString.c)
 */

__int64 __fastcall RtlpIsALicensedLIPLanguage(__int64 a1, wchar_t *a2)
{
  wchar_t *v4; // rcx
  char v5; // cl
  __int64 result; // rax
  wchar_t *v7; // rcx

  if ( !a1 )
    return 3221225485LL;
  v4 = *(wchar_t **)(a1 + 136);
  if ( v4 )
  {
    v5 = RtlpLangNameInMultiSzString(v4, a2);
    result = v5 != 0 ? 0xC0000034 : 0;
    if ( v5 )
      return result;
  }
  else
  {
    result = 0LL;
  }
  v7 = *(wchar_t **)(a1 + 152);
  if ( v7 )
    return (unsigned __int8)RtlpLangNameInMultiSzString(v7, a2) != 0 ? 0xC0000034 : 0;
  return result;
}
