/*
 * XREFs of ExpSaAllocatorAllocate @ 0x14047B158
 * Callers:
 *     ExSaAllocate @ 0x14047B0DC (ExSaAllocate.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14038DD04 (ExpSaPageGroupAllocateMemory.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14047B354 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorOptimizeList @ 0x1404AAA64 (ExpSaAllocatorOptimizeList.c)
 */

__int64 __fastcall ExpSaAllocatorAllocate(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  char v3; // r12
  __int64 Memory; // rdi
  __int64 *v6; // rbp
  _DWORD *v7; // r15
  _DWORD *i; // r14
  __int64 v10; // r14
  __int64 v11; // rdx
  _DWORD *v12; // rax
  _DWORD *v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 *v16; // rax
  __int64 *v17; // rbp

  v3 = 0;
  Memory = -1LL;
  v6 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0, v6, BugCheckParameter2);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
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
LABEL_13:
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            goto LABEL_15;
          }
          ExpSaAllocatorOptimizeList(BugCheckParameter2);
        }
        else if ( !v3 )
        {
          goto LABEL_13;
        }
        goto LABEL_19;
      }
    }
    v10 = *(_QWORD *)v7;
    if ( !v3 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v16 = KeAbPreAcquire(BugCheckParameter2, 0LL);
      v17 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v16, BugCheckParameter2);
      if ( v17 )
        *((_BYTE *)v17 + 10) = 1;
    }
    v3 = 1;
    if ( v10 != *(_QWORD *)v7 )
      continue;
    break;
  }
  v11 = *(unsigned int *)(BugCheckParameter2 + 64);
  LOBYTE(v11) = v11 & 1;
  v12 = (_DWORD *)ExpSaPageGroupDescriptorAllocate(BugCheckParameter2, v11);
  v13 = v12;
  if ( v12 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v12, a2);
    if ( v13[9] )
    {
      v13[10] = 0;
      v14 = *(_QWORD *)v7;
      if ( *(_DWORD **)(*(_QWORD *)v7 + 8LL) == v7 )
      {
        *(_QWORD *)v13 = v14;
        *((_QWORD *)v13 + 1) = v7;
        *(_QWORD *)(v14 + 8) = v13;
        *(_QWORD *)v7 = v13;
        goto LABEL_11;
      }
    }
    else
    {
      v13[10] = 1;
      v15 = *(_QWORD **)(BugCheckParameter2 + 32);
      if ( *v15 == BugCheckParameter2 + 24 )
      {
        *(_QWORD *)v13 = BugCheckParameter2 + 24;
        *((_QWORD *)v13 + 1) = v15;
        *v15 = v13;
        *(_QWORD *)(BugCheckParameter2 + 32) = v13;
        goto LABEL_11;
      }
    }
    __fastfail(3u);
  }
LABEL_19:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
LABEL_15:
  KeAbPostRelease(BugCheckParameter2);
  return Memory;
}
