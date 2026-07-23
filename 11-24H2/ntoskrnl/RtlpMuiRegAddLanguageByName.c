/*
 * XREFs of RtlpMuiRegAddLanguageByName @ 0x14082C118
 * Callers:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1406A372C (_RtlpMuiRegLoadInstalledFromKey.c)
 * Callees:
 *     RtlpMuiRegAddAlternateCodePage @ 0x1406A31C0 (RtlpMuiRegAddAlternateCodePage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpLangNameInMultiSzString @ 0x1407841C8 (RtlpLangNameInMultiSzString.c)
 *     RtlpIsALicensedRegularLanguage @ 0x14082BBBC (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x14082D11C (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x14082E1CC (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14082E2A8 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14082E61C (_RtlpMuiRegPopulateBaseLanguages.c)
 */

__int64 __fastcall RtlpMuiRegAddLanguageByName(__int64 a1, void *a2, wchar_t *a3, __int64 a4, int a5, __int64 a6)
{
  wchar_t *v9; // rcx
  char v10; // al
  char v11; // al
  __int128 v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+50h] [rbp-10h]

  v14 = 0LL;
  v15 = 0;
  v13 = 0LL;
  LODWORD(v9) = RtlpMuiRegInitAnyLanguage(a1, &v13);
  if ( (int)v9 >= 0 )
  {
    v10 = v13;
    if ( (v13 & 4) != 0 )
    {
      LODWORD(v9) = RtlpMuiRegInitLIPLanguage(a1, a2, &v13);
      if ( (int)v9 < 0 )
        return (unsigned int)v9;
      v10 = v13;
    }
    else if ( (v13 & 2) != 0 )
    {
      if ( !a1 || !a2 )
      {
        LODWORD(v9) = -1073741811;
        return (unsigned int)v9;
      }
      if ( (int)RtlpMuiRegPopulateBaseLanguages(a1) < 0 )
        LOWORD(v13) = v13 | 0x1000;
      v10 = v13;
      LOWORD(v13) = v13 | 0x1000;
    }
    if ( (v10 & 4) != 0 )
    {
      if ( a1 )
      {
        v9 = *(wchar_t **)(a1 + 136);
        if ( !v9 || (v11 = RtlpLangNameInMultiSzString(v9, a3), LODWORD(v9) = v11 != 0 ? 0xC0000034 : 0, !v11) )
        {
          if ( *(_QWORD *)(a1 + 152) )
            LODWORD(v9) = RtlpLangNameInMultiSzString(*(wchar_t **)(a1 + 152), a3) != 0 ? 0xC0000034 : 0;
        }
      }
      else
      {
        LODWORD(v9) = -1073741811;
      }
    }
    else
    {
      LODWORD(v9) = RtlpIsALicensedRegularLanguage((_QWORD *)a1, a3);
    }
    if ( (int)v9 >= 0 )
    {
      LOWORD(v13) = v13 | 0x820;
      RtlpMuiRegAddAlternateCodePage((__int64)&v13, a2);
      LODWORD(v9) = RtlpMuiRegGetOrAddLangInfo(a1 + 24, &v13, a6);
    }
  }
  return (unsigned int)v9;
}
