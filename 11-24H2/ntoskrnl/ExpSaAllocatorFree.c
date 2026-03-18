/*
 * XREFs of ExpSaAllocatorFree @ 0x1402B980C
 * Callers:
 *     ExpCleanupAutoExpandPushLock @ 0x1402B99A0 (ExpCleanupAutoExpandPushLock.c)
 *     ExSaFree @ 0x14043A42C (ExSaFree.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ExpSaPageGroupFreeMemory @ 0x140487E14 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaAllocatorOptimizeList @ 0x1404ABF70 (ExpSaAllocatorOptimizeList.c)
 */

__int64 __fastcall ExpSaAllocatorFree(ULONG_PTR BugCheckParameter2, __int64 *a2, __int64 a3, unsigned int a4)
{
  char v8; // r15
  __int64 v9; // r14
  signed __int32 v10; // eax
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 *v14; // rax
  __int64 **v15; // rcx
  __int64 **v16; // rcx

  if ( *((_DWORD *)a2 + 10) == 1 )
  {
    v8 = 1;
    v12 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v12, BugCheckParameter2);
    if ( v13 )
      *(_BYTE *)(v13 + 10) = 1;
    *((_DWORD *)a2 + 10) = 0;
    v14 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2
      || (v15 = (__int64 **)a2[1], *v15 != a2)
      || (*v15 = v14,
          v14[1] = (__int64)v15,
          v16 = *(__int64 ***)(BugCheckParameter2 + 16),
          *v16 != (__int64 *)(BugCheckParameter2 + 8)) )
    {
      __fastfail(3u);
    }
    *a2 = BugCheckParameter2 + 8;
    a2[1] = (__int64)v16;
    *v16 = a2;
    *(_QWORD *)(BugCheckParameter2 + 16) = a2;
  }
  else
  {
    v8 = 0;
    v9 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(BugCheckParameter2, 0LL, v9, BugCheckParameter2);
    if ( v9 )
      *(_BYTE *)(v9 + 10) = 1;
  }
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, a4) )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 64));
    v10 = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u) | 2;
  }
  else
  {
    v10 = *(_DWORD *)(BugCheckParameter2 + 64);
  }
  if ( (v10 & 2) != 0 )
  {
    if ( !v8 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
LABEL_10:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      return KeAbPostRelease(BugCheckParameter2);
    }
  }
  else if ( !v8 )
  {
    goto LABEL_10;
  }
  ExpSaAllocatorOptimizeList(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  return KeAbPostRelease(BugCheckParameter2);
}
