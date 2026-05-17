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

__int64 __fastcall RtlSetEnvironmentStrings(void *Src, size_t Size)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rsi
  unsigned __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  void *EnvBlock; // rax
  void *v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)&FastPebLock);
  Environment = ProcessParameters->Environment;
  v6 = RtlpAllocationSize((__int64)Environment);
  if ( v6 >= Size )
  {
    memmove(Environment, Src, Size);
    ProcessParameters->Environment = Environment;
    ProcessParameters->EnvironmentSize = Size;
    v7 = ProcessParameters->EnvironmentVersion + 1;
    ProcessParameters->EnvironmentVersion = v7;
    RtlpClearEnvironmentHashTable(v7, v8, v9, v10);
  }
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  if ( v6 >= Size )
    return 0LL;
  EnvBlock = (void *)RtlpAllocateEnvBlock(Size);
  v13 = EnvBlock;
  if ( EnvBlock )
  {
    memmove(EnvBlock, Src, Size);
    RtlEnterCriticalSection((__int64)&FastPebLock);
    v14 = (__int64)ProcessParameters->Environment;
    RtlpClearEnvironmentHashTable(v16, v15, v17, v18);
    ProcessParameters->Environment = v13;
    ProcessParameters->EnvironmentSize = Size;
    ++ProcessParameters->EnvironmentVersion;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpSysVolFree(v14);
    return 0LL;
  }
  return 3221225626LL;
}
