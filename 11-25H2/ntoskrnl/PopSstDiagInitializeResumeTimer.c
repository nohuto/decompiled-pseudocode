/*
 * XREFs of PopSstDiagInitializeResumeTimer @ 0x140B560C8
 * Callers:
 *     PopHandleNextState @ 0x140B55D00 (PopHandleNextState.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     PpmConvertTime @ 0x1403E7C50 (PpmConvertTime.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x14057F77C (HvlQueryHypervisorTscAdjustment.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 PopSstDiagInitializeResumeTimer()
{
  __int64 v0; // rbx
  unsigned __int64 v1; // rbp
  char v2; // si
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v4; // rdi
  __int64 HypervisorTscAdjustment; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0LL;
  v7 = 0LL;
  v1 = 1000000LL * KeGetCurrentPrcb()->MHz;
  v2 = guard_dispatch_icall_no_overrides(&v7);
  if ( PoResumeFromHibernate )
  {
    v2 = 1;
    v7 = PopSstDiagResumeClock;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v4 = PerformanceCounter.QuadPart - PpmConvertTime(__rdtsc() - v7, v1, PopQpcFrequency);
  if ( v2 )
  {
    HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
    v7 -= HypervisorTscAdjustment;
    v0 = HypervisorTscAdjustment;
    v4 -= PpmConvertTime(v7, v1, PopQpcFrequency);
  }
  result = v7;
  qword_140F06528 = v0;
  PopSstDiagResumeClock = v7;
  qword_140F06530 = v4;
  return result;
}
