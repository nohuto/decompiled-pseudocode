/*
 * XREFs of RtlSetCurrentEnvironment @ 0x18010DDD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpClearEnvironmentHashTable @ 0x1800049FC (RtlpClearEnvironmentHashTable.c)
 *     RtlpAllocationSize @ 0x180005844 (RtlpAllocationSize.c)
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 */

NTSTATUS __cdecl RtlSetCurrentEnvironment(PVOID Environment, PVOID *PreviousEnvironment)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  SIZE_T v5; // rbx
  void *v6; // rbp

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v5 = RtlpAllocationSize(Environment);
  RtlEnterCriticalSection(&FastPebLock);
  RtlpClearEnvironmentHashTable();
  v6 = ProcessParameters->Environment;
  ++ProcessParameters->EnvironmentVersion;
  ProcessParameters->Environment = Environment;
  ProcessParameters->EnvironmentSize = v5;
  RtlLeaveCriticalSection(&FastPebLock);
  if ( PreviousEnvironment )
  {
    *PreviousEnvironment = v6;
  }
  else if ( v6 )
  {
    RtlpSysVolFree(v6);
  }
  return 0;
}
