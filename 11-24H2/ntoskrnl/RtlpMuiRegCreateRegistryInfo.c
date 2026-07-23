/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x14082C70C
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1406A3368 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = (_DWORD *)ExAllocatePool2(0x100uLL, 0xA8uLL, 0x72746C6Du);
  if ( result )
    *result |= 0x400u;
  return result;
}
