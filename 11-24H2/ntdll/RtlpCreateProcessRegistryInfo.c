/*
 * XREFs of RtlpCreateProcessRegistryInfo @ 0x18007CC10
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x18007B9D0 (RtlGetUILanguageInfo.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007DD80 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetFileMUIPath @ 0x18007E370 (RtlGetFileMUIPath.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x1800D16D0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800DA0F0 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18010D110 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x18013F570 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x180140140 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x180140750 (RtlpSetPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180141330 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpRefreshCachedUILanguage @ 0x180149BD0 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpInitMuiCriticalSection @ 0x18007CC94 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 */

__int64 __fastcall RtlpCreateProcessRegistryInfo(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int RegistryInfo; // esi

  v2 = g_RegInfo;
  v3 = 0LL;
  RegistryInfo = 0;
  if ( !g_RegInfo )
  {
    RtlpInitMuiCriticalSection(a1, a2);
    RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
    if ( !g_RegInfo )
      RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
    RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
    v2 = g_RegInfo;
  }
  if ( a1 )
  {
    if ( RegistryInfo >= 0 )
      v3 = v2;
    *a1 = v3;
  }
  return (unsigned int)RegistryInfo;
}
