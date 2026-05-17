/*
 * XREFs of RtlpInitEnvironmentBlock @ 0x18011AFD4
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlCreateEnvironmentEx @ 0x180082D50 (RtlCreateEnvironmentEx.c)
 *     RtlpAllocateEnvBlock @ 0x180083998 (RtlpAllocateEnvBlock.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x1800839E4 (RtlpWow64ThunkEnvironmentTo64.c)
 *     RtlpGetBlockSizeEx @ 0x1800E7020 (RtlpGetBlockSizeEx.c)
 *     RtlpSetupEnvironmentHashTable @ 0x18011B09C (RtlpSetupEnvironmentHashTable.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 RtlpInitEnvironmentBlock()
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rbp
  unsigned __int64 BlockSize; // rdi
  void *EnvBlock; // rax
  void *v4; // rsi
  __int64 result; // rax
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  Environment = ProcessParameters->Environment;
  if ( Environment )
  {
    BlockSize = RtlpGetBlockSizeEx((char *)ProcessParameters->Environment, 1);
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    v4 = EnvBlock;
    if ( !EnvBlock )
      return 3221225626LL;
    memmove(EnvBlock, Environment, BlockSize);
  }
  else
  {
    BlockSize = 4LL;
    result = RtlCreateEnvironmentEx(0LL, &v6, 4);
    if ( (int)result < 0 )
      return result;
    v4 = v6;
  }
  ++ProcessParameters->EnvironmentVersion;
  ProcessParameters->Environment = v4;
  ProcessParameters->EnvironmentSize = BlockSize;
  result = RtlpSetupEnvironmentHashTable();
  if ( (int)result >= 0 )
  {
    RtlpWow64ThunkEnvironmentTo64();
    return 0LL;
  }
  return result;
}
