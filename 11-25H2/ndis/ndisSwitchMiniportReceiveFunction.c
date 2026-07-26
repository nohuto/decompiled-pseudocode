/*
 * XREFs of ndisSwitchMiniportReceiveFunction @ 0x140067CC0
 * Callers:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x140067B00 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 * Callees:
 *     ndisDoPeriodicReceivesIndication @ 0x140043410 (ndisDoPeriodicReceivesIndication.c)
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140067E60 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReceiveQueueingOff @ 0x140067E90 (ndisReceiveQueueingOff.c)
 *     ndisReceiveQueueingOn @ 0x140089530 (ndisReceiveQueueingOn.c)
 *     ndisTracePeriodicReceivesStart @ 0x1400974D0 (ndisTracePeriodicReceivesStart.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1400C92BC (ndisTracePeriodicRcvOnOff.c)
 *     ndisTracePeriodicReceivesEnd @ 0x1400C937C (ndisTracePeriodicReceivesEnd.c)
 */

__int64 __fastcall ndisSwitchMiniportReceiveFunction(int a1)
{
  struct _NDIS_MINIPORT_BLOCK *i; // rbx
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  struct _NDIS_MINIPORT_BLOCK *NextMiniportBlock; // r14
  struct _NET_BUFFER_LIST *QueuedHead; // rbx
  int NumMQueuedNbls; // eax
  __int64 Clock; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rax

  if ( a1 == 6 )
  {
    KeAcquireSpinLockAtDpcLevel(&ndisMiniportListLock);
    for ( i = ndisMiniportList; i; i = i->NextGlobalMiniport )
    {
      if ( !MiniportSupportsReceiveThrottle(i) )
      {
        KeAcquireSpinLockAtDpcLevel(&i->PeriodicReceiveQueue.SpinLock);
        i->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        if ( i->MediaType == NdisMedium802_3
          && i->PeriodicReceiveQueue.BoundToIP
          && i->PeriodicReceiveQueue.State == PeriodicReceivesOff )
        {
          ndisReceiveQueueingOn(i);
        }
        i->PeriodicReceiveQueue.LockThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&i->PeriodicReceiveQueue.SpinLock);
      }
    }
    KeReleaseSpinLockFromDpcLevel(&ndisMiniportListLock);
  }
  else
  {
    v3 = (struct _NDIS_MINIPORT_BLOCK *)qword_140125518;
    qword_140125518 = 0LL;
    if ( v3 )
    {
      do
      {
        NextMiniportBlock = v3->PeriodicReceiveQueue.NextMiniportBlock;
        KeAcquireSpinLockAtDpcLevel(&v3->PeriodicReceiveQueue.SpinLock);
        v3->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        ndisReceiveQueueingOff(v3);
        QueuedHead = v3->PeriodicReceiveQueue.QueuedHead;
        v3->PeriodicReceiveQueue.QueuedHead = 0LL;
        v3->PeriodicReceiveQueue.QueuedTail = 0LL;
        if ( QueuedHead )
        {
          NumMQueuedNbls = v3->PeriodicReceiveQueue.NumMQueuedNbls;
          v3->PeriodicReceiveQueue.TrackingDequeued += NumMQueuedNbls;
          v3->PeriodicReceiveQueue.NumNblsDequeued += NumMQueuedNbls;
          v3->PeriodicReceiveQueue.NumMQueuedNbls = 0;
          v3->PeriodicReceiveQueue.LockThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&v3->PeriodicReceiveQueue.SpinLock);
          if ( BYTE1(dword_140127110) )
          {
            ndisTracePeriodicReceivesStart(v3);
            Clock = WmiGetClock(0LL, 0LL);
            v8 = ndisDoPeriodicReceivesIndication(v3, QueuedHead);
            v9 = WmiGetClock(0LL, 0LL);
            ndisTracePeriodicReceivesEnd(v3, v9 - Clock, v8);
          }
          else
          {
            ndisDoPeriodicReceivesIndication(v3, QueuedHead);
          }
          KeAcquireSpinLockAtDpcLevel(&v3->PeriodicReceiveQueue.SpinLock);
        }
        else
        {
          v3->PeriodicReceiveQueue.NumMQueuedNbls = 0;
        }
        v3->PeriodicReceiveQueue.NextMiniportBlock = 0LL;
        v3->PeriodicReceiveQueue.LockThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&v3->PeriodicReceiveQueue.SpinLock);
        v3 = NextMiniportBlock;
      }
      while ( NextMiniportBlock );
    }
    if ( BYTE2(dword_140127110) )
      ndisTracePeriodicRcvOnOff(0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
