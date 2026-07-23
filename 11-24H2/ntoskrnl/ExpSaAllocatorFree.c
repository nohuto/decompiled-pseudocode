/*
 * XREFs of ExpSaAllocatorFree @ 0x140360F4C
 * Callers:
 *     ExSaFree @ 0x1402B9C7C (ExSaFree.c)
 *     ExpCleanupAutoExpandPushLock @ 0x1403610E0 (ExpCleanupAutoExpandPushLock.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpSaPageGroupFreeMemory @ 0x140482E84 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaAllocatorOptimizeList @ 0x1404A645C (ExpSaAllocatorOptimizeList.c)
 */

__int64 __fastcall ExpSaAllocatorFree(
        unsigned __int64 *BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  char v8; // r15
  char *v9; // r14
  __int64 v10; // rdx
  int v11; // eax
  char *v13; // rax
  char *v14; // r14
  __int64 v15; // rax
  _QWORD *v16; // rcx
  unsigned __int64 **v17; // rcx

  if ( *(_DWORD *)(a2 + 40) == 1 )
  {
    v8 = 1;
    v13 = (char *)KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v13, (__int64)BugCheckParameter2);
    if ( v14 )
      v14[10] = 1;
    *(_DWORD *)(a2 + 40) = 0;
    v15 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2
      || (v16 = *(_QWORD **)(a2 + 8), *v16 != a2)
      || (*v16 = v15,
          *(_QWORD *)(v15 + 8) = v16,
          v17 = (unsigned __int64 **)BugCheckParameter2[2],
          *v17 != BugCheckParameter2 + 1) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)a2 = BugCheckParameter2 + 1;
    *(_QWORD *)(a2 + 8) = v17;
    *v17 = (unsigned __int64 *)a2;
    BugCheckParameter2[2] = a2;
  }
  else
  {
    v8 = 0;
    v9 = (char *)KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0, v9, (__int64)BugCheckParameter2);
    if ( v9 )
      v9[10] = 1;
  }
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, a4) )
  {
    _m_prefetchw(BugCheckParameter2 + 8);
    LOBYTE(v11) = _InterlockedOr((volatile signed __int32 *)BugCheckParameter2 + 16, 2u) | 2;
  }
  else
  {
    v11 = *((_DWORD *)BugCheckParameter2 + 16);
  }
  if ( (v11 & 2) != 0 )
  {
    if ( !v8 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
LABEL_10:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    }
  }
  else if ( !v8 )
  {
    goto LABEL_10;
  }
  ExpSaAllocatorOptimizeList(BugCheckParameter2, v10);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
