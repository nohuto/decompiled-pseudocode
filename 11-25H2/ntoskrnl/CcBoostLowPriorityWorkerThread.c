/*
 * XREFs of CcBoostLowPriorityWorkerThread @ 0x1404DB798
 * Callers:
 *     CcFlushCachePreProcess @ 0x1402D9F6C (CcFlushCachePreProcess.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1404A10F8 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcUninitializeCacheMap @ 0x1404DADC0 (CcUninitializeCacheMap.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsBoostThreadIoEx @ 0x1402EA7E0 (PsBoostThreadIoEx.c)
 *     PsGetIoPriorityThread @ 0x1403031B0 (PsGetIoPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     KeSetPriorityThread @ 0x1403778B0 (KeSetPriorityThread.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140462750 (CcUpdateSharedCacheMapFlag.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall CcBoostLowPriorityWorkerThread(__int64 a1, __int64 a2)
{
  unsigned __int64 *v4; // rsi
  __int64 *v5; // rax
  __int64 *v6; // rbp
  KSPIN_LOCK **v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rax

  if ( a2 && !*(_DWORD *)(a2 + 4) )
    KeBugCheckEx(0x34u, 0x5ADuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = (unsigned __int64 *)(a1 + 1280);
  v5 = KeAbPreAcquire(a1 + 1280, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
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
      PsBoostThreadIoEx(*v8, 0, 0, 0LL);
      CcUpdateSharedCacheMapFlag(*(_QWORD *)(a1 + 1264), 0x20000000, 1);
    }
  }
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1280), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1280));
  return KeAbPostRelease(a1 + 1280);
}
