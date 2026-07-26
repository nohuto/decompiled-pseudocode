/*
 * XREFs of ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x140098C40
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14015FDF0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017F560 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x140043190 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x140043220 (NdisAcquireRWLockWrite.c)
 *     ndisReceiveQueueingOff @ 0x140067E90 (ndisReceiveQueueingOff.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1400866D0 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisReceiveQueueingOn @ 0x140089530 (ndisReceiveQueueingOn.c)
 */

void __fastcall ndisBindUnbindPeriodicReceives(__int64 a1, int a2)
{
  __int64 v4; // rdx
  struct _KTHREAD *CurrentThread; // rax
  bool v6; // zf
  struct _NDIS_FILTER_BLOCK *RefCountTracker; // rax
  NDIS_REFCOUNT_HANDLE__ **p_RefCountTracker; // rcx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( ndisPeriodicReceives )
  {
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    switch ( a2 )
    {
      case 0:
      case 1:
      case 2:
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 3176));
        *(_QWORD *)(a1 + 3184) = KeGetCurrentThread();
        ++*(_DWORD *)(a1 + 3216);
        if ( !*(_DWORD *)(a1 + 464) && byte_140125501 == 1 && dword_140125504 != -1 && !*(_DWORD *)(a1 + 3168) )
          ndisReceiveQueueingOn(a1, v4);
        goto LABEL_17;
      case 3:
      case 4:
      case 5:
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 3176));
        CurrentThread = KeGetCurrentThread();
        v6 = (*(_DWORD *)(a1 + 3216))-- == 1;
        *(_QWORD *)(a1 + 3184) = CurrentThread;
        if ( !v6 || !*(_DWORD *)(a1 + 3168) )
          goto LABEL_17;
        ndisReceiveQueueingOff(a1);
        ndisEmptyPeriodicReceivesQueue((struct _NDIS_FILTER_BLOCK *)a1, 1);
        RefCountTracker = qword_140125518;
        if ( qword_140125518 == (struct _NDIS_FILTER_BLOCK *)a1 )
        {
          qword_140125518 = (struct _NDIS_FILTER_BLOCK *)qword_140125518[2].PnPRef.RefCountTracker;
          goto LABEL_16;
        }
        break;
      default:
        goto LABEL_18;
    }
    while ( RefCountTracker )
    {
      p_RefCountTracker = &RefCountTracker[2].PnPRef.RefCountTracker;
      RefCountTracker = (struct _NDIS_FILTER_BLOCK *)RefCountTracker[2].PnPRef.RefCountTracker;
      if ( RefCountTracker == (struct _NDIS_FILTER_BLOCK *)a1 )
      {
        *p_RefCountTracker = RefCountTracker[2].PnPRef.RefCountTracker;
        break;
      }
    }
LABEL_16:
    *(_QWORD *)(a1 + 3160) = 0LL;
LABEL_17:
    *(_QWORD *)(a1 + 3184) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 3176));
LABEL_18:
    NdisReleaseRWLock(Lock, &LockState);
  }
}
