/*
 * XREFs of VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry @ 0x140B9DC70
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404B2134 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry(__int64 a1)
{
  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 8uLL, *(_QWORD *)a1);
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 0x18uLL, *(_QWORD *)a1);
}
