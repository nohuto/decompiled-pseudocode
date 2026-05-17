/*
 * XREFs of RtlCreateEnvironmentEx @ 0x180082D50
 * Callers:
 *     RtlCreateEnvironment @ 0x180109C50 (RtlCreateEnvironment.c)
 *     RtlpInitEnvironmentBlock @ 0x18011AFD4 (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlMultiByteToUnicodeN @ 0x18000C0D0 (RtlMultiByteToUnicodeN.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpAllocateEnvBlock @ 0x180083998 (RtlpAllocateEnvBlock.c)
 *     RtlOemToUnicodeN @ 0x1800D4290 (RtlOemToUnicodeN.c)
 *     RtlpGetBlockSizeEx @ 0x1800E7020 (RtlpGetBlockSizeEx.c)
 *     memmove @ 0x180167400 (memmove.c)
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
    Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 4uLL);
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
        v14 = RtlOemToUnicodeN((_DWORD)EnvBlock, EnvironmentSize, 0, (_DWORD)Environment, v16);
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
