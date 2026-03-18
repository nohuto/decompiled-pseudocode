/*
 * XREFs of CcBoostLowPriorityWorkerThread @ 0x1404DAE88
 * Callers:
 *     CcFlushCachePreProcess @ 0x1402AC290 (CcFlushCachePreProcess.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1404A08EC (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     PsGetIoPriorityThread @ 0x140276920 (PsGetIoPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140461D64 (CcUpdateSharedCacheMapFlag.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall CcBoostLowPriorityWorkerThread(__int64 a1, __int64 a2)
{
  unsigned __int64 *v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  KSPIN_LOCK **v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rax

  if ( a2 && !*(_DWORD *)(a2 + 4) )
    KeBugCheckEx(0x34u, 0x5ADuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = (unsigned __int64 *)(a1 + 1280);
  v5 = KeAbPreAcquire(a1 + 1280, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, (__int64)v5, (__int64)v4);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = (KSPIN_LOCK **)(a1 + 1256);
  if ( *(_QWORD *)(a1 + 1256) && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) > 0 )
  {
    if ( a2 )
    {
      if ( a2 != *(_QWORD *)(a1 + 1264) )
        goto LABEL_16;
      v8 = (__int64 *)(a1 + 1256);
    }
    else
    {
      v8 = (__int64 *)(a1 + 1256);
    }
    IoBoostThreadIoPriority(*v7, 2, 0);
    *(_DWORD *)(a1 + 1272) = KeSetPriorityThread((PKTHREAD)*v7, 13);
    v9 = *(_QWORD *)(a1 + 1264);
    if ( !*(_DWORD *)(v9 + 4) )
      KeBugCheckEx(0x34u, 0x5DAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (*(_DWORD *)(v9 + 152) & 0x20000000) == 0 )
    {
      PsBoostThreadIoEx(*v8, 0, 0LL, 0LL);
      CcUpdateSharedCacheMapFlag(*(_QWORD *)(a1 + 1264), 0x20000000, 1);
    }
  }
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1280), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1280));
  return KeAbPostRelease(a1 + 1280);
}
