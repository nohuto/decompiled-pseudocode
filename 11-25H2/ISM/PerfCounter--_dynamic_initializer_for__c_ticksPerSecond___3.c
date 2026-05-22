/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___3 @ 0x180009B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___3()
{
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  Frequency.QuadPart = 0LL;
  return QueryPerformanceFrequency(&Frequency);
}
