/*
 * XREFs of VfMiscObfReferenceObjectWithTag_Entry @ 0x140BA05F0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404AC9C4 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscObfReferenceObjectWithTag_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 8uLL, *(_QWORD *)a1);
}
