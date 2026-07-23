/*
 * XREFs of PopSstDiagInitializeResumeTimer @ 0x140B68308
 * Callers:
 *     PopHandleNextState @ 0x140B67F50 (PopHandleNextState.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PpmConvertTime @ 0x140437380 (PpmConvertTime.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x1405802AC (HvlQueryHypervisorTscAdjustment.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0LL;
  v8 = 0LL;
  v7[0] = 0LL;
  v1 = 1000000LL * KeGetCurrentPrcb()->MHz;
  v2 = guard_dispatch_icall_no_overrides(&v8, v7);
  if ( PoResumeFromHibernate )
  {
    v2 = 1;
    v8 = PopSstDiagResumeClock;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v4 = PerformanceCounter.QuadPart - PpmConvertTime(__rdtsc() - v7[0] - v8, v1, PopQpcFrequency);
  if ( v2 )
  {
    HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
    v8 -= HypervisorTscAdjustment;
    v0 = HypervisorTscAdjustment;
    v4 -= PpmConvertTime(v8, v1, PopQpcFrequency);
  }
  result = v8;
  qword_140F06C88 = v0;
  PopSstDiagResumeClock = v8;
  qword_140F06C90 = v4;
  return result;
}
