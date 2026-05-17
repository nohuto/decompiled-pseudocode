/*
 * XREFs of RtlpFreeTebLanguageList @ 0x1800EC22C
 * Callers:
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800EBE50 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x1800EBF30 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlpDupTebLanguageList @ 0x1800EC0D4 (RtlpDupTebLanguageList.c)
 *     RtlCleanUpTEBLangLists @ 0x1800EC160 (RtlCleanUpTEBLangLists.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageConfigList @ 0x180035694 (RtlpMuiRegFreeLanguageConfigList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180035EE0 (RtlpMuiRegFreeLanguageList.c)
 */

__int64 __fastcall RtlpFreeTebLanguageList(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
      RtlpMuiRegFreeLanguageList(v2);
    v3 = a1[1];
    if ( v3 )
      RtlpMuiRegFreeLanguageConfigList(v3);
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
  }
  return result;
}
