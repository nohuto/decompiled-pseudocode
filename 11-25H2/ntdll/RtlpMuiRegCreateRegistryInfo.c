/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x18011A200
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xA8uLL);
  if ( result )
    *result |= 0x400u;
  return result;
}
