/*
 * XREFs of PopAcquireUserPresentSpinLock @ 0x1404A3EA8
 * Callers:
 *     PopSetSystemAwayMode @ 0x140753DC0 (PopSetSystemAwayMode.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __fastcall PopAcquireUserPresentSpinLock(KIRQL *a1)
{
  KIRQL result; // al

  result = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
  *a1 = result;
  return result;
}
