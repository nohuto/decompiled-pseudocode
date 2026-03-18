/*
 * XREFs of KiAvailableCpusProcessWorkItemCallback @ 0x14072FC60
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404F8BEC (KiAvailableCpusSubscriptionQueueWorkItem.c)
 */

__int64 __fastcall KiAvailableCpusProcessWorkItemCallback(__int64 a1)
{
  __int64 v1; // rsi
  signed __int64 *v2; // rbx
  __int64 *v3; // rdi
  struct _WORK_QUEUE_ITEM **v4; // rsi
  struct _WORK_QUEUE_ITEM *i; // rdi

  v1 = *(_QWORD *)(a1 + 448);
  v2 = (signed __int64 *)(v1 + 32);
  v3 = KeAbPreAcquire(v1 + 32, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 32), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v1 + 32), 0, v3, v1 + 32);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = (struct _WORK_QUEUE_ITEM **)(v1 + 40);
  for ( i = *v4; i != (struct _WORK_QUEUE_ITEM *)v4; i = (struct _WORK_QUEUE_ITEM *)i->List.Flink )
    KiAvailableCpusSubscriptionQueueWorkItem(i + 1);
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
