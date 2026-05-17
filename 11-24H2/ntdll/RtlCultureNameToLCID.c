/*
 * XREFs of RtlCultureNameToLCID @ 0x1800330E0
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800322A0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlGetNeutralFallback @ 0x180033500 (RtlGetNeutralFallback.c)
 *     GetLCIDFromLangListNode @ 0x1800345E0 (GetLCIDFromLangListNode.c)
 *     RtlpPopulateLanguageConfigList @ 0x180034DF0 (RtlpPopulateLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180035280 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180037FF0 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x1800387C0 (RtlpMuiRegTryToAppendLangId.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18005F740 (LdrpLoadResourceFromAlternativeModule.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180061A10 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     RtlGetUILanguageInfo @ 0x18007B9D0 (RtlGetUILanguageInfo.c)
 *     LdrResFallbackLangList @ 0x18007BF40 (LdrResFallbackLangList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18007D580 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlGetFileMUIPath @ 0x18007E370 (RtlGetFileMUIPath.c)
 *     LdrResSearchResource @ 0x1800983B0 (LdrResSearchResource.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800D1784 (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800D24B4 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x1800D294C (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1800E1AA0 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E1C48 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800E1F5C (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800EB31C (RtlpMuiRegLoadLicInformation.c)
 *     LdrLoadAlternateResourceModule @ 0x1800F16E0 (LdrLoadAlternateResourceModule.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180106FE0 (RtlpGetLCIDFromLangInfoNode.c)
 *     RtlpMUIEnumerateFolder @ 0x18010B52C (RtlpMUIEnumerateFolder.c)
 *     LdrResRelease @ 0x18010BB50 (LdrResRelease.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1801124E0 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x180120540 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpSetInstallLanguage @ 0x180140140 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x180140750 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x180149BD0 (RtlpRefreshCachedUILanguage.c)
 *     _RtlMuiRegAddLIPParent @ 0x180149CC0 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014A1D8 (_RtlpMuiRegInitAnyLanguage.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x180033300 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x1800333EC (RtlpLoadNlsData.c)
 *     RtlpMatchUILanguage @ 0x1800D0FEC (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x1800D10DC (RtlpMatchUserLanguage.c)
 *     RtlpIsCustomLocale @ 0x1800F77DC (RtlpIsCustomLocale.c)
 *     __report_rangecheckfailure @ 0x180120A2C (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x180122C70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

char __fastcall RtlCultureNameToLCID(unsigned __int16 *a1, int *a2)
{
  char v2; // r9
  size_t v4; // r8
  unsigned __int16 v5; // bp
  const void *v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rbx
  int v11; // edi
  __int64 v12; // rsi
  wchar_t *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v17; // rbx
  int NameIndex; // eax
  char matched; // al
  wchar_t String2[88]; // [rsp+20h] [rbp-E8h] BYREF

  v2 = 0;
  if ( !a1 )
    return v2;
  if ( !a2 )
    return v2;
  v4 = *a1;
  v5 = 0;
  if ( !(_WORD)v4 )
    return v2;
  v6 = (const void *)*((_QWORD *)a1 + 1);
  if ( !v6 || (unsigned int)(v4 + 2) > 0x55 )
    return v2;
  v7 = *a1;
  memmove(String2, v6, v4);
  v8 = v7 >> 1;
  if ( v8 >= 85 )
    _report_rangecheckfailure();
  String2[v8] = 0;
  if ( g_RegInfo )
  {
    v9 = *(_QWORD *)(g_RegInfo + 24);
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 16) && g_RegInfo && String2[0] )
      {
        v10 = *(_QWORD *)(g_RegInfo + 32);
        if ( v10 )
        {
          v11 = 0;
          v12 = 0LL;
          while ( v11 < *(unsigned __int16 *)(v10 + 6) )
          {
            v13 = (wchar_t *)(*(_QWORD *)(v10 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v10 + 16) + v12));
            if ( v13 == String2 || !wcsicmp(v13, String2) )
            {
              if ( v11 < 0 )
                break;
              goto LABEL_19;
            }
            ++v11;
            v12 += 2LL;
          }
        }
        LOWORD(v11) = -1;
LABEL_19:
        if ( (v11 & 0x8000u) == 0 )
        {
          while ( v5 < *(_WORD *)(v9 + 6) )
          {
            v14 = 28LL * v5;
            v15 = *(_QWORD *)(v9 + 16);
            if ( *(_WORD *)(v14 + v15 + 6) == (_WORD)v11 )
            {
              *a2 = *(unsigned __int16 *)(v14 + v15 + 4);
              return 1;
            }
            ++v5;
          }
        }
      }
    }
  }
  v17 = pTblPtrs;
  if ( !pTblPtrs )
  {
    if ( !(unsigned __int8)RtlpLoadNlsData() )
      return 0;
    v17 = pTblPtrs;
  }
  NameIndex = RtlpNlsGetNameIndex(String2);
  if ( NameIndex < 0 )
  {
    if ( (unsigned __int8)RtlpIsCustomLocale(String2) )
    {
      if ( !(unsigned __int8)RtlpMatchUILanguage(String2) )
      {
        matched = RtlpMatchUserLanguage(String2);
        v2 = 1;
        if ( matched )
          *a2 = 3072;
        else
          *a2 = 4096;
        return v2;
      }
      *a2 = 5120;
      return 1;
    }
    return 0;
  }
  *a2 = *(_DWORD *)(*(_QWORD *)(v17 + 24) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
  return 1;
}
