/*
 * XREFs of RtlLCIDToCultureName @ 0x180016340
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800016B0 (RtlGetFileMUIPath.c)
 *     RtlpAddNeutralsToMergedList @ 0x180012510 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800145C0 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x180015940 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180016190 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpComputeLangListCheckSum @ 0x1800166C0 (RtlpComputeLangListCheckSum.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180018270 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003ECF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800775F0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     GetNameFromLangListNode @ 0x1800C7870 (GetNameFromLangListNode.c)
 *     RtlGetUILanguageInfo @ 0x1800CA620 (RtlGetUILanguageInfo.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x1800CAB90 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlUnicodeStringToLcid @ 0x1800CB240 (RtlUnicodeStringToLcid.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800DC580 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x1800E83D4 (RtlpInitAndCallLcidToCultureName.c)
 *     RtlpCleanupRegistryKeys @ 0x18013D760 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x18013DBC0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x18013DF48 (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpSetInstallLanguage @ 0x18013E330 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x18013E940 (RtlpSetPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18013F520 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x1801479F0 (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180148B20 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x180148F68 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlpLoadNlsData @ 0x1800144AC (RtlpLoadNlsData.c)
 *     RtlpNlsGetLcidIndex @ 0x180016650 (RtlpNlsGetLcidIndex.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003ECF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpGetUserLocaleName @ 0x180099D30 (RtlpGetUserLocaleName.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180099E20 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18009A010 (RtlpInitUnicodeStringUsingBuffer.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  PVOID v2; // r8
  ULONG *v3; // r9
  int inited; // r14d
  BOOLEAN v5; // bp
  PUNICODE_STRING v6; // rsi
  LCID v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rbx
  size_t v12; // rax
  unsigned __int16 Length; // r9
  unsigned __int64 MaximumLength; // rdx
  unsigned __int64 v15; // rdx
  wchar_t *Buffer; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rbx
  wchar_t v19; // ax
  wchar_t *v20; // rax
  int LcidIndex; // eax
  __int64 v23; // rcx
  wchar_t *v24; // rdx
  _WORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int64 v28; // rdi
  unsigned __int16 v29; // bx
  __int16 v30; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v31; // [rsp+28h] [rbp-F0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE Src[176]; // [rsp+40h] [rbp-D8h] BYREF

  inited = 0;
  v5 = 0;
  v30 = 0;
  v6 = String;
  v7 = Lcid;
  if ( !Lcid || !String || Lcid == 4096 )
    return v5;
  v8 = (__int64)g_RegInfo;
  if ( g_RegInfo )
  {
    if ( (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(g_RegInfo, (unsigned __int16)v7, 0LL, &v30) >= 0 )
    {
      v2 = g_RegInfo;
      v8 = 28LL * v30;
      String = (PUNICODE_STRING)*(__int16 *)(*(_QWORD *)(*((_QWORD *)g_RegInfo + 3) + 16LL) + v8 + 6);
      if ( (__int16)String > 0 )
      {
        v9 = *((_QWORD *)g_RegInfo + 4);
        DestinationString = 0LL;
        v10 = *(__int16 *)(*(_QWORD *)(v9 + 16) + 2LL * (_QWORD)String);
        v11 = *(_QWORD *)(v9 + 24) + 2 * v10;
        LOWORD(v12) = 0;
        if ( v11 )
        {
          v12 = 2 * wcslen((const wchar_t *)(*(_QWORD *)(v9 + 24) + 2 * v10));
          if ( v12 >= 0xFFFE )
            LOWORD(v12) = -4;
          Length = v12;
        }
        else
        {
          Length = DestinationString.Length;
        }
        MaximumLength = v6->MaximumLength;
        if ( (unsigned __int16)v12 > (unsigned __int16)MaximumLength )
          return v5;
        v15 = MaximumLength >> 1;
        Buffer = v6->Buffer;
        if ( !v15 )
          return v5;
        v17 = 2147483646 - v15;
        v18 = v11 - (_QWORD)Buffer;
        do
        {
          if ( !(v17 + v15) )
            break;
          v19 = *(wchar_t *)((char *)Buffer + v18);
          if ( !v19 )
            break;
          *Buffer++ = v19;
          --v15;
        }
        while ( v15 );
        v20 = Buffer - 1;
        if ( v15 )
          v20 = Buffer;
        *v20 = 0;
        if ( !v15 )
          return v5;
        v6->Length = Length;
        return 1;
      }
    }
  }
  v31 = 85LL;
  DestinationString = 0LL;
  if ( !v6->Buffer )
    return v5;
  if ( v7 == 5120 )
  {
    if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, Src, &v31) < 0 )
      return v5;
    if ( (unsigned int)v31 >= 0x55 || (v28 = 2LL * (unsigned int)v31, v6->MaximumLength <= v28) )
    {
      inited = -1073741789;
    }
    else
    {
      v29 = 2 * v31;
      memmove(v6->Buffer, Src, (unsigned __int16)(2 * v31));
      v6->Buffer[v28 / 2] = 0;
      v6->Length = v29;
    }
LABEL_35:
    if ( inited < 0 )
      return v5;
    return 1;
  }
  if ( ((v7 - 1024) & 0xFFFFF7FF) == 0 )
  {
    DestinationString.Buffer = (wchar_t *)Src;
    DestinationString.MaximumLength = 170;
    if ( (int)RtlpGetUserLocaleName(&DestinationString) < 0 )
      return v5;
    v24 = DestinationString.Buffer;
    v27 = DestinationString.Length >> 1;
    goto LABEL_34;
  }
  if ( pTblPtrs || RtlpLoadNlsData(v8, (__int64)String, (__int64)v2, v3) )
  {
    if ( v7 == 2048 )
      v7 = gSystemLocale;
    LcidIndex = RtlpNlsGetLcidIndex(v7);
    if ( LcidIndex >= 0 )
    {
      _mm_lfence();
      v23 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + 8LL * LcidIndex + 6);
      v24 = (wchar_t *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v23);
      if ( v24 )
      {
        v25 = (_WORD *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v23);
        v26 = 84LL;
        do
        {
          if ( !*v25 )
            break;
          ++v25;
          --v26;
        }
        while ( v26 );
        if ( v26 )
        {
          v27 = 84 - v26;
LABEL_34:
          inited = RtlpInitUnicodeStringUsingBuffer(0LL, v24, v27, v6);
          goto LABEL_35;
        }
      }
    }
  }
  return v5;
}
