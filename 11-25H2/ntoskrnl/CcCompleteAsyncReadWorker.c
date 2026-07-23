/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x1404E04B0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1403A549C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcFindNextWorkQueueEntry @ 0x1403AC0BC (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x1403AC6BC (CcFreeWorkQueueEntry.c)
 *     CcCompleteAsyncRead @ 0x1404E018C (CcCompleteAsyncRead.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CcCompleteAsyncReadWorker(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbp
  _SLIST_ENTRY *NextWorkQueueEntry; // rsi
  unsigned __int64 *v4; // rdi
  __int64 v5; // r13
  char v6; // bl
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rsi
  _QWORD *v10; // r8
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  unsigned __int64 v13; // rtt
  __int64 v15; // [rsp+70h] [rbp+18h]

  if ( *(_DWORD *)(a1 + 32) == 4 )
  {
    v1 = *(_QWORD *)(a1 + 56);
    v2 = *(_QWORD *)(a1 + 72);
    NextWorkQueueEntry = *(_SLIST_ENTRY **)(a1 + 48);
    v4 = (unsigned __int64 *)(*(_QWORD *)(a1 + 64) + 1160LL);
    v15 = *(_QWORD *)(a1 + 64);
    if ( !CcEnablePerVolumeLazyWriter )
      v4 = (unsigned __int64 *)(v1 + 1224);
    v5 = *(unsigned int *)(a1 + 36);
    v6 = 0;
    do
    {
      CcCompleteAsyncRead((__int64)NextWorkQueueEntry);
      CcFreeWorkQueueEntry(NextWorkQueueEntry);
      v7 = KeAbPreAcquire((__int64)v4, 0LL);
      v9 = v7;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        ExfAcquirePushLockExclusiveEx(v4, v7, (__int64)v4);
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
      v10 = (_QWORD *)(16 * v5 + *(_QWORD *)(v2 + 264));
      if ( (_QWORD *)*v10 == v10 )
      {
        v6 = 1;
        NextWorkQueueEntry = 0LL;
        --*(_DWORD *)(*(_QWORD *)(v2 + 248) + 4 * v5);
      }
      else
      {
        NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry(v8, v2, v10);
      }
      _m_prefetchw(v4);
      v11 = *v4;
      v12 = *v4 - 16;
      if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v12 = 0LL;
      if ( (v11 & 2) != 0 || (v13 = *v4, v13 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v12, v11)) )
        ExfReleasePushLock(v4);
      KeAbPostRelease((ULONG_PTR)v4);
    }
    while ( !v6 );
    CcDereferencePartitionAndPrivateVolumeCacheMap(v1, v15);
    ExFreePoolWithTag((PVOID)a1, 0x71576343u);
  }
}
