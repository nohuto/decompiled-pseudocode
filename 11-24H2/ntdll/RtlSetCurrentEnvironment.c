/*
 * XREFs of RtlSetCurrentEnvironment @ 0x180112B10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpClearEnvironmentHashTable @ 0x180082B7C (RtlpClearEnvironmentHashTable.c)
 *     RtlpAllocationSize @ 0x1800839C4 (RtlpAllocationSize.c)
 */

__int64 __fastcall RtlSetCurrentEnvironment(__int64 a1, __int64 *a2)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  __int64 v5; // rbx
  __int64 Environment; // rbp

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v5 = RtlpAllocationSize(a1);
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlpClearEnvironmentHashTable();
  Environment = (__int64)ProcessParameters->Environment;
  ++ProcessParameters->EnvironmentVersion;
  ProcessParameters->Environment = (void *)a1;
  ProcessParameters->EnvironmentSize = v5;
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  if ( a2 )
  {
    *a2 = Environment;
  }
  else if ( Environment )
  {
    RtlpSysVolFree(Environment);
  }
  return 0LL;
}
