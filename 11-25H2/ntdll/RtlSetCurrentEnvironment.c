/*
 * XREFs of RtlSetCurrentEnvironment @ 0x180115850
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpClearEnvironmentHashTable @ 0x1800AAF0C (RtlpClearEnvironmentHashTable.c)
 *     RtlpAllocationSize @ 0x1800ABD54 (RtlpAllocationSize.c)
 */

__int64 __fastcall RtlSetCurrentEnvironment(__int64 a1, __int64 *a2)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 Environment; // rbp

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v5 = RtlpAllocationSize(a1);
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlpClearEnvironmentHashTable(v7, v6, v8, v9);
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
