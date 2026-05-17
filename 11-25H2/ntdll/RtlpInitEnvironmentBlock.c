/*
 * XREFs of RtlpInitEnvironmentBlock @ 0x1800E587C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlCreateEnvironmentEx @ 0x1800AB0E0 (RtlCreateEnvironmentEx.c)
 *     RtlpAllocateEnvBlock @ 0x1800ABD28 (RtlpAllocateEnvBlock.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x1800ABD74 (RtlpWow64ThunkEnvironmentTo64.c)
 *     RtlpGetBlockSizeEx @ 0x1800E60F0 (RtlpGetBlockSizeEx.c)
 *     RtlpSetupEnvironmentHashTable @ 0x1800E61A4 (RtlpSetupEnvironmentHashTable.c)
 *     Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledDeviceUsageNoInline @ 0x18011E708 (Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x180168980 (memmove.c)
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
    BlockSize = RtlpGetBlockSizeEx(ProcessParameters->Environment, 1LL);
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
  if ( (unsigned int)Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledDeviceUsageNoInline() )
  {
    result = RtlpSetupEnvironmentHashTable();
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    RtlpSetupEnvironmentHashTable();
  }
  RtlpWow64ThunkEnvironmentTo64();
  return 0LL;
}
