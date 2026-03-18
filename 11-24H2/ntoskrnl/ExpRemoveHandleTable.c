/*
 * XREFs of ExpRemoveHandleTable @ 0x1409E5378
 * Callers:
 *     ExDestroyHandleTable @ 0x1409E5220 (ExDestroyHandleTable.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExpRemoveHandleTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&HandleTableListLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&HandleTableListLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&HandleTableListLock, (__int64)v3, (__int64)&HandleTableListLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = (_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v7 + 8) != a1 + 24 || (v8 = *(_QWORD **)(a1 + 32), (_QWORD *)*v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
  KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
  result = KeLeaveCriticalRegionThread();
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *v6 = v6;
  return result;
}
