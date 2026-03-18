/*
 * XREFs of SmcCacheCreatePrepare @ 0x1407899AC
 * Callers:
 *     SmcProcessCreateRequest @ 0x140789AAC (SmcProcessCreateRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     SmcCacheManagerStart @ 0x14078DDC8 (SmcCacheManagerStart.c)
 *     SmRegistrationCtxStart @ 0x140AAF2F8 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmcCacheCreatePrepare(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rsi
  int v4; // ebp
  __int64 *v5; // rax
  __int64 *v6; // r14

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 - 136);
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire(a1 - 136, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (__int64)v2);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  if ( (*(_DWORD *)(a1 - 152) & 8) == 0 )
  {
    v4 = SmRegistrationCtxStart(a1 + 560);
    if ( v4 >= 0 )
      *(_DWORD *)(a1 - 152) |= 8u;
  }
  if ( (*(_DWORD *)(a1 - 152) & 0xC) == 8 )
  {
    v4 = SmcCacheManagerStart(a1, *(_QWORD *)(a1 + 560));
    if ( v4 >= 0 )
      *(_DWORD *)(a1 - 152) |= 4u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
