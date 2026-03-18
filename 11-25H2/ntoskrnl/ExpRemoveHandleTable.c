/*
 * XREFs of ExpRemoveHandleTable @ 0x140972AE0
 * Callers:
 *     ExDestroyHandleTable @ 0x140972988 (ExDestroyHandleTable.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpRemoveHandleTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rdi
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
    ExfAcquirePushLockExclusiveEx(&HandleTableListLock, v3, (__int64)&HandleTableListLock);
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
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *v6 = v6;
  return result;
}
