/*
 * XREFs of PspTerminateAllProcessesInJobHierarchy @ 0x1408EAFCC
 * Callers:
 *     PsTerminateServerSilo @ 0x1407723C0 (PsTerminateServerSilo.c)
 *     PspJobClose @ 0x1408E9460 (PspJobClose.c)
 *     NtTerminateJobObject @ 0x1408EA3F0 (NtTerminateJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408ECC80 (PspEnforceLimitsJobPostCallback.c)
 * Callees:
 *     EtwTraceJob @ 0x1408EAEF8 (EtwTraceJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408EBCAC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1408EF378 (PspEvaluateAndNotifyEmptyJob.c)
 */

char __fastcall PspTerminateAllProcessesInJobHierarchy(PRKEVENT Event, int a2, char a3)
{
  char v3; // bl
  unsigned __int8 v6; // al
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0LL;
  _InterlockedOr((volatile signed __int32 *)&Event[64].Header.WaitListHead.Blink, 0x80u);
  LODWORD(v8) = a2;
  BYTE4(v8) = a3 != 0;
  PspEnumJobsAndProcessesInJobHierarchy(Event, (__int64)&v8, 2);
  v6 = BYTE4(v8);
  if ( (v8 & 0x200000000LL) != 0 )
  {
    v3 = 1;
  }
  else
  {
    PspEvaluateAndNotifyEmptyJob(Event);
    v6 = BYTE4(v8);
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob((__int64)Event, v6, a2, 1825);
  return v3;
}
