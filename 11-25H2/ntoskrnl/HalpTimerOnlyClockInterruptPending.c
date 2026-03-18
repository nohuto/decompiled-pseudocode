/*
 * XREFs of HalpTimerOnlyClockInterruptPending @ 0x1405446E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x14053FAA0 (HalpInterruptGetHighestPriorityInterrupt.c)
 */

char HalpTimerOnlyClockInterruptPending()
{
  int v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  HalpInterruptGetHighestPriorityInterrupt(&v1);
  return 0;
}
