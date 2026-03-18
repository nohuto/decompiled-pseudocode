/*
 * XREFs of KeTerminateThread @ 0x1403AB638
 * Callers:
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1402874A0 (KiProcessThreadWaitList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14029FAB0 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckIfStackExpandCalloutActive @ 0x1403AB980 (KiCheckIfStackExpandCalloutActive.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1403AB9B4 (KiRemoveThreadFromSchedulingGroup.c)
 *     ExQueueWorkItemEx @ 0x1403ABC60 (ExQueueWorkItemEx.c)
 *     KeDisableProfiling @ 0x1404D9C90 (KeDisableProfiling.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeTerminateThread(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 CurrentIrql; // rcx
  __int64 *v5; // rsi
  struct _KPRCB **v6; // rdx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 *v9; // rdx
  __int64 **v10; // rax
  unsigned __int64 v11; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v13; // rdi
  _QWORD *v14; // rsi
  __int64 v15; // rax
  char v16; // cl
  __int64 v17; // r8
  signed __int64 *v18; // r8
  signed __int64 v19; // rax
  signed __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // edi
  signed __int32 v24[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KiCheckIfStackExpandCalloutActive(BugCheckParameter1);
  v2 = *(_QWORD *)(BugCheckParameter1 + 360);
  if ( v2 )
    KeDisableProfiling(BugCheckParameter1, *(_QWORD *)(v2 + 8));
  v3 = *(_QWORD *)(BugCheckParameter1 + 544);
  *(_BYTE *)(BugCheckParameter1 + 643) = 22;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v5 = (__int64 *)(BugCheckParameter1 + 760);
  if ( *(_QWORD *)(BugCheckParameter1 + 760) == *(_QWORD *)(BugCheckParameter1 + 768) )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&KiProcessListLock;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v6 = (struct _KPRCB **)_InterlockedExchange64(&KiProcessListLock, (__int64)&LockHandle);
      if ( v6 )
        KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, v6);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, &KiProcessListLock);
    }
    v7 = *(_QWORD *)(v3 + 272);
    v8 = *(_QWORD **)(v3 + 280);
    if ( *(_QWORD *)(v7 + 8) != v3 + 272 || *v8 != v3 + 272 )
LABEL_14:
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v3);
  v9 = (__int64 *)*v5;
  v10 = *(__int64 ***)(BugCheckParameter1 + 768);
  if ( *(__int64 **)(*v5 + 8) != v5 || *v10 != v5 )
    goto LABEL_14;
  *v10 = v9;
  v9[1] = (__int64)v10;
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  if ( *(_QWORD *)(BugCheckParameter1 + 104) )
    KiRemoveThreadFromSchedulingGroup(BugCheckParameter1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v11 = *(_QWORD *)(BugCheckParameter1 + 232);
  if ( v11 )
    KiActivateWaiterQueueWithNoLocks(BugCheckParameter1, v11, (_QWORD *)(BugCheckParameter1 + 520));
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)BugCheckParameter1);
  v13 = (_QWORD *)(BugCheckParameter1 + 8);
  *(_DWORD *)(BugCheckParameter1 + 4) = 1;
  v14 = *(_QWORD **)(BugCheckParameter1 + 8);
  while ( v14 != v13 )
  {
    v15 = (__int64)v14;
    v14 = (_QWORD *)*v14;
    v16 = *(_BYTE *)(v15 + 16);
    switch ( v16 )
    {
      case 1:
        v17 = *(unsigned __int16 *)(v15 + 18);
        goto LABEL_23;
      case 2:
        *(_BYTE *)(v15 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v15 + 24), (__int64 *)v15);
        break;
      case 4:
        *(_BYTE *)(v15 + 17) = 5;
        *(_DWORD *)(BugCheckParameter1 + 4) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v15 + 24), (PVOID)BugCheckParameter1, (PVOID)v15);
        break;
      default:
        v17 = 256LL;
LABEL_23:
        KiTryUnwaitThread((__int64)CurrentPrcb, v15, v17, 0LL);
        break;
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 16) = BugCheckParameter1 + 8;
  *v13 = v13;
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter1, 0xFFFFFF7F);
  *(_BYTE *)(BugCheckParameter1 + 388) = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64 *)CurrentPrcb, 1u, 0, 0);
  v18 = (signed __int64 *)(BugCheckParameter1 + 1256);
  _m_prefetchw(&PsReaperListHead);
  v19 = PsReaperListHead;
  do
  {
    *v18 = v19;
    v20 = v19;
    v19 = _InterlockedCompareExchange64(&PsReaperListHead, (signed __int64)v18, v19);
  }
  while ( v19 != v20 );
  if ( v19 )
  {
    if ( qword_140F05518 && _interlockedbittestandreset((volatile signed __int32 *)&qword_140F05518, 0) )
    {
      v21 = 0xFFFFLL;
      goto LABEL_30;
    }
  }
  else
  {
    v21 = 0xFFFFFFFFLL;
LABEL_30:
    if ( !(unsigned __int8)ExQueueWorkItemEx(&PsReaperWorkItem, 2LL, v21) )
      _interlockedbittestandset((volatile signed __int32 *)&qword_140F05518, 0);
  }
  _InterlockedOr(v24, 0);
  if ( *(_QWORD *)(BugCheckParameter1 + 64) )
  {
    v22 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v22 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  return KiSwapThread(BugCheckParameter1, CurrentPrcb, 0LL);
}
