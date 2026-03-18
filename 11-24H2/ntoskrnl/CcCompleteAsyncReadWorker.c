/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x1404DFBA0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     CcFindNextWorkQueueEntry @ 0x1402A788C (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x1402A7E6C (CcFreeWorkQueueEntry.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402CD54C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CcCompleteAsyncRead @ 0x1404DF87C (CcCompleteAsyncRead.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CcCompleteAsyncReadWorker(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbp
  struct _SLIST_ENTRY *NextWorkQueueEntry; // rsi
  unsigned __int64 *v4; // rdi
  __int64 v5; // r13
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  _QWORD *v13; // r8
  signed __int64 v14; // rax
  signed __int64 v15; // rdx
  unsigned __int64 v16; // rtt
  __int64 v18; // [rsp+70h] [rbp+18h]

  if ( *(_DWORD *)(a1 + 32) == 4 )
  {
    v1 = *(_QWORD *)(a1 + 56);
    v2 = *(_QWORD *)(a1 + 72);
    NextWorkQueueEntry = *(struct _SLIST_ENTRY **)(a1 + 48);
    v4 = (unsigned __int64 *)(*(_QWORD *)(a1 + 64) + 1160LL);
    v18 = *(_QWORD *)(a1 + 64);
    if ( !CcEnablePerVolumeLazyWriter )
      v4 = (unsigned __int64 *)(v1 + 1224);
    v5 = *(unsigned int *)(a1 + 36);
    v6 = 0;
    do
    {
      CcCompleteAsyncRead((__int64)NextWorkQueueEntry);
      CcFreeWorkQueueEntry(NextWorkQueueEntry, v7, v8, v9);
      v10 = KeAbPreAcquire((__int64)v4, 0LL);
      v12 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        ExfAcquirePushLockExclusiveEx(v4, (__int64)v10, (__int64)v4);
      if ( v12 )
        *((_BYTE *)v12 + 10) = 1;
      v13 = (_QWORD *)(16 * v5 + *(_QWORD *)(v2 + 264));
      if ( (_QWORD *)*v13 == v13 )
      {
        v6 = 1;
        NextWorkQueueEntry = 0LL;
        --*(_DWORD *)(*(_QWORD *)(v2 + 248) + 4 * v5);
      }
      else
      {
        NextWorkQueueEntry = (struct _SLIST_ENTRY *)CcFindNextWorkQueueEntry(v11, v2, v13);
      }
      _m_prefetchw(v4);
      v14 = *v4;
      v15 = *v4 - 16;
      if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v15 = 0LL;
      if ( (v14 & 2) != 0 || (v16 = *v4, v16 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v15, v14)) )
        ExfReleasePushLock(v4);
      KeAbPostRelease((ULONG_PTR)v4);
    }
    while ( !v6 );
    CcDereferencePartitionAndPrivateVolumeCacheMap(v1, v18);
    ExFreePoolWithTag((PVOID)a1, 0x71576343u);
  }
}
