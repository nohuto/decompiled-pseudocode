/*
 * XREFs of RtlpMuiRegFreeLanguageList @ 0x180016160
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x18000F8D0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180011A20 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpUpdateTEBLanguage @ 0x180015820 (RtlpUpdateTEBLanguage.c)
 *     LdrpMergeLangFallbackLists @ 0x180015940 (LdrpMergeLangFallbackLists.c)
 *     RtlpQueryDefaultUILanguage @ 0x180015F40 (RtlpQueryDefaultUILanguage.c)
 *     InitializeTEBUserLangList @ 0x180016D00 (InitializeTEBUserLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x1800C798C (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800C7F30 (RtlGetUserPreferredUILanguages.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800C8700 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlpInitializeUserList @ 0x1800C87E0 (RtlpInitializeUserList.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x1800C99F0 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800C9E60 (RtlGetSystemPreferredUILanguages.c)
 *     RtlCleanUpTEBLangLists @ 0x1800CA500 (RtlCleanUpTEBLangLists.c)
 *     RtlpFreeTebLanguageList @ 0x1800CA5CC (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800CC110 (RtlpMuiRegFreeRegistryInfo.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall RtlpMuiRegFreeLanguageList(_BYTE *a1)
{
  LOGICAL result; // eax

  if ( a1 )
  {
    if ( (a1[40] & 0x40) == 0 )
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
