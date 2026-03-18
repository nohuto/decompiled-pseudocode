/*
 * XREFs of ExpWnfNotifyNameSubscribers @ 0x1408ADF30
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x1408AA090 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1408AA348 (ExpWnfDeleteSubscription.c)
 *     NtDeleteWnfStateName @ 0x1408AAC70 (NtDeleteWnfStateName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1408AB440 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1408AB7FC (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408ADF30 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1408AE2C0 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfSubscribeNameInstance @ 0x1409D34B4 (ExpWnfSubscribeNameInstance.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408ADF30 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1408AE0F0 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1408AE2C0 (ExpWnfDispatchKernelSubscription.c)
 */

void __fastcall ExpWnfNotifyNameSubscribers(__int64 a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // r15d
  signed __int64 *v5; // rbp
  int v8; // esi
  int v9; // edi
  int v10; // r13d
  _QWORD *v11; // rbx
  __int64 *v12; // rbx
  __int64 *v13; // r14
  int inserted; // eax
  __int64 v15; // rcx
  struct _KEVENT *v16; // rcx

  v4 = 0;
  v5 = (signed __int64 *)(a1 + 112);
  v8 = a4;
  v9 = 1;
  v10 = 0;
  v11 = KeAbPreAcquire(a1 + 112, 0LL);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v11, (__int64)v5);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  v12 = *(__int64 **)(a1 + 120);
  v13 = (__int64 *)(a1 + 120);
  if ( v12 != v13 )
  {
    do
    {
      if ( v9 && (*((_BYTE *)v12 + 36) & 1) != 0 )
        v9 = 0;
      inserted = ExpWnfInsertSubscriptionInPendingQueue(v12 - 8, a2);
      v15 = *(v12 - 3);
      if ( inserted )
      {
        if ( (PEPROCESS)v15 == PsInitialSystemProcess )
        {
          v10 = 1;
        }
        else
        {
          v16 = *(struct _KEVENT **)(*(_QWORD *)(v15 + 1512) + 128LL);
          if ( v16 )
            KeSetEvent(v16, 1, 0);
        }
      }
      v12 = (__int64 *)*v12;
    }
    while ( v12 != v13 );
    v8 = a4;
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  if ( v9 && (a2 & 1) != 0 )
  {
    if ( !v10 && a3 )
      v4 = 1;
    ExpWnfNotifyNameSubscribers(a1, 8LL, v4);
  }
  if ( v10 && a3 )
  {
    if ( v8 )
    {
      ExpWnfDispatchKernelSubscription();
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(ExpWnfDispatcher + 40), 2u);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(ExpWnfDispatcher + 40), 3, 2) == 2 )
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(ExpWnfDispatcher + 8), DelayedWorkQueue);
    }
  }
}
