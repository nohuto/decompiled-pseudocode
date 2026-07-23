/*
 * XREFs of HalpTimerSetClockTimerMinimumInterval @ 0x140544994
 * Callers:
 *     HaliSetSystemInformation @ 0x140700414 (HaliSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerSetClockTimerMinimumInterval(int a1)
{
  HalpTimerMinIncrement = a1;
  return 0LL;
}
