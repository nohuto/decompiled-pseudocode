/*
 * XREFs of CcShouldSpinAsyncReadWorkerThread @ 0x1404D970C
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x14027372C (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncReadWorker @ 0x1404D8CA0 (CcAsyncReadWorker.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1402E62E0 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

char __fastcall CcShouldSpinAsyncReadWorkerThread(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v4; // r12
  __int64 v6; // r15
  __int64 v8; // r9
  unsigned __int64 *v9; // rbx
  char v10; // di
  _QWORD **v11; // rsi
  unsigned int v12; // ecx
  char *v13; // rax
  char *v14; // rbp
  signed __int64 v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  signed __int64 v18; // rax
  signed __int64 v19; // rdx
  unsigned __int64 v20; // rtt

  v4 = a2[2];
  v6 = a4;
  v8 = a2[35] + 404LL * a4;
  v9 = (unsigned __int64 *)(v4 + 1160);
  v10 = 1;
  v11 = (_QWORD **)(a2[29] + 16LL * (unsigned int)v6);
  if ( !CcEnablePerVolumeLazyWriter )
    v9 = (unsigned __int64 *)(a1 + 1224);
  v12 = 0;
  if ( CcMaxAsyncReadWorkerThreads )
  {
    while ( *(_DWORD *)(v8 + 4LL * v12) > 0x3Eu )
    {
      if ( ++v12 >= CcMaxAsyncReadWorkerThreads )
        goto LABEL_6;
    }
    return 0;
  }
  else
  {
LABEL_6:
    if ( a3 )
    {
      *a3 = 0LL;
      v13 = (char *)KeAbPreAcquire((__int64)v9, 0LL);
      v14 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
        ExfAcquirePushLockExclusiveEx(v9, v13, (__int64)v9);
      v15 = 0LL;
      if ( v14 )
        v14[10] = 1;
      v16 = *v11;
      if ( *v11 != v11 )
      {
        if ( (_QWORD **)v16[1] != v11 || (v17 = (_QWORD *)*v16, *(_QWORD **)(*v16 + 8LL) != v16) )
          __fastfail(3u);
        *v11 = v17;
        v17[1] = v11;
        *a3 = v16;
        ++*(_DWORD *)(a2[30] + 4 * v6);
        CcReferencePartitionAndPrivateVolumeCacheMap(a1, v4);
      }
      _m_prefetchw(v9);
      v18 = *v9;
      v19 = *v9 - 16;
      if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v19 = v15;
      if ( (v18 & 2) != 0 || (v20 = *v9, v20 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v19, v18)) )
        ExfReleasePushLock(v9);
      KeAbPostRelease((ULONG_PTR)v9);
      if ( !*a3 )
        _InterlockedAdd(&CcDbgFoundAsyncReadThreadListEmpty, 1u);
    }
  }
  return v10;
}
