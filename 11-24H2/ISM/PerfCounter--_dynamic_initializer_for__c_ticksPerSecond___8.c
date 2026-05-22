/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___8 @ 0x18000A330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___8()
{
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  Frequency.QuadPart = 0LL;
  return QueryPerformanceFrequency(&Frequency);
}
