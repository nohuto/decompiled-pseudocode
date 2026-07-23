/*
 * XREFs of ExpWnfNotifyNameSubscribers @ 0x140904190
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x1409002F0 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1409005A8 (ExpWnfDeleteSubscription.c)
 *     NtDeleteWnfStateName @ 0x140900ED0 (NtDeleteWnfStateName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1409016A0 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140901A5C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140904190 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140904520 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfSubscribeNameInstance @ 0x1409C32E4 (ExpWnfSubscribeNameInstance.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140904190 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140904350 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140904520 (ExpWnfDispatchKernelSubscription.c)
 */

void __fastcall ExpWnfNotifyNameSubscribers(__int64 a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // r15d
  signed __int64 *v5; // rbp
  int v8; // esi
  int v9; // edi
  int v10; // r13d
  char *v11; // rbx
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
  v11 = (char *)KeAbPreAcquire(a1 + 112, 0LL);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v11, (__int64)v5);
  if ( v11 )
    v11[10] = 1;
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
