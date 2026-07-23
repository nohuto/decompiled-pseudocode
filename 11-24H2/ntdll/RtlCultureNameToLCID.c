/*
 * XREFs of RtlCultureNameToLCID @ 0x1800141A0
 * Callers:
 *     RtlpMUIEnumerateFolder @ 0x180001138 (RtlpMUIEnumerateFolder.c)
 *     RtlGetFileMUIPath @ 0x1800016B0 (RtlGetFileMUIPath.c)
 *     LdrResFallbackLangList @ 0x180011F70 (LdrResFallbackLangList.c)
 *     RtlGetNeutralFallback @ 0x180012B40 (RtlGetNeutralFallback.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     GetLCIDFromLangListNode @ 0x180014860 (GetLCIDFromLangListNode.c)
 *     RtlpPopulateLanguageConfigList @ 0x180015070 (RtlpPopulateLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180015500 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180018270 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180018A40 (RtlpMuiRegTryToAppendLangId.c)
 *     LdrResSearchResource @ 0x18002D200 (LdrResSearchResource.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180075320 (LdrpLoadResourceFromAlternativeModule.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800775F0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180098E48 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x1800992DC (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18009976C (RtlpLoadInstallLanguageFallback.c)
 *     RtlGetUILanguageInfo @ 0x1800CA620 (RtlGetUILanguageInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800CAFA0 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800CB340 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800CC41C (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1800DD070 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800DD218 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800DD52C (RtlpMuiRegLangInfoMatchesSpec.c)
 *     LdrLoadAlternateResourceModule @ 0x1800EC360 (LdrLoadAlternateResourceModule.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180101F10 (RtlpGetLCIDFromLangInfoNode.c)
 *     LdrResRelease @ 0x180106520 (LdrResRelease.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x18011E770 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpSetInstallLanguage @ 0x18013E330 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x18013E940 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x180147F80 (RtlpRefreshCachedUILanguage.c)
 *     _RtlMuiRegAddLIPParent @ 0x180148070 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x180148588 (_RtlpMuiRegInitAnyLanguage.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x1800143C0 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x1800144AC (RtlpLoadNlsData.c)
 *     RtlpMatchUserLanguage @ 0x18009A410 (RtlpMatchUserLanguage.c)
 *     RtlpMatchUILanguage @ 0x18009A584 (RtlpMatchUILanguage.c)
 *     RtlpIsCustomLocale @ 0x1800F2354 (RtlpIsCustomLocale.c)
 *     __report_rangecheckfailure @ 0x18011EC5C (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // r9
  size_t Length; // r8
  unsigned __int16 v5; // bp
  wchar_t *Buffer; // rdx
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
  if ( !String )
    return v2;
  if ( !Lcid )
    return v2;
  Length = String->Length;
  v5 = 0;
  if ( !(_WORD)Length )
    return v2;
  Buffer = String->Buffer;
  if ( !Buffer || (unsigned int)(Length + 2) > 0x55 )
    return v2;
  v7 = String->Length;
  memmove(String2, Buffer, Length);
  v8 = v7 >> 1;
  if ( v8 >= 85 )
    _report_rangecheckfailure();
  String2[v8] = 0;
  if ( g_RegInfo )
  {
    v9 = *((_QWORD *)g_RegInfo + 3);
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 16) && g_RegInfo && String2[0] )
      {
        v10 = *((_QWORD *)g_RegInfo + 4);
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
              *Lcid = *(unsigned __int16 *)(v14 + v15 + 4);
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
          *Lcid = 3072;
        else
          *Lcid = 4096;
        return v2;
      }
      *Lcid = 5120;
      return 1;
    }
    return 0;
  }
  *Lcid = *(_DWORD *)(*(_QWORD *)(v17 + 24) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
  return 1;
}
