/*
 * XREFs of ExpSaAllocatorFree @ 0x14031FD84
 * Callers:
 *     ExpCleanupAutoExpandPushLock @ 0x14031FF10 (ExpCleanupAutoExpandPushLock.c)
 *     ExSaFree @ 0x14036D37C (ExSaFree.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExpSaPageGroupFreeMemory @ 0x140488134 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaAllocatorOptimizeList @ 0x1404AAA64 (ExpSaAllocatorOptimizeList.c)
 */

__int64 __fastcall ExpSaAllocatorFree(
        unsigned __int64 *BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  char v8; // r15
  __int64 *v9; // r14
  signed __int32 v10; // eax
  __int64 *v12; // rax
  __int64 *v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // rcx
  unsigned __int64 **v16; // rcx

  if ( *(_DWORD *)(a2 + 40) == 1 )
  {
    v8 = 1;
    v12 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v12, (__int64)BugCheckParameter2);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    *(_DWORD *)(a2 + 40) = 0;
    v14 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2
      || (v15 = *(_QWORD **)(a2 + 8), *v15 != a2)
      || (*v15 = v14,
          *(_QWORD *)(v14 + 8) = v15,
          v16 = (unsigned __int64 **)BugCheckParameter2[2],
          *v16 != BugCheckParameter2 + 1) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)a2 = BugCheckParameter2 + 1;
    *(_QWORD *)(a2 + 8) = v16;
    *v16 = (unsigned __int64 *)a2;
    BugCheckParameter2[2] = a2;
  }
  else
  {
    v8 = 0;
    v9 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0, v9, (unsigned __int64)BugCheckParameter2);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, a4) )
  {
    _m_prefetchw(BugCheckParameter2 + 8);
    v10 = _InterlockedOr((volatile signed __int32 *)BugCheckParameter2 + 16, 2u) | 2;
  }
  else
  {
    v10 = *((_DWORD *)BugCheckParameter2 + 16);
  }
  if ( (v10 & 2) != 0 )
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
  ExpSaAllocatorOptimizeList(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
