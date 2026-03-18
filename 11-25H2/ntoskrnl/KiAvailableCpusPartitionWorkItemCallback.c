/*
 * XREFs of KiAvailableCpusPartitionWorkItemCallback @ 0x1405B4650
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiAcquireCpuPartitionAssignmentLock @ 0x14036D244 (KiAcquireCpuPartitionAssignmentLock.c)
 *     KiReleaseCpuPartitionAssignmentLock @ 0x14036D290 (KiReleaseCpuPartitionAssignmentLock.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404F8BC0 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404F8BEC (KiAvailableCpusSubscriptionQueueWorkItem.c)
 */

__int64 __fastcall KiAvailableCpusPartitionWorkItemCallback(__int64 a1)
{
  __int64 *v2; // rbx
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
        (unsigned __int64)&KiAvailableCpusSubscriptionLock);
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
