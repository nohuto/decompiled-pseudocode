/*
 * XREFs of ExpWnfNotifyNameSubscribers @ 0x1408E5D40
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x1408E19F0 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1408E1CA8 (ExpWnfDeleteSubscription.c)
 *     NtDeleteWnfStateName @ 0x1408E24D0 (NtDeleteWnfStateName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1408E2CA0 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1408E3088 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1408E3DC0 (ExpWnfDispatchKernelSubscription.c)
 *     ExpNtUpdateWnfStateData @ 0x1408E4380 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408E5D40 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfSubscribeNameInstance @ 0x1409CFDD4 (ExpWnfSubscribeNameInstance.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1408E3DC0 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408E5D40 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1408E5F10 (ExpWnfInsertSubscriptionInPendingQueue.c)
 */

void __fastcall ExpWnfNotifyNameSubscribers(__int64 a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // r15d
  signed __int64 *v5; // rbp
  int v8; // esi
  int v9; // edi
  int v10; // r13d
  __int64 *v11; // rbx
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
    ExfAcquirePushLockSharedEx(v5, 0, v11, (unsigned __int64)v5);
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
