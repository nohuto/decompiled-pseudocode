/*
 * XREFs of RtlSetEnvironmentStrings @ 0x18010E140
 * Callers:
 *     <none>
 * Callees:
 *     RtlpClearEnvironmentHashTable @ 0x1800049FC (RtlpClearEnvironmentHashTable.c)
 *     RtlpAllocateEnvBlock @ 0x180005818 (RtlpAllocateEnvBlock.c)
 *     RtlpAllocationSize @ 0x180005844 (RtlpAllocationSize.c)
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     memmove @ 0x1801657C0 (memmove.c)
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
