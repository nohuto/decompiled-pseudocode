/*
 * XREFs of RtlpMuiRegAddLanguageByName @ 0x18014A770
 * Callers:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x18014BAA4 (_RtlpMuiRegLoadInstalledFromKey.c)
 * Callees:
 *     RtlpIsALicensedRegularLanguage @ 0x180089DF0 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpIsALicensedLIPLanguage @ 0x180089EE8 (RtlpIsALicensedLIPLanguage.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x18014A5B4 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x18014AE44 (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014B788 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x18014B860 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014BD20 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpMuiRegAddLanguageByName(_QWORD *a1, void *a2, wchar_t *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  __int16 v10; // ax
  bool v11; // sf
  __int16 v12; // ax
  __int128 v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+50h] [rbp-10h]

  v14 = 0LL;
  v15 = 0;
  v13 = 0LL;
  result = RtlpMuiRegInitAnyLanguage(a1, &v13);
  if ( (int)result >= 0 )
  {
    LOBYTE(v10) = v13;
    if ( (v13 & 4) != 0 )
    {
      result = RtlpMuiRegInitLIPLanguage(a1, a2, &v13);
      if ( (int)result < 0 )
        return result;
      LOBYTE(v10) = v13;
    }
    else if ( (v13 & 2) != 0 )
    {
      if ( !a1 || !a2 )
        return 3221225485LL;
      v11 = (int)RtlpMuiRegPopulateBaseLanguages((int)a1) < 0;
      v12 = v13;
      if ( v11 )
      {
        v12 = v13 | 0x1000;
        LOWORD(v13) = v13 | 0x1000;
      }
      v10 = v12 | 0x1000;
      LOWORD(v13) = v10;
    }
    if ( (v10 & 4) != 0 )
      result = RtlpIsALicensedLIPLanguage((__int64)a1, a3);
    else
      result = RtlpIsALicensedRegularLanguage(a1, a3);
    if ( (int)result >= 0 )
    {
      LOWORD(v13) = v13 | 0x820;
      RtlpMuiRegAddAlternateCodePage((__int64)&v13, a2);
      return RtlpMuiRegGetOrAddLangInfo(a1 + 3, &v13, a6);
    }
  }
  return result;
}
