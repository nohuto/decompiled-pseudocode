/*
 * XREFs of KeTerminateThread @ 0x1402A6488
 * Callers:
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402A5864 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiSwapThread @ 0x1402A6990 (KiSwapThread.c)
 *     KiCheckIfStackExpandCalloutActive @ 0x1402A7160 (KiCheckIfStackExpandCalloutActive.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402A7194 (KiRemoveThreadFromSchedulingGroup.c)
 *     ExQueueWorkItemEx @ 0x1402A7430 (ExQueueWorkItemEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x14031EA20 (KiProcessThreadWaitList.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KeDisableProfiling @ 0x1404D8C44 (KeDisableProfiling.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeTerminateThread(char *SystemArgument1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 CurrentIrql; // rcx
  char *v5; // rsi
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  char **v9; // rax
  unsigned __int64 v10; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v12; // rdi
  _QWORD *v13; // rsi
  _QWORD *v14; // rax
  char v15; // cl
  __int64 v16; // r8
  signed __int64 *v17; // r8
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // edi
  signed __int32 v23[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v24; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+30h] [rbp-18h]

  v24 = 0LL;
  v25 = 0LL;
  KiCheckIfStackExpandCalloutActive((ULONG_PTR)SystemArgument1);
  v2 = *((_QWORD *)SystemArgument1 + 45);
  if ( v2 )
    KeDisableProfiling(SystemArgument1, *(_QWORD *)(v2 + 8));
  v3 = *((_QWORD *)SystemArgument1 + 68);
  SystemArgument1[643] = 22;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v2);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v5 = SystemArgument1 + 760;
  if ( *((_QWORD *)SystemArgument1 + 95) == *((_QWORD *)SystemArgument1 + 96) )
  {
    *(_QWORD *)&v24 = 0LL;
    *((_QWORD *)&v24 + 1) = &KiProcessListLock;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64(&KiProcessListLock, (__int64)&v24) )
        KxWaitForLockOwnerShip(&v24);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&v24, &KiProcessListLock);
    }
    v6 = *(_QWORD *)(v3 + 272);
    v7 = *(_QWORD **)(v3 + 280);
    if ( *(_QWORD *)(v6 + 8) != v3 + 272 || *v7 != v3 + 272 )
LABEL_14:
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    KxReleaseQueuedSpinLock(&v24);
  }
  KiAcquireKobjectLockSafe(v3);
  v8 = *(_QWORD *)v5;
  v9 = (char **)*((_QWORD *)SystemArgument1 + 96);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v9 != v5 )
    goto LABEL_14;
  *v9 = (char *)v8;
  *(_QWORD *)(v8 + 8) = v9;
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  if ( *((_QWORD *)SystemArgument1 + 13) )
    KiRemoveThreadFromSchedulingGroup(SystemArgument1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v10 = *((_QWORD *)SystemArgument1 + 29);
  if ( v10 )
    KiActivateWaiterQueueWithNoLocks((__int64)SystemArgument1, v10, (_QWORD *)SystemArgument1 + 65);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(SystemArgument1);
  v12 = SystemArgument1 + 8;
  *((_DWORD *)SystemArgument1 + 1) = 1;
  v13 = (_QWORD *)*((_QWORD *)SystemArgument1 + 1);
  while ( v13 != v12 )
  {
    v14 = v13;
    v13 = (_QWORD *)*v13;
    v15 = *((_BYTE *)v14 + 16);
    switch ( v15 )
    {
      case 1:
        v16 = *((unsigned __int16 *)v14 + 9);
        goto LABEL_25;
      case 2:
        *((_BYTE *)v14 + 17) = 5;
        KiInsertQueueInternal(v14[3], v14);
        break;
      case 4:
        *((_BYTE *)v14 + 17) = 5;
        *((_DWORD *)SystemArgument1 + 1) = 0;
        KeInsertQueueDpc((PRKDPC)v14[3], SystemArgument1, v14);
        break;
      default:
        v16 = 256LL;
LABEL_25:
        KiTryUnwaitThread(CurrentPrcb, v14, v16, 0LL);
        break;
    }
  }
  *((_QWORD *)SystemArgument1 + 2) = SystemArgument1 + 8;
  *v12 = v12;
  _InterlockedAnd((volatile signed __int32 *)SystemArgument1, 0xFFFFFF7F);
  SystemArgument1[388] = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL);
  v17 = (signed __int64 *)(SystemArgument1 + 1256);
  _m_prefetchw(&PsReaperListHead);
  v18 = PsReaperListHead;
  do
  {
    *v17 = v18;
    v19 = v18;
    v18 = _InterlockedCompareExchange64(&PsReaperListHead, (signed __int64)v17, v18);
  }
  while ( v18 != v19 );
  if ( v18 )
  {
    if ( qword_140F059B8 && _interlockedbittestandreset((volatile signed __int32 *)&qword_140F059B8, 0) )
    {
      v20 = 0xFFFFLL;
      goto LABEL_32;
    }
  }
  else
  {
    v20 = 0xFFFFFFFFLL;
LABEL_32:
    if ( !(unsigned __int8)ExQueueWorkItemEx(&PsReaperWorkItem, 2LL, v20) )
      _interlockedbittestandset((volatile signed __int32 *)&qword_140F059B8, 0);
  }
  _InterlockedOr(v23, 0);
  if ( *((_QWORD *)SystemArgument1 + 8) )
  {
    v21 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)SystemArgument1 + 16, 0LL) )
    {
      do
      {
        if ( (++v21 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v21);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *((_QWORD *)SystemArgument1 + 8) );
    }
    *((_QWORD *)SystemArgument1 + 8) = 0LL;
  }
  return KiSwapThread((ULONG_PTR)SystemArgument1);
}
