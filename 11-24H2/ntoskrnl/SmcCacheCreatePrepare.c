/*
 * XREFs of SmcCacheCreatePrepare @ 0x140798E8C
 * Callers:
 *     SmcProcessCreateRequest @ 0x140798F8C (SmcProcessCreateRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SmcCacheManagerStart @ 0x14079D298 (SmcCacheManagerStart.c)
 *     SmRegistrationCtxStart @ 0x140AAF258 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmcCacheCreatePrepare(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rsi
  int v4; // ebp
  char *v5; // rax
  char *v6; // r14

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 - 136);
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v5 = (char *)KeAbPreAcquire(a1 - 136, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (__int64)v2);
  if ( v6 )
    v6[10] = 1;
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
