/*
 * XREFs of RtlLCIDToCultureName @ 0x1800360C0
 * Callers:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800122F0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800322A0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpAddNeutralsToMergedList @ 0x180033B90 (RtlpAddNeutralsToMergedList.c)
 *     GetNameFromLangListNode @ 0x180033ED0 (GetNameFromLangListNode.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180034340 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x1800356C0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180035F10 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpComputeLangListCheckSum @ 0x180036440 (RtlpComputeLangListCheckSum.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180037FF0 (LdrpConvertLangFallbackListToMultiSz.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180061A10 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlGetUILanguageInfo @ 0x18007B9D0 (RtlGetUILanguageInfo.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18007D170 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlGetFileMUIPath @ 0x18007E370 (RtlGetFileMUIPath.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800E1030 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x1800ED404 (RtlpInitAndCallLcidToCultureName.c)
 *     RtlUnicodeStringToLcid @ 0x180116D44 (RtlUnicodeStringToLcid.c)
 *     RtlpCleanupRegistryKeys @ 0x18013F570 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x18013F9D0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x18013FD58 (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpSetInstallLanguage @ 0x180140140 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x180140750 (RtlpSetPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180141330 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x180149640 (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014A770 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x18014ABB8 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800122F0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpLoadNlsData @ 0x1800333EC (RtlpLoadNlsData.c)
 *     RtlpNlsGetLcidIndex @ 0x1800363D0 (RtlpNlsGetLcidIndex.c)
 *     RtlpGetUserLocaleName @ 0x1800D2DDC (RtlpGetUserLocaleName.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800D2EC0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x1800D30B0 (RtlpInitUnicodeStringUsingBuffer.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlLCIDToCultureName(unsigned int a1, __int64 a2)
{
  int inited; // r14d
  unsigned __int8 v3; // bp
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbx
  size_t v10; // rax
  unsigned __int16 Length; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  _WORD *v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // rbx
  __int16 v17; // ax
  _WORD *v18; // rax
  int LcidIndex; // eax
  __int64 v21; // rcx
  wchar_t *Buffer; // rdx
  _WORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // rdi
  __int16 v27; // bx
  __int16 v28; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-F0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE Src[176]; // [rsp+40h] [rbp-D8h] BYREF

  inited = 0;
  v3 = 0;
  v28 = 0;
  v5 = a1;
  if ( !a1 || !a2 || a1 == 4096 )
    return v3;
  if ( g_RegInfo )
  {
    if ( (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(g_RegInfo, a1, 0, &v28) >= 0 )
    {
      v6 = *(__int16 *)(*(_QWORD *)(*(_QWORD *)(g_RegInfo + 24) + 16LL) + 28LL * v28 + 6);
      if ( (__int16)v6 > 0 )
      {
        v7 = *(_QWORD *)(g_RegInfo + 32);
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
        v12 = *(unsigned __int16 *)(a2 + 2);
        if ( (unsigned __int16)v10 > (unsigned __int16)v12 )
          return v3;
        v13 = v12 >> 1;
        v14 = *(_WORD **)(a2 + 8);
        if ( !v13 )
          return v3;
        v15 = 2147483646 - v13;
        v16 = v9 - (_QWORD)v14;
        do
        {
          if ( !(v15 + v13) )
            break;
          v17 = *(_WORD *)((char *)v14 + v16);
          if ( !v17 )
            break;
          *v14++ = v17;
          --v13;
        }
        while ( v13 );
        v18 = v14 - 1;
        if ( v13 )
          v18 = v14;
        *v18 = 0;
        if ( !v13 )
          return v3;
        *(_WORD *)a2 = Length;
        return 1;
      }
    }
  }
  v29 = 85LL;
  DestinationString = 0LL;
  if ( !*(_QWORD *)(a2 + 8) )
    return v3;
  if ( v5 == 5120 )
  {
    if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, Src, &v29) < 0 )
      return v3;
    if ( (unsigned int)v29 >= 0x55 || (v26 = 2LL * (unsigned int)v29, *(unsigned __int16 *)(a2 + 2) <= v26) )
    {
      inited = -1073741789;
    }
    else
    {
      v27 = 2 * v29;
      memmove(*(void **)(a2 + 8), Src, (unsigned __int16)(2 * v29));
      *(_WORD *)(v26 + *(_QWORD *)(a2 + 8)) = 0;
      *(_WORD *)a2 = v27;
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
    Buffer = DestinationString.Buffer;
    v25 = DestinationString.Length >> 1;
    goto LABEL_34;
  }
  if ( pTblPtrs || RtlpLoadNlsData() )
  {
    if ( v5 == 2048 )
      v5 = gSystemLocale;
    LcidIndex = RtlpNlsGetLcidIndex(v5);
    if ( LcidIndex >= 0 )
    {
      _mm_lfence();
      v21 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + 8LL * LcidIndex + 6);
      Buffer = (wchar_t *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v21);
      if ( Buffer )
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
          inited = RtlpInitUnicodeStringUsingBuffer(0LL, Buffer, v25, a2);
          goto LABEL_35;
        }
      }
    }
  }
  return v3;
}
