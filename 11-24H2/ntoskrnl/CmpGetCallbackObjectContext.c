/*
 * XREFs of CmpGetCallbackObjectContext @ 0x140940B60
 * Callers:
 *     CmpCallbackFillObjectContext @ 0x140844AB0 (CmpCallbackFillObjectContext.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall CmpGetCallbackObjectContext(_DWORD *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  _QWORD *v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rbp
  _QWORD *i; // rax
  __int64 v9; // rcx
  signed __int64 v10; // rdx
  ULONG_PTR v11; // rtt

  v3 = 0LL;
  if ( !a1 )
    return 0LL;
  if ( *a1 != 1803104306 )
    return 0LL;
  v5 = a1 + 18;
  if ( (_QWORD *)*v5 == v5 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (char *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock, 0, v7, (__int64)&CmpContextListLock);
  if ( v7 )
    v7[10] = 1;
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
  {
    v9 = i[4];
    if ( v9 == *a2 )
    {
      v3 = i[7];
      break;
    }
    if ( v9 < *a2 )
      break;
  }
  _m_prefetchw(&CmpContextListLock);
  v10 = CmpContextListLock - 16;
  if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v10 = 0LL;
  if ( (CmpContextListLock & 2) != 0
    || (v11 = CmpContextListLock,
        v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, v10, CmpContextListLock)) )
  {
    ExfReleasePushLock(&CmpContextListLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
  KeLeaveCriticalRegionThread();
  return v3;
}
