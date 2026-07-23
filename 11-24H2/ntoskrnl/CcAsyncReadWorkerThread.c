/*
 * XREFs of CcAsyncReadWorkerThread @ 0x14057B240
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402E624C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CcAsyncReadWorker @ 0x1404D8CA0 (CcAsyncReadWorker.c)
 */

char __fastcall CcAsyncReadWorkerThread(__int64 *StartContext)
{
  __int64 v1; // rax
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  unsigned __int64 *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rsi
  char *v9; // rax
  char *v10; // rbp
  __int64 **v11; // rax
  signed __int64 v12; // rax
  signed __int64 v13; // r8
  unsigned __int64 v14; // rtt
  __int64 v16; // [rsp+50h] [rbp+8h]

  v1 = StartContext[9];
  v3 = *((unsigned int *)StartContext + 9);
  v4 = StartContext[8];
  v5 = StartContext[7];
  v6 = (unsigned __int64 *)(v4 + 1160);
  v7 = *(_QWORD *)(v1 + 280) + 404 * v3;
  v8 = *(_QWORD *)(v1 + 232) + 16 * v3;
  v16 = v1;
  if ( !CcEnablePerVolumeLazyWriter )
    v6 = (unsigned __int64 *)(v5 + 1224);
  if ( *((_DWORD *)StartContext + 8) == 3 )
  {
    *(_DWORD *)(v7 + 4LL * *((unsigned int *)StartContext + 10)) = 0;
    CcAsyncReadWorker(StartContext);
    *(_DWORD *)(v7 + 4LL * *((unsigned int *)StartContext + 10)) = -1;
    v9 = (char *)KeAbPreAcquire((__int64)v6, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v9, (__int64)v6);
    if ( v10 )
      v10[10] = 1;
    v11 = *(__int64 ***)(v8 + 8);
    if ( *v11 != (__int64 *)v8 )
      __fastfail(3u);
    StartContext[1] = (__int64)v11;
    *StartContext = v8;
    *v11 = StartContext;
    *(_QWORD *)(v8 + 8) = StartContext;
    --*(_DWORD *)(*(_QWORD *)(v16 + 240) + 4 * v3);
    _m_prefetchw(v6);
    v12 = *v6;
    v13 = *v6 - 16;
    if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v13 = 0LL;
    if ( (v12 & 2) != 0 || (v14 = *v6, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v13, v12)) )
      ExfReleasePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    LOBYTE(v1) = CcDereferencePartitionAndPrivateVolumeCacheMap(v5, v4);
  }
  return v1;
}
