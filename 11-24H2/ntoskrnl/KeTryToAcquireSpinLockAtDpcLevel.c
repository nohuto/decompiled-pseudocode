/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x140459EA0
 * Callers:
 *     <none>
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x140459EB8 (KxTryToAcquireSpinLock.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  return KxTryToAcquireSpinLock(SpinLock);
}
