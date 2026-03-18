/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x140B5ECB0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PpmConvertTime @ 0x1403E7C50 (PpmConvertTime.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  __int64 result; // rax

  qword_140F0B1F0 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F06530;
  v0 = &qword_1400033F8;
  v1 = 59LL;
  qword_140F0B1B8 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
  do
  {
    if ( (v0[1] & 0x20000000) != 0 )
    {
      v3 = *(__int64 *)((char *)&qword_140F0B0D8 + *v0);
      if ( v3 > PopSstDiagResumeClock )
        v3 -= qword_140F06528;
      v2 = *v0;
      *(__int64 *)((char *)&qword_140F0B0D8 + v2) = PpmConvertTime(
                                                      v3,
                                                      1000000LL * KeGetCurrentPrcb()->MHz,
                                                      PopQpcFrequency);
    }
    v0 += 3;
    --v1;
  }
  while ( v1 );
  result = qword_140F0B1B0 - qword_140F0B148;
  qword_140F0B140 = qword_140F0B1B0 - qword_140F0B148;
  return result;
}
