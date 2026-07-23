/*
 * XREFs of RtlCreateEnvironmentEx @ 0x1800AB0E0
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x1800E587C (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironment @ 0x18010C660 (RtlCreateEnvironment.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlMultiByteToUnicodeN @ 0x18004AF70 (RtlMultiByteToUnicodeN.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlOemToUnicodeN @ 0x1800AAAF0 (RtlOemToUnicodeN.c)
 *     RtlpAllocateEnvBlock @ 0x1800ABD28 (RtlpAllocateEnvBlock.c)
 *     RtlpGetBlockSizeEx @ 0x1800E60F0 (RtlpGetBlockSizeEx.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlCreateEnvironmentEx(PVOID SourceEnvironment, PVOID *Environment, ULONG Flags)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r13
  char v4; // bp
  PVOID v6; // rbx
  int v8; // r15d
  _DWORD *Heap; // rax
  BOOL v10; // r14d
  unsigned __int64 EnvironmentSize; // rsi
  void *EnvBlock; // rdi
  bool v13; // cc
  NTSTATUS v14; // eax
  NTSTATUS v15; // ebx
  ULONG BytesInOemString; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  v4 = Flags;
  v6 = SourceEnvironment;
  if ( (Flags & 0xFFFFFFF8) != 0 || (((Flags & 5) - 1) & Flags & 5) != 0 || (Flags & 3) == 2 )
    return -1073741583;
  if ( SourceEnvironment && (Flags & 4) != 0 )
    return -1073741776;
  v8 = 1;
  if ( !SourceEnvironment && (Flags & 1) != 0 )
    return -1073741776;
  if ( (Flags & 4) != 0 )
  {
LABEL_8:
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4uLL);
    if ( Heap )
    {
      *Heap = 0;
      *Environment = Heap;
      return 0;
    }
    else
    {
      return -1073741670;
    }
  }
  else
  {
    if ( !SourceEnvironment )
    {
      v10 = 1;
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      RtlEnterCriticalSection(&FastPebLock);
      v6 = ProcessParameters->Environment;
      EnvironmentSize = ProcessParameters->EnvironmentSize;
      RtlLeaveCriticalSection(&FastPebLock);
      if ( v6 )
        goto LABEL_13;
      goto LABEL_8;
    }
    v10 = !(Flags & 1);
    v8 = 0;
    EnvironmentSize = RtlpGetBlockSizeEx(SourceEnvironment, !(Flags & 1));
    while ( 1 )
    {
LABEL_13:
      EnvBlock = (void *)RtlpAllocateEnvBlock(EnvironmentSize);
      if ( !EnvBlock )
        return -1073741670;
      if ( !v8 )
        break;
      RtlEnterCriticalSection(&FastPebLock);
      v6 = ProcessParameters->Environment;
      if ( !v6 )
      {
        RtlLeaveCriticalSection(&FastPebLock);
        RtlpSysVolFree(EnvBlock);
        goto LABEL_8;
      }
      v13 = ProcessParameters->EnvironmentSize <= EnvironmentSize;
      EnvironmentSize = ProcessParameters->EnvironmentSize;
      if ( v13 )
        break;
      RtlLeaveCriticalSection(&FastPebLock);
      RtlpSysVolFree(EnvBlock);
    }
    if ( v10 )
    {
      memmove(EnvBlock, v6, EnvironmentSize);
      if ( v8 )
        RtlLeaveCriticalSection(&FastPebLock);
LABEL_18:
      *Environment = EnvBlock;
      return 0;
    }
    if ( EnvironmentSize > 0xFFFFFFFF )
    {
      v15 = -2147483643;
    }
    else
    {
      BytesInOemString = EnvironmentSize >> 1;
      if ( (v4 & 2) != 0 )
        v14 = RtlOemToUnicodeN((PWSTR)EnvBlock, EnvironmentSize, 0LL, (PCCH)v6, BytesInOemString);
      else
        v14 = RtlMultiByteToUnicodeN((PWCH)EnvBlock, EnvironmentSize, 0LL, (PCSTR)v6, BytesInOemString);
      v15 = v14;
      if ( v14 >= 0 )
        goto LABEL_18;
    }
    RtlpSysVolFree(EnvBlock);
    return v15;
  }
}
