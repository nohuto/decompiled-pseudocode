/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x180087410
 * Callers:
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800871E0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegResizeStringPool @ 0x18014B09C (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall RtlpMuiRegFreeStringPool(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( BaseAddress )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return result;
}
