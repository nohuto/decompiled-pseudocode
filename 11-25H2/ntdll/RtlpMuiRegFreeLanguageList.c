/*
 * XREFs of RtlpMuiRegFreeLanguageList @ 0x18008D870
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x180059D10 (RtlSetProcessPreferredUILanguages.c)
 *     InitializeTEBUserLangList @ 0x18005D320 (InitializeTEBUserLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800871E0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800874B0 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlCleanUpTEBLangLists @ 0x180087620 (RtlCleanUpTEBLangLists.c)
 *     RtlpFreeTebLanguageList @ 0x1800876EC (RtlpFreeTebLanguageList.c)
 *     RtlpInitializeUserList @ 0x180087740 (RtlpInitializeUserList.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x180088970 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180089230 (RtlGetSystemPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18008B390 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpUpdateTEBLanguage @ 0x18008CF30 (RtlpUpdateTEBLanguage.c)
 *     LdrpMergeLangFallbackLists @ 0x18008D050 (LdrpMergeLangFallbackLists.c)
 *     RtlpQueryDefaultUILanguage @ 0x18008D650 (RtlpQueryDefaultUILanguage.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x1800A84AC (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800A8A50 (RtlGetUserPreferredUILanguages.c)
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
