/*
 * XREFs of WheapPfaReset @ 0x1407C98F4
 * Callers:
 *     WheaRegChangeNotifyCallback @ 0x1407C8F50 (WheaRegChangeNotifyCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void WheapPfaReset()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rdi
  PVOID *v4; // rdi
  PVOID *v5; // rax
  PVOID *v6; // rcx
  PVOID **v7; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&WheapPfaLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&WheapPfaLock, v1, (__int64)&WheapPfaLock);
  if ( v3 )
    v3[10] = 1;
  v4 = (PVOID *)WheapPfaList;
  while ( v4 != &WheapPfaList )
  {
    v5 = (PVOID *)*v4;
    v6 = v4;
    v4 = v5;
    if ( v5[1] != v6 || (v7 = (PVOID **)v6[1], *v7 != v6) )
      __fastfail(3u);
    *v7 = v5;
    v5[1] = v7;
    ExFreePoolWithTag(v6, 0x61656857u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock);
  KeAbPostRelease((ULONG_PTR)&WheapPfaLock);
  KeLeaveCriticalRegion();
}
