/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x1404633B0
 * Callers:
 *     <none>
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x1404633C8 (KxTryToAcquireSpinLock.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  return KxTryToAcquireSpinLock(SpinLock);
}
