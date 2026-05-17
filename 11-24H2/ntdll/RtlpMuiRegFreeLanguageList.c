/*
 * XREFs of RtlpMuiRegFreeLanguageList @ 0x180035EE0
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x180031240 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpUpdateTEBLanguage @ 0x1800355A0 (RtlpUpdateTEBLanguage.c)
 *     LdrpMergeLangFallbackLists @ 0x1800356C0 (LdrpMergeLangFallbackLists.c)
 *     RtlpQueryDefaultUILanguage @ 0x180035CC0 (RtlpQueryDefaultUILanguage.c)
 *     InitializeTEBUserLangList @ 0x180036A80 (InitializeTEBUserLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18007C4E0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpInitializeUserList @ 0x18007D9E0 (RtlpInitializeUserList.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007DD80 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x1800D9B58 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800DA0F0 (RtlGetUserPreferredUILanguages.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800EB0C0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800EBE50 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x1800EBF30 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlCleanUpTEBLangLists @ 0x1800EC160 (RtlCleanUpTEBLangLists.c)
 *     RtlpFreeTebLanguageList @ 0x1800EC22C (RtlpFreeTebLanguageList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegFreeLanguageList(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 40) & 0x40) == 0 )
      return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
