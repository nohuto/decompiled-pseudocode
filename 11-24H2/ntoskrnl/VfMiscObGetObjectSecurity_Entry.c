/*
 * XREFs of VfMiscObGetObjectSecurity_Entry @ 0x140B9E480
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404B2134 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscObGetObjectSecurity_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 24), 8uLL, *(_QWORD *)a1);
}
