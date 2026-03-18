/*
 * XREFs of KiAvailableCpusPartitionWorkItemCallback @ 0x1405B8540
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     KiAcquireCpuPartitionAssignmentLock @ 0x14043A2D4 (KiAcquireCpuPartitionAssignmentLock.c)
 *     KiReleaseCpuPartitionAssignmentLock @ 0x14043A320 (KiReleaseCpuPartitionAssignmentLock.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404FB240 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404FB26C (KiAvailableCpusSubscriptionQueueWorkItem.c)
 */

__int64 __fastcall KiAvailableCpusPartitionWorkItemCallback(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 i; // rbx
  __int64 v4; // rax
  _QWORD **v5; // rdi
  _QWORD *j; // rbx
  unsigned __int8 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0;
  if ( a1 == KiSystemCpuPartition )
  {
    v2 = KeAbPreAcquire((__int64)&KiAvailableCpusSubscriptionLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&KiAvailableCpusSubscriptionLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&KiAvailableCpusSubscriptionLock,
        0,
        v2,
        (__int64)&KiAvailableCpusSubscriptionLock);
    if ( v2 )
      *((_BYTE *)v2 + 10) = 1;
    for ( i = KiAvailableCpusSubscriptionList; (__int64 *)i != &KiAvailableCpusSubscriptionList; i = *(_QWORD *)i )
    {
      v4 = *(_QWORD *)(i - 24);
      if ( !v4 || *(_QWORD *)(v4 + 432) == v4 + 432 )
        KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(i + 16));
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&KiAvailableCpusSubscriptionLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&KiAvailableCpusSubscriptionLock);
    KeAbPostRelease((ULONG_PTR)&KiAvailableCpusSubscriptionLock);
  }
  KiAcquireCpuPartitionAssignmentLock(&v8);
  v5 = (_QWORD **)(a1 + 16);
  for ( j = *v5; j != v5; j = (_QWORD *)*j )
    KiNotifyAvailableCpusChangeProcess(*(j - 2));
  return KiReleaseCpuPartitionAssignmentLock(v8);
}
