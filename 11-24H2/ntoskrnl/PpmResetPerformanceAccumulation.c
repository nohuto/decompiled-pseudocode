/*
 * XREFs of PpmResetPerformanceAccumulation @ 0x140440730
 * Callers:
 *     PpmResetPerfTimes @ 0x14044063C (PpmResetPerfTimes.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall PpmResetPerformanceAccumulation(LARGE_INTEGER *a1)
{
  LARGE_INTEGER result; // rax

  if ( _bittest64((const signed __int64 *)&a1[4596], 0x27u) )
    a1[4385].QuadPart = __readmsr(0xDB2u);
  a1[4371].QuadPart = __rdtsc();
  result = KeQueryPerformanceCounter(0LL);
  a1[4375] = result;
  return result;
}
