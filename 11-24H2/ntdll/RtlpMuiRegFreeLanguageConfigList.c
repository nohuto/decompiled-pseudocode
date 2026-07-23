/*
 * XREFs of RtlpMuiRegFreeLanguageConfigList @ 0x180015914
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x180014A40 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x180015820 (RtlpUpdateTEBLanguage.c)
 *     RtlpFreeTebLanguageList @ 0x1800CA5CC (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800CC110 (RtlpMuiRegFreeRegistryInfo.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall RtlpMuiRegFreeLanguageConfigList(void *a1)
{
  LOGICAL result; // eax

  if ( a1 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
