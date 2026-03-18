/*
 * XREFs of PopSstDiagInitializeResumeTimer @ 0x140B661C8
 * Callers:
 *     PopHandleNextState @ 0x140B65E10 (PopHandleNextState.c)
 * Callees:
 *     PpmConvertTime @ 0x14032D070 (PpmConvertTime.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x140582F2C (HvlQueryHypervisorTscAdjustment.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall PopSstDiagInitializeResumeTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  char v6; // si
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v8; // rdi
  __int64 HypervisorTscAdjustment; // rax
  unsigned __int64 result; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  v11[0] = 0LL;
  v5 = 1000000LL * KeGetCurrentPrcb()->MHz;
  v6 = guard_dispatch_icall_no_overrides(&v12, v11, a3, a4);
  if ( PoResumeFromHibernate )
  {
    v6 = 1;
    v12 = PopSstDiagResumeClock;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = PerformanceCounter.QuadPart - PpmConvertTime(__rdtsc() - v11[0] - v12, v5, PopQpcFrequency);
  if ( v6 )
  {
    HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
    v12 -= HypervisorTscAdjustment;
    v4 = HypervisorTscAdjustment;
    v8 -= PpmConvertTime(v12, v5, PopQpcFrequency);
  }
  result = v12;
  qword_140F06968 = v4;
  PopSstDiagResumeClock = v12;
  qword_140F06970 = v8;
  return result;
}
