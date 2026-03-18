/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x14081C19C
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140697138 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( result )
    *result |= 0x400u;
  return result;
}
