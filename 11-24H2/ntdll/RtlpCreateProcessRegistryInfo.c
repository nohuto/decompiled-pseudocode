/*
 * XREFs of RtlpCreateProcessRegistryInfo @ 0x180011550
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800016B0 (RtlGetFileMUIPath.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180099AC0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800C7F30 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800C9E60 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x1800CA620 (RtlGetUILanguageInfo.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1801080D0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x18013D760 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x18013E330 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x18013E940 (RtlpSetPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18013F520 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpRefreshCachedUILanguage @ 0x180147F80 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x1800115D4 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpCreateProcessRegistryInfo(_QWORD *a1)
{
  PVOID v1; // rax
  PVOID v2; // rbx
  int RegistryInfo; // esi

  v1 = g_RegInfo;
  v2 = 0LL;
  RegistryInfo = 0;
  if ( !g_RegInfo )
  {
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    if ( !g_RegInfo )
      RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    v1 = g_RegInfo;
  }
  if ( a1 )
  {
    if ( RegistryInfo >= 0 )
      v2 = v1;
    *a1 = v2;
  }
  return (unsigned int)RegistryInfo;
}
