/*
 * XREFs of NdisDprAcquireSpinLock @ 0x1400DB6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisDprAcquireSpinLock(KSPIN_LOCK *a1)
{
  KeAcquireSpinLockAtDpcLevel(a1);
}
