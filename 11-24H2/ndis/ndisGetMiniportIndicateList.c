/*
 * XREFs of ndisGetMiniportIndicateList @ 0x140040390
 * Callers:
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x14003F920 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140040AC0 (-ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

_NET_BUFFER_LIST *__fastcall ndisGetMiniportIndicateList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NET_BUFFER_LIST *QueuedHead; // rsi
  unsigned int MaxNblCount; // edi
  int v4; // edx
  _NET_BUFFER_LIST *i; // rcx

  QueuedHead = 0LL;
  MaxNblCount = ndisPeriodicReceivesGetMaxNblCount(a1);
  KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
  a1->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
  if ( a1->PeriodicReceiveQueue.NumMQueuedNbls )
  {
    QueuedHead = a1->PeriodicReceiveQueue.QueuedHead;
    v4 = 0;
    for ( i = QueuedHead; i; i = (_NET_BUFFER_LIST *)i->Link.Alignment )
    {
      ++a1->PeriodicReceiveQueue.TrackingDequeued;
      ++v4;
      if ( !--MaxNblCount )
        break;
    }
    if ( i )
    {
      a1->PeriodicReceiveQueue.QueuedHead = (_NET_BUFFER_LIST *)i->Link.Alignment;
      i->Link.Alignment = 0LL;
    }
    else
    {
      a1->PeriodicReceiveQueue.QueuedHead = 0LL;
    }
    if ( !a1->PeriodicReceiveQueue.QueuedHead )
      a1->PeriodicReceiveQueue.QueuedTail = 0LL;
    a1->PeriodicReceiveQueue.NumMQueuedNbls -= v4;
    a1->PeriodicReceiveQueue.NumNblsDequeued += v4;
  }
  a1->PeriodicReceiveQueue.LockThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
  return QueuedHead;
}
