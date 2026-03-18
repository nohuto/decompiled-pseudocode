/*
 * XREFs of PpmResetPerformanceAccumulation @ 0x140448010
 * Callers:
 *     PpmResetPerfTimes @ 0x140447F1C (PpmResetPerfTimes.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
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
