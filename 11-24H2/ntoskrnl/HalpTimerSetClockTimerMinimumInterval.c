/*
 * XREFs of HalpTimerSetClockTimerMinimumInterval @ 0x1405470D4
 * Callers:
 *     HaliSetSystemInformation @ 0x1407027D4 (HaliSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerSetClockTimerMinimumInterval(int a1)
{
  HalpTimerMinIncrement = a1;
  return 0LL;
}
