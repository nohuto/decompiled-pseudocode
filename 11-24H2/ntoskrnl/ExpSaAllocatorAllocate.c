/*
 * XREFs of ExpSaAllocatorAllocate @ 0x14026E250
 * Callers:
 *     ExSaAllocate @ 0x14026E1D4 (ExSaAllocate.c)
 * Callees:
 *     ExpSaPageGroupAllocateMemory @ 0x14026DBA0 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14026E450 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpSaAllocatorOptimizeList @ 0x1404A645C (ExpSaAllocatorOptimizeList.c)
 */

__int64 __fastcall ExpSaAllocatorAllocate(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  char v3; // r12
  __int64 Memory; // rdi
  __int64 v6; // rbp
  _DWORD *v7; // r15
  _DWORD *i; // r14
  __int64 v9; // r14
  __int64 v10; // rdx
  _DWORD *v11; // rax
  _DWORD *v12; // r14
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbp

  v3 = 0;
  Memory = -1LL;
  v6 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(BugCheckParameter2, 0LL, v6, BugCheckParameter2);
  if ( v6 )
    *(_BYTE *)(v6 + 10) = 1;
  v7 = (_DWORD *)(BugCheckParameter2 + 8);
  while ( 2 )
  {
    for ( i = *(_DWORD **)v7; i != v7; i = *(_DWORD **)i )
    {
      Memory = ExpSaPageGroupAllocateMemory(i, a2);
      if ( Memory != -1 )
      {
        if ( !i[9] )
          _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u);
LABEL_11:
        if ( (*(_DWORD *)(BugCheckParameter2 + 64) & 2) != 0 )
        {
          if ( !v3 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
          {
LABEL_32:
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(BugCheckParameter2);
            goto LABEL_19;
          }
          ExpSaAllocatorOptimizeList(BugCheckParameter2, 1LL);
        }
        else if ( !v3 )
        {
          goto LABEL_32;
        }
        goto LABEL_17;
      }
    }
    v9 = *(_QWORD *)v7;
    if ( !v3 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v16 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
      v17 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v16, BugCheckParameter2);
      if ( v17 )
        *(_BYTE *)(v17 + 10) = 1;
    }
    v3 = 1;
    if ( v9 != *(_QWORD *)v7 )
      continue;
    break;
  }
  v10 = *(unsigned int *)(BugCheckParameter2 + 64);
  LOBYTE(v10) = v10 & 1;
  v11 = (_DWORD *)ExpSaPageGroupDescriptorAllocate(BugCheckParameter2, v10);
  v12 = v11;
  if ( v11 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v11, a2);
    if ( v12[9] )
    {
      v12[10] = 0;
      v14 = *(_QWORD *)v7;
      if ( *(_DWORD **)(*(_QWORD *)v7 + 8LL) == v7 )
      {
        *(_QWORD *)v12 = v14;
        *((_QWORD *)v12 + 1) = v7;
        *(_QWORD *)(v14 + 8) = v12;
        *(_QWORD *)v7 = v12;
        goto LABEL_11;
      }
    }
    else
    {
      v12[10] = 1;
      v15 = *(_QWORD **)(BugCheckParameter2 + 32);
      if ( *v15 == BugCheckParameter2 + 24 )
      {
        *(_QWORD *)v12 = BugCheckParameter2 + 24;
        *((_QWORD *)v12 + 1) = v15;
        *v15 = v12;
        *(_QWORD *)(BugCheckParameter2 + 32) = v12;
        goto LABEL_11;
      }
    }
    __fastfail(3u);
  }
LABEL_17:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
LABEL_19:
  KeAbPostRelease(BugCheckParameter2);
  return Memory;
}
