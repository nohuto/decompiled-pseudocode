/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x140464050
 * Callers:
 *     <none>
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x140464068 (KxTryToAcquireSpinLock.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  return KxTryToAcquireSpinLock(SpinLock);
}
