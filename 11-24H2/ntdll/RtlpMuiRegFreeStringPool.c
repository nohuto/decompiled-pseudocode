/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x1800EB2F0
 * Callers:
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800EB0C0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegResizeStringPool @ 0x180149AEC (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiRegFreeStringPool(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
