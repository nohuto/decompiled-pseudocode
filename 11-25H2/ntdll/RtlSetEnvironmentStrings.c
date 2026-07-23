/*
 * XREFs of RtlSetEnvironmentStrings @ 0x180115E10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpClearEnvironmentHashTable @ 0x1800AAF0C (RtlpClearEnvironmentHashTable.c)
 *     RtlpAllocateEnvBlock @ 0x1800ABD28 (RtlpAllocateEnvBlock.c)
 *     RtlpAllocationSize @ 0x1800ABD54 (RtlpAllocationSize.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentStrings(PCWCHAR NewEnvironment, SIZE_T NewEnvironmentSize)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rsi
  SIZE_T v6; // r14
  PVOID EnvBlock; // rax
  PVOID v9; // rsi
  void *v10; // r14

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(&FastPebLock);
  Environment = ProcessParameters->Environment;
  v6 = RtlpAllocationSize(Environment);
  if ( v6 >= NewEnvironmentSize )
  {
    memmove(Environment, NewEnvironment, NewEnvironmentSize);
    ProcessParameters->Environment = Environment;
    ProcessParameters->EnvironmentSize = NewEnvironmentSize;
    ++ProcessParameters->EnvironmentVersion;
    RtlpClearEnvironmentHashTable();
  }
  RtlLeaveCriticalSection(&FastPebLock);
  if ( v6 >= NewEnvironmentSize )
    return 0;
  EnvBlock = RtlpAllocateEnvBlock(NewEnvironmentSize);
  v9 = EnvBlock;
  if ( EnvBlock )
  {
    memmove(EnvBlock, NewEnvironment, NewEnvironmentSize);
    RtlEnterCriticalSection(&FastPebLock);
    v10 = ProcessParameters->Environment;
    RtlpClearEnvironmentHashTable();
    ProcessParameters->Environment = v9;
    ProcessParameters->EnvironmentSize = NewEnvironmentSize;
    ++ProcessParameters->EnvironmentVersion;
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpSysVolFree(v10);
    return 0;
  }
  return -1073741670;
}
