/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x140B6DD64
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmConvertTime @ 0x14032D070 (PpmConvertTime.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 Prcb; // rax
  __int64 *v1; // r11
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  qword_140F0B490 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F06970;
  Prcb = KeGetPrcb(0);
  v1 = &qword_140003158;
  v2 = 59LL;
  qword_140F0B458 = 1000LL * *(unsigned int *)(Prcb + 68);
  do
  {
    if ( (v1[1] & 0x20000000) != 0 )
    {
      v4 = *(__int64 *)((char *)&qword_140F0B378 + *v1);
      if ( v4 > PopSstDiagResumeClock )
        v4 -= qword_140F06968;
      v3 = *v1;
      *(__int64 *)((char *)&qword_140F0B378 + v3) = PpmConvertTime(
                                                      v4,
                                                      1000000LL * KeGetCurrentPrcb()->MHz,
                                                      PopQpcFrequency);
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  result = qword_140F0B450 - qword_140F0B3E8;
  qword_140F0B3E0 = qword_140F0B450 - qword_140F0B3E8;
  return result;
}
