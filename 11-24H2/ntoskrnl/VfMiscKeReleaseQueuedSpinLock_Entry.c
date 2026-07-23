/*
 * XREFs of VfMiscKeReleaseQueuedSpinLock_Entry @ 0x140B9FEF0
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckKeLowerIrql @ 0x140BAA1D4 (ViMiscCheckKeLowerIrql.c)
 */

__int64 __fastcall VfMiscKeReleaseQueuedSpinLock_Entry(__int64 a1)
{
  __int64 v1; // rdx

  v1 = a1;
  LOBYTE(v1) = *(_BYTE *)(a1 + 8);
  return ViMiscCheckKeLowerIrql(KeGetCurrentIrql(), v1, *(_QWORD *)a1);
}
