/*
 * XREFs of PopAcquireUserPresentSpinLock @ 0x1404A3E28
 * Callers:
 *     PopSetSystemAwayMode @ 0x140747CD0 (PopSetSystemAwayMode.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __fastcall PopAcquireUserPresentSpinLock(KIRQL *a1)
{
  KIRQL result; // al

  result = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
  *a1 = result;
  return result;
}
