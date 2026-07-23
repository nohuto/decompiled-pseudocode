/*
 * XREFs of RtlpAcquireSRWLockSharedContended @ 0x18007A040
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x18001D230 (LdrpGetFromMUIMemCache.c)
 *     LdrpFindLoadedDllByHandle @ 0x18004E780 (LdrpFindLoadedDllByHandle.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     LdrpFindLoadedDllByAddress @ 0x18004F390 (LdrpFindLoadedDllByAddress.c)
 *     LdrpCallTlsInitializers @ 0x180074330 (LdrpCallTlsInitializers.c)
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     LdrpFindLoadedDllByName @ 0x18007A380 (LdrpFindLoadedDllByName.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DCD90 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800DF5A0 (RtlpHpStackTraceRemoveStack.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x18009E4A0 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x1800E9ECC (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x180166E70 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpAcquireSRWLockSharedContended(unsigned __int64 Address, unsigned __int64 i, char *a3, char *a4)
{
  unsigned int v4; // esi
  signed __int64 v5; // rdi
  volatile signed __int64 *v6; // r14
  signed __int64 v7; // rcx
  __int64 result; // rax
  int v9; // ebx
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  bool v12; // zf
  signed __int64 v13; // rax
  unsigned __int64 v14; // rax
  int v16; // ebx
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  __int128 v19; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+30h] [rbp-48h]
  __int128 v21; // [rsp+40h] [rbp-38h] BYREF
  unsigned int j; // [rsp+80h] [rbp+8h]
  unsigned int k; // [rsp+88h] [rbp+10h]

  v19 = 0LL;
  v4 = 0;
  v5 = (signed __int64)a3;
  v20 = 0LL;
  v6 = (volatile signed __int64 *)Address;
  v21 = 0LL;
  while ( ((v5 & 2) != 0 || (v5 & 1) != 0 && (v5 & 0xFFFFFFFFFFFFFFF0uLL) == 0)
       && (!RtlpSrwLockAllowImplicitUpgrade || (v5 & 1) != 0) )
  {
    if ( (unsigned __int8)RtlpWaitCouldDeadlock(Address, i, a3, a4, v19, *((_QWORD *)&v19 + 1)) )
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
    Address = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
    *((_QWORD *)&v20 + 1) = Address;
    LOBYTE(Address) = 0;
    DWORD1(v21) = 2;
    *(_QWORD *)&v20 = 0LL;
    if ( (v5 & 2) != 0 )
    {
      *((_QWORD *)&v19 + 1) = 0LL;
      LODWORD(v21) = -1;
      Address = (unsigned __int8)v5;
      *(_QWORD *)&v19 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
      i = (unsigned __int64)&v19 | v5 & 9 | 6;
      LOBYTE(Address) = (v5 & 4) == 0;
    }
    else
    {
      LODWORD(v21) = -2;
      *((_QWORD *)&v19 + 1) = &v19;
      i = (unsigned __int64)&v19 + 3;
    }
    v13 = _InterlockedCompareExchange64(v6, i, v5);
    v12 = v5 == v13;
    v5 = v13;
    if ( v12 )
    {
      if ( (_BYTE)Address )
        RtlpOptimizeSRWLockList(v6);
      if ( MEMORY[0x7FFE036A] > 1u )
      {
        if ( MEMORY[0x7FFE0297] )
        {
          a3 = (char *)__rdtsc();
          a4 = &a3[SRWLockSpinCycleCount];
          while ( 1 )
          {
            Address = 0LL;
            i = 0LL;
            __asm { monitorx rax, rcx, rdx }
            if ( (BYTE4(v21) & 2) == 0 )
              break;
            Address = (unsigned __int64)a3;
            v14 = __rdtsc();
            i = (unsigned __int64)HIDWORD(v14) << 32;
            a3 = (char *)v14;
            if ( v14 < Address || v14 >= (unsigned __int64)a4 )
              break;
            __asm { mwaitx  rax, rcx, rbx }
          }
        }
        else
        {
          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
          {
            Address = DWORD1(v21);
            if ( (BYTE4(v21) & 2) == 0 || (_DWORD)i == SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6] )
              break;
            _mm_pause();
          }
        }
      }
      if ( _interlockedbittestandreset((volatile signed __int32 *)&v21 + 1, 1u) )
      {
        do
          NtWaitForAlertByThreadId((PVOID)v6, 0LL);
        while ( (BYTE4(v21) & 4) == 0 );
      }
    }
    else
    {
      v16 = v4;
      if ( v4 )
      {
        if ( v4 < 0x1FFF )
          v16 = 2 * v4;
      }
      else
      {
        Address = (unsigned __int64)NtCurrentTeb()->ProcessEnvironmentBlock;
        if ( *(_DWORD *)(Address + 184) == 1 )
          goto LABEL_17;
        v16 = 64;
      }
      v4 = v16;
      v17 = __rdtsc();
      Address = MEMORY[0x7FFE02D6];
      v18 = 10 * (((v16 - 1) & (unsigned int)v17) + v16) / MEMORY[0x7FFE02D6];
      i = 0LL;
      for ( j = 0; (unsigned int)i < v18; j = i )
      {
        Address = j;
        _mm_pause();
        i = (unsigned int)(i + 1);
      }
LABEL_17:
      _m_prefetchw((const void *)v6);
      v5 = *v6;
    }
  }
  v7 = (v5 | 1) + 16;
  if ( (v5 & 2) != 0 )
    v7 = v5 | 1;
  result = _InterlockedCompareExchange64(v6, v7, v5);
  if ( v5 != result )
  {
    v9 = v4;
    if ( v4 )
    {
      if ( v4 < 0x1FFF )
        v9 = 2 * v4;
    }
    else
    {
      Address = (unsigned __int64)NtCurrentTeb()->ProcessEnvironmentBlock;
      if ( *(_DWORD *)(Address + 184) == 1 )
        goto LABEL_17;
      v9 = 64;
    }
    v4 = v9;
    v10 = __rdtsc();
    Address = MEMORY[0x7FFE02D6];
    v11 = 10 * (((v9 - 1) & (unsigned int)v10) + v9) / MEMORY[0x7FFE02D6];
    i = 0LL;
    for ( k = 0; (unsigned int)i < v11; k = i )
    {
      Address = k;
      _mm_pause();
      i = (unsigned int)(i + 1);
    }
    goto LABEL_17;
  }
  return result;
}
