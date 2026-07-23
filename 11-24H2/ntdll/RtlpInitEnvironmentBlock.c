/*
 * XREFs of RtlpInitEnvironmentBlock @ 0x180119204
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlCreateEnvironmentEx @ 0x180004BD0 (RtlCreateEnvironmentEx.c)
 *     RtlpAllocateEnvBlock @ 0x180005818 (RtlpAllocateEnvBlock.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x180005890 (RtlpWow64ThunkEnvironmentTo64.c)
 *     RtlpGetBlockSizeEx @ 0x1800E24D0 (RtlpGetBlockSizeEx.c)
 *     RtlpSetupEnvironmentHashTable @ 0x1801192CC (RtlpSetupEnvironmentHashTable.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS RtlpInitEnvironmentBlock()
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *v1; // rbp
  SIZE_T BlockSize; // rdi
  PVOID EnvBlock; // rax
  PVOID v4; // rsi
  NTSTATUS result; // eax
  PVOID Environment; // [rsp+30h] [rbp+8h] BYREF

  Environment = 0LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v1 = ProcessParameters->Environment;
  if ( v1 )
  {
    BlockSize = RtlpGetBlockSizeEx((char *)ProcessParameters->Environment, 1);
    EnvBlock = RtlpAllocateEnvBlock(BlockSize);
    v4 = EnvBlock;
    if ( !EnvBlock )
      return -1073741670;
    memmove(EnvBlock, v1, BlockSize);
  }
  else
  {
    BlockSize = 4LL;
    result = RtlCreateEnvironmentEx(0LL, &Environment, 4u);
    if ( result < 0 )
      return result;
    v4 = Environment;
  }
  ++ProcessParameters->EnvironmentVersion;
  ProcessParameters->Environment = v4;
  ProcessParameters->EnvironmentSize = BlockSize;
  result = RtlpSetupEnvironmentHashTable();
  if ( result >= 0 )
  {
    RtlpWow64ThunkEnvironmentTo64();
    return 0;
  }
  return result;
}
