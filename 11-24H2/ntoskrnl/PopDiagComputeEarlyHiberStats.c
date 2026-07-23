/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x140B6F604
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PpmConvertTime @ 0x140437380 (PpmConvertTime.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 Prcb; // rax
  __int64 *v1; // r11
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  qword_140F0C0D0 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F06C90;
  Prcb = KeGetPrcb(0);
  v1 = &qword_140003158;
  v2 = 59LL;
  qword_140F0C098 = 1000LL * *(unsigned int *)(Prcb + 68);
  do
  {
    if ( (v1[1] & 0x20000000) != 0 )
    {
      v4 = *(__int64 *)((char *)&qword_140F0BFB8 + *v1);
      if ( v4 > PopSstDiagResumeClock )
        v4 -= qword_140F06C88;
      v3 = *v1;
      *(__int64 *)((char *)&qword_140F0BFB8 + v3) = PpmConvertTime(
                                                      v4,
                                                      1000000LL * KeGetCurrentPrcb()->MHz,
                                                      PopQpcFrequency);
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  result = qword_140F0C090 - qword_140F0C028;
  qword_140F0C020 = qword_140F0C090 - qword_140F0C028;
  return result;
}
