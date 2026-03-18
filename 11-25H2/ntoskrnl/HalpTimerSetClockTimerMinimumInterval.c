/*
 * XREFs of HalpTimerSetClockTimerMinimumInterval @ 0x1405447E4
 * Callers:
 *     HaliSetSystemInformation @ 0x1406F69E4 (HaliSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerSetClockTimerMinimumInterval(int a1)
{
  HalpTimerMinIncrement = a1;
  return 0LL;
}
