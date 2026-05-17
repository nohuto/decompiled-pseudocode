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

__int64 __fastcall RtlCreateEnvironmentEx(void *a1, _QWORD *a2, int a3)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r13
  char v4; // bp
  void *Environment; // rbx
  int v8; // r15d
  _DWORD *Heap; // rax
  BOOL v10; // r14d
  unsigned __int64 EnvironmentSize; // rsi
  _WORD *EnvBlock; // rdi
  bool v13; // cc
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  v4 = a3;
  Environment = a1;
  if ( (a3 & 0xFFFFFFF8) != 0 || (((a3 & 5) - 1) & a3 & 5) != 0 || (a3 & 3) == 2 )
    return 3221225713LL;
  if ( a1 && (a3 & 4) != 0 )
    return 3221225520LL;
  v8 = 1;
  if ( !a1 && (a3 & 1) != 0 )
    return 3221225520LL;
  if ( (a3 & 4) != 0 )
  {
LABEL_8:
    Heap = (_DWORD *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 4uLL);
    if ( Heap )
    {
      *Heap = 0;
      *a2 = Heap;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  else
  {
    if ( !a1 )
    {
      v10 = 1;
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      RtlEnterCriticalSection((__int64)&FastPebLock);
      Environment = ProcessParameters->Environment;
      EnvironmentSize = ProcessParameters->EnvironmentSize;
      RtlLeaveCriticalSection((__int64)&FastPebLock);
      if ( Environment )
        goto LABEL_13;
      goto LABEL_8;
    }
    v10 = !(a3 & 1);
    v8 = 0;
    EnvironmentSize = RtlpGetBlockSizeEx(a1, !(a3 & 1));
    while ( 1 )
    {
LABEL_13:
      EnvBlock = (_WORD *)RtlpAllocateEnvBlock(EnvironmentSize);
      if ( !EnvBlock )
        return (unsigned int)-1073741670;
      if ( !v8 )
        break;
      RtlEnterCriticalSection((__int64)&FastPebLock);
      Environment = ProcessParameters->Environment;
      if ( !Environment )
      {
        RtlLeaveCriticalSection((__int64)&FastPebLock);
        RtlpSysVolFree((__int64)EnvBlock);
        goto LABEL_8;
      }
      v13 = ProcessParameters->EnvironmentSize <= EnvironmentSize;
      EnvironmentSize = ProcessParameters->EnvironmentSize;
      if ( v13 )
        break;
      RtlLeaveCriticalSection((__int64)&FastPebLock);
      RtlpSysVolFree((__int64)EnvBlock);
    }
    if ( v10 )
    {
      memmove(EnvBlock, Environment, EnvironmentSize);
      if ( v8 )
        RtlLeaveCriticalSection((__int64)&FastPebLock);
LABEL_18:
      *a2 = EnvBlock;
      return 0LL;
    }
    if ( EnvironmentSize > 0xFFFFFFFF )
    {
      v15 = -2147483643;
    }
    else
    {
      v16 = EnvironmentSize >> 1;
      if ( (v4 & 2) != 0 )
        v14 = RtlOemToUnicodeN((__int64)EnvBlock, (unsigned int)EnvironmentSize, 0LL, (__int64)Environment, v16);
      else
        v14 = RtlMultiByteToUnicodeN(EnvBlock, EnvironmentSize, 0LL, (unsigned __int8 *)Environment, v16);
      v15 = v14;
      if ( v14 >= 0 )
        goto LABEL_18;
    }
    RtlpSysVolFree((__int64)EnvBlock);
    return v15;
  }
}
