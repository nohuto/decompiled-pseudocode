/*
 * XREFs of ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x14003F920
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisAcquireRWLockRead @ 0x14003FA30 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x14003FCA0 (NdisReleaseRWLock.c)
 *     ndisDoPeriodicReceivesIndication @ 0x14003FE50 (ndisDoPeriodicReceivesIndication.c)
 *     ndisGetMiniportIndicateList @ 0x140040390 (ndisGetMiniportIndicateList.c)
 *     ndisQueuePeriodicReceivesWorkItem @ 0x140040B20 (ndisQueuePeriodicReceivesWorkItem.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x140040CE0 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ndisTracePeriodicReceivesStart @ 0x14008BD20 (ndisTracePeriodicReceivesStart.c)
 *     ndisTracePeriodicReceivesEnd @ 0x1400C214C (ndisTracePeriodicReceivesEnd.c)
 */

void __fastcall ndisPeriodicReceivesWorker(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 Clock; // rsi
  char v3; // di
  struct _NET_BUFFER_LIST *MiniportIndicateList; // rax
  unsigned int v5; // ebp
  __int64 v6; // rax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( BYTE1(dword_14011D060) )
  {
    v3 = 1;
    ndisTracePeriodicReceivesStart();
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    Clock = 0LL;
    v3 = 0;
  }
  NdisAcquireRWLockRead(Lock, &LockState, 1u);
  MiniportIndicateList = (struct _NET_BUFFER_LIST *)ndisGetMiniportIndicateList(a1);
  v5 = ndisDoPeriodicReceivesIndication(a1, MiniportIndicateList);
  NdisReleaseRWLock(Lock, &LockState);
  if ( v3 )
  {
    v6 = WmiGetClock(0LL, 0LL);
    ndisTracePeriodicReceivesEnd(a1, v6 - Clock, v5);
  }
  a1->PeriodicReceiveQueue.WorkItemQueued = 0;
  _InterlockedOr(v7, 0);
  if ( a1->PeriodicReceiveQueue.NumMQueuedNbls )
  {
    ndisQueuePeriodicReceivesWorkItem((char)a1);
    ndisQueuePeriodicReceivesTimer();
  }
  ndisDereferenceMiniport(a1, 0x4Cu);
}
