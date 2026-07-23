/*
 * XREFs of AccelSetDescriptorAddressSpace @ 0x140664588
 * Callers:
 *     SmHwInitializeAccelDescriptor @ 0x14079CECC (SmHwInitializeAccelDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AccelSetDescriptorAddressSpace(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 40);
  *(_DWORD *)(a1 + 16) = result;
  return result;
}
