/*
 * XREFs of ExpRemoveHandleTable @ 0x1409DFDD8
 * Callers:
 *     ExDestroyHandleTable @ 0x1409DFC80 (ExDestroyHandleTable.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall ExpRemoveHandleTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&HandleTableListLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&HandleTableListLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&HandleTableListLock, v3, (__int64)&HandleTableListLock);
  if ( v5 )
    v5[10] = 1;
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
