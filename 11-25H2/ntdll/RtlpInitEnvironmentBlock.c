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
    BlockSize = RtlpGetBlockSizeEx(ProcessParameters->Environment, 1LL);
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
  if ( (unsigned int)Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledDeviceUsageNoInline() )
  {
    result = RtlpSetupEnvironmentHashTable();
    if ( result < 0 )
      return result;
  }
  else
  {
    RtlpSetupEnvironmentHashTable();
  }
  RtlpWow64ThunkEnvironmentTo64();
  return 0;
}
