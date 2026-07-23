/*
 * XREFs of RtlpMuiRegFreeLanguageConfigList @ 0x18008D024
 * Callers:
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800871E0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpFreeTebLanguageList @ 0x1800876EC (RtlpFreeTebLanguageList.c)
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x18008CF30 (RtlpUpdateTEBLanguage.c)
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
