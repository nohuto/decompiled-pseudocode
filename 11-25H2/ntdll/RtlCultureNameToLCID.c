/*
 * XREFs of RtlCultureNameToLCID @ 0x18005C370
 * Callers:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B3A0 (LdrpLoadResourceFromAlternativeModule.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001D670 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x18005B490 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlGetNeutralFallback @ 0x18005C940 (RtlGetNeutralFallback.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18005E960 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x18005F1D0 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpMuiRegLoadLicInformation @ 0x180086A64 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800890A4 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180089F60 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlGetUILanguageInfo @ 0x18008A190 (RtlGetUILanguageInfo.c)
 *     LdrResFallbackLangList @ 0x18008ADF0 (LdrResFallbackLangList.c)
 *     RtlpPopulateLanguageConfigList @ 0x18008C780 (RtlpPopulateLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18008CC10 (RtlpLoadPolicyLanguageSpec.c)
 *     GetLCIDFromLangListNode @ 0x18008D8A0 (GetLCIDFromLangListNode.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800A7164 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x1800A781C (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800A7CAC (RtlpLoadInstallLanguageFallback.c)
 *     RtlGetFileMUIPath @ 0x1800A9A40 (RtlGetFileMUIPath.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800EF0B0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800EF3C4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     LdrLoadAlternateResourceModule @ 0x1800F3250 (LdrLoadAlternateResourceModule.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x1801098F0 (RtlpGetLCIDFromLangInfoNode.c)
 *     RtlpMUIEnumerateFolder @ 0x18010DBCC (RtlpMUIEnumerateFolder.c)
 *     LdrResRelease @ 0x18010E1A0 (LdrResRelease.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x180121E10 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpSetInstallLanguage @ 0x180141830 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x180141E40 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x18014B180 (RtlpRefreshCachedUILanguage.c)
 *     _RtlMuiRegAddLIPParent @ 0x18014B270 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014B788 (_RtlpMuiRegInitAnyLanguage.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x18005C590 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18005C67C (RtlpLoadNlsData.c)
 *     RtlpIsCustomLocale @ 0x1800F943C (RtlpIsCustomLocale.c)
 *     RtlpMatchUserLanguage @ 0x180115B18 (RtlpMatchUserLanguage.c)
 *     RtlpMatchUILanguage @ 0x180118314 (RtlpMatchUILanguage.c)
 *     __report_rangecheckfailure @ 0x18012250C (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // r9
  size_t Length; // r8
  unsigned __int16 v5; // bp
  wchar_t *Buffer; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rsi
  wchar_t *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v18; // rbx
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
  v9 = v7 >> 1;
  if ( v9 >= 85 )
    _report_rangecheckfailure(v8);
  String2[v9] = 0;
  if ( g_RegInfo )
  {
    v10 = *((_QWORD *)g_RegInfo + 3);
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 16) && g_RegInfo && String2[0] )
      {
        v11 = *((_QWORD *)g_RegInfo + 4);
        if ( v11 )
        {
          v12 = 0;
          v13 = 0LL;
          while ( v12 < *(unsigned __int16 *)(v11 + 6) )
          {
            v14 = (wchar_t *)(*(_QWORD *)(v11 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v11 + 16) + v13));
            if ( v14 == String2 || !wcsicmp(v14, String2) )
            {
              if ( v12 < 0 )
                break;
              goto LABEL_19;
            }
            ++v12;
            v13 += 2LL;
          }
        }
        LOWORD(v12) = -1;
LABEL_19:
        if ( (v12 & 0x8000u) == 0 )
        {
          while ( v5 < *(_WORD *)(v10 + 6) )
          {
            v15 = 28LL * v5;
            v16 = *(_QWORD *)(v10 + 16);
            if ( *(_WORD *)(v15 + v16 + 6) == (_WORD)v12 )
            {
              *Lcid = *(unsigned __int16 *)(v15 + v16 + 4);
              return 1;
            }
            ++v5;
          }
        }
      }
    }
  }
  v18 = pTblPtrs;
  if ( !pTblPtrs )
  {
    if ( !(unsigned __int8)RtlpLoadNlsData() )
      return 0;
    v18 = pTblPtrs;
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
  *Lcid = *(_DWORD *)(*(_QWORD *)(v18 + 24) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
  return 1;
}
