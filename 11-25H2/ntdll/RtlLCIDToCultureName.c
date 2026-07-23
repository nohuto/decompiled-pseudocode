/*
 * XREFs of RtlLCIDToCultureName @ 0x18005B640
 * Callers:
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001D670 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18005B950 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18005C790 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpComputeLangListCheckSum @ 0x18005CCE0 (RtlpComputeLangListCheckSum.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18005E960 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlUnicodeStringToLcid @ 0x180089820 (RtlUnicodeStringToLcid.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180089B50 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlGetUILanguageInfo @ 0x18008A190 (RtlGetUILanguageInfo.c)
 *     GetNameFromLangListNode @ 0x18008BF90 (GetNameFromLangListNode.c)
 *     LdrpMergeLangFallbackLists @ 0x18008D050 (LdrpMergeLangFallbackLists.c)
 *     RtlpAddNeutralsToMergedList @ 0x1800A80C0 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800A93A0 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlGetFileMUIPath @ 0x1800A9A40 (RtlGetFileMUIPath.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800DE3D0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x1800EDA84 (RtlpInitAndCallLcidToCultureName.c)
 *     RtlpCleanupRegistryKeys @ 0x180140C60 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1801410C0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x180141448 (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpSetInstallLanguage @ 0x180141830 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x180141E40 (RtlpSetPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180142A20 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x18014ABF0 (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014BD20 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x18014C168 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18005B950 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpNlsGetLcidIndex @ 0x18005BBE0 (RtlpNlsGetLcidIndex.c)
 *     RtlpLoadNlsData @ 0x18005C67C (RtlpLoadNlsData.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x1800DF090 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpGetUserLocaleName @ 0x180115BDC (RtlpGetUserLocaleName.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180118410 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  int inited; // r14d
  BOOLEAN v3; // bp
  LCID v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbx
  size_t v10; // rax
  unsigned __int16 Length; // r9
  unsigned __int64 MaximumLength; // rdx
  unsigned __int64 v13; // rdx
  wchar_t *Buffer; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // rbx
  wchar_t v17; // ax
  wchar_t *v18; // rax
  int LcidIndex; // eax
  __int64 v21; // rcx
  wchar_t *v22; // rdx
  _WORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // rdi
  unsigned __int16 v27; // bx
  __int16 v28; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-F0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE Src[176]; // [rsp+40h] [rbp-D8h] BYREF

  inited = 0;
  v3 = 0;
  v28 = 0;
  v5 = Lcid;
  if ( !Lcid || !String || Lcid == 4096 )
    return v3;
  if ( g_RegInfo )
  {
    if ( (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(g_RegInfo, (unsigned __int16)Lcid, 0LL, &v28) >= 0 )
    {
      v6 = *(__int16 *)(*(_QWORD *)(*((_QWORD *)g_RegInfo + 3) + 16LL) + 28LL * v28 + 6);
      if ( (__int16)v6 > 0 )
      {
        v7 = *((_QWORD *)g_RegInfo + 4);
        DestinationString = 0LL;
        v8 = *(__int16 *)(*(_QWORD *)(v7 + 16) + 2 * v6);
        v9 = *(_QWORD *)(v7 + 24) + 2 * v8;
        LOWORD(v10) = 0;
        if ( v9 )
        {
          v10 = 2 * wcslen((const wchar_t *)(*(_QWORD *)(v7 + 24) + 2 * v8));
          if ( v10 >= 0xFFFE )
            LOWORD(v10) = -4;
          Length = v10;
        }
        else
        {
          Length = DestinationString.Length;
        }
        MaximumLength = String->MaximumLength;
        if ( (unsigned __int16)v10 > (unsigned __int16)MaximumLength )
          return v3;
        v13 = MaximumLength >> 1;
        Buffer = String->Buffer;
        if ( !v13 )
          return v3;
        v15 = 2147483646 - v13;
        v16 = v9 - (_QWORD)Buffer;
        do
        {
          if ( !(v15 + v13) )
            break;
          v17 = *(wchar_t *)((char *)Buffer + v16);
          if ( !v17 )
            break;
          *Buffer++ = v17;
          --v13;
        }
        while ( v13 );
        v18 = Buffer - 1;
        if ( v13 )
          v18 = Buffer;
        *v18 = 0;
        if ( !v13 )
          return v3;
        String->Length = Length;
        return 1;
      }
    }
  }
  v29 = 85LL;
  DestinationString = 0LL;
  if ( !String->Buffer )
    return v3;
  if ( v5 == 5120 )
  {
    if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, Src, &v29) < 0 )
      return v3;
    if ( (unsigned int)v29 >= 0x55 || (v26 = 2LL * (unsigned int)v29, String->MaximumLength <= v26) )
    {
      inited = -1073741789;
    }
    else
    {
      v27 = 2 * v29;
      memmove(String->Buffer, Src, (unsigned __int16)(2 * v29));
      String->Buffer[v26 / 2] = 0;
      String->Length = v27;
    }
LABEL_35:
    if ( inited < 0 )
      return v3;
    return 1;
  }
  if ( ((v5 - 1024) & 0xFFFFF7FF) == 0 )
  {
    DestinationString.Buffer = (wchar_t *)Src;
    DestinationString.MaximumLength = 170;
    if ( (int)RtlpGetUserLocaleName(&DestinationString) < 0 )
      return v3;
    v22 = DestinationString.Buffer;
    v25 = DestinationString.Length >> 1;
    goto LABEL_34;
  }
  if ( pTblPtrs || (unsigned __int8)RtlpLoadNlsData() )
  {
    if ( v5 == 2048 )
      v5 = gSystemLocale;
    LcidIndex = RtlpNlsGetLcidIndex(v5);
    if ( LcidIndex >= 0 )
    {
      _mm_lfence();
      v21 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + 8LL * LcidIndex + 6);
      v22 = (wchar_t *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v21);
      if ( v22 )
      {
        v23 = (_WORD *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v21);
        v24 = 84LL;
        do
        {
          if ( !*v23 )
            break;
          ++v23;
          --v24;
        }
        while ( v24 );
        if ( v24 )
        {
          v25 = 84 - v24;
LABEL_34:
          inited = RtlpInitUnicodeStringUsingBuffer(0LL, v22, v25, String);
          goto LABEL_35;
        }
      }
    }
  }
  return v3;
}
