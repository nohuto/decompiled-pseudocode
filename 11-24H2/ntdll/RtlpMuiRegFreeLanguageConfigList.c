/*
 * XREFs of RtlpMuiRegFreeLanguageConfigList @ 0x180035694
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x1800347C0 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x1800355A0 (RtlpUpdateTEBLanguage.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800EB0C0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpFreeTebLanguageList @ 0x1800EC22C (RtlpFreeTebLanguageList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegFreeLanguageConfigList(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
