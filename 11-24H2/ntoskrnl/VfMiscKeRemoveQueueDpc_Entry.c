/*
 * XREFs of VfMiscKeRemoveQueueDpc_Entry @ 0x140B9FF50
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404AC9C4 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscKeRemoveQueueDpc_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 0x40uLL, *(_QWORD *)a1);
}
