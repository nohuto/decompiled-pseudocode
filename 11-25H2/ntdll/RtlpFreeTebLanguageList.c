/*
 * XREFs of RtlpFreeTebLanguageList @ 0x1800876EC
 * Callers:
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800874B0 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlpDupTebLanguageList @ 0x180087590 (RtlpDupTebLanguageList.c)
 *     RtlCleanUpTEBLangLists @ 0x180087620 (RtlCleanUpTEBLangLists.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x180088970 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageConfigList @ 0x18008D024 (RtlpMuiRegFreeLanguageConfigList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18008D870 (RtlpMuiRegFreeLanguageList.c)
 */

__int64 __fastcall RtlpFreeTebLanguageList(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v5 = *a1;
    if ( v5 )
      RtlpMuiRegFreeLanguageList(v5);
    if ( a1[1] )
      RtlpMuiRegFreeLanguageConfigList();
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1, a4);
  }
  return result;
}
