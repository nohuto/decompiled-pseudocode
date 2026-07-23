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
