/*
 * XREFs of SmcCacheRemove @ 0x14079D398
 * Callers:
 *     SmcCacheDelete @ 0x14079D07C (SmcCacheDelete.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

struct _EX_RUNDOWN_REF __fastcall SmcCacheRemove(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v3; // rdi
  unsigned int v4; // r15d
  struct _EX_RUNDOWN_REF v5; // r14
  _QWORD *v6; // rax
  _QWORD *v7; // rbp

  CurrentThread = KeGetCurrentThread();
  v3 = (struct _EX_RUNDOWN_REF *)(a1 + 32LL * (a2 & 0xF));
  v4 = a2 >> 4;
  --CurrentThread->KernelApcDisable;
  v5.Count = 0LL;
  v6 = KeAbPreAcquire((__int64)&v3[2], 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&v3[2], 0LL) )
    ExfAcquirePushLockExclusiveEx(&v3[2].Count, (__int64)v6, (__int64)&v3[2]);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  if ( v4 == (v3[3].Count & 0xFFF) && v3->Count )
  {
    ExWaitForRundownProtectionRelease(v3 + 1);
    v5.Count = v3->Count;
    v3->Count = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v3[2], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&v3[2]);
  KeAbPostRelease((ULONG_PTR)&v3[2]);
  KeLeaveCriticalRegion();
  return v5;
}
