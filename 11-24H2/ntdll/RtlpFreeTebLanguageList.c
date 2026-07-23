/*
 * XREFs of RtlpFreeTebLanguageList @ 0x1800CA5CC
 * Callers:
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800C8700 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x1800C99F0 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlpDupTebLanguageList @ 0x1800CA478 (RtlpDupTebLanguageList.c)
 *     RtlCleanUpTEBLangLists @ 0x1800CA500 (RtlCleanUpTEBLangLists.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageConfigList @ 0x180015914 (RtlpMuiRegFreeLanguageConfigList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180016160 (RtlpMuiRegFreeLanguageList.c)
 */

LOGICAL __fastcall RtlpFreeTebLanguageList(_QWORD *a1)
{
  _BYTE *v2; // rcx
  void *v3; // rcx
  LOGICAL result; // eax

  if ( a1 )
  {
    v2 = (_BYTE *)*a1;
    if ( v2 )
      RtlpMuiRegFreeLanguageList(v2);
    v3 = (void *)a1[1];
    if ( v3 )
      RtlpMuiRegFreeLanguageConfigList(v3);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
