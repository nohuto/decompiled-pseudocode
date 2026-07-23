/*
 * XREFs of KeTerminateThread @ 0x1402D5BB8
 * Callers:
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1402C75B0 (KiProcessThreadWaitList.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402D4F94 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 *     KiCheckIfStackExpandCalloutActive @ 0x1402D6890 (KiCheckIfStackExpandCalloutActive.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402D68C4 (KiRemoveThreadFromSchedulingGroup.c)
 *     ExQueueWorkItemEx @ 0x1402D6B60 (ExQueueWorkItemEx.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeDisableProfiling @ 0x1404D2094 (KeDisableProfiling.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeTerminateThread(char *SystemArgument1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 CurrentIrql; // rcx
  char *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rdx
  char **v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v14; // rdi
  _QWORD *v15; // rsi
  _QWORD *v16; // rax
  char v17; // cl
  __int64 v18; // r8
  signed __int64 *v19; // r8
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // edi
  signed __int32 v25[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v26; // [rsp+20h] [rbp-28h] BYREF
  __int64 v27; // [rsp+30h] [rbp-18h]

  v26 = 0LL;
  v27 = 0LL;
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
    *(_QWORD *)&v26 = 0LL;
    *((_QWORD *)&v26 + 1) = &KiProcessListLock;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v6 = _InterlockedExchange64(&KiProcessListLock, (__int64)&v26);
      if ( v6 )
        KxWaitForLockOwnerShip(&v26, v6);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&v26, &KiProcessListLock);
    }
    v7 = *(_QWORD *)(v3 + 272);
    v8 = *(__int64 **)(v3 + 280);
    if ( *(_QWORD *)(v7 + 8) != v3 + 272 || *v8 != v3 + 272 )
LABEL_14:
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v26, v7);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v3);
  v9 = *(_QWORD *)v5;
  v10 = (char **)*((_QWORD *)SystemArgument1 + 96);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v10 != v5 )
    goto LABEL_14;
  *v10 = (char *)v9;
  *(_QWORD *)(v9 + 8) = v10;
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  if ( *((_QWORD *)SystemArgument1 + 13) )
    KiRemoveThreadFromSchedulingGroup(SystemArgument1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v12 = *((_QWORD *)SystemArgument1 + 29);
  if ( v12 )
    KiActivateWaiterQueueWithNoLocks((__int64)SystemArgument1, v12, (_QWORD *)SystemArgument1 + 65, v11);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)SystemArgument1);
  v14 = SystemArgument1 + 8;
  *((_DWORD *)SystemArgument1 + 1) = 1;
  v15 = (_QWORD *)*((_QWORD *)SystemArgument1 + 1);
  while ( v15 != v14 )
  {
    v16 = v15;
    v15 = (_QWORD *)*v15;
    v17 = *((_BYTE *)v16 + 16);
    switch ( v17 )
    {
      case 1:
        v18 = *((unsigned __int16 *)v16 + 9);
        goto LABEL_25;
      case 2:
        *((_BYTE *)v16 + 17) = 5;
        KiInsertQueueInternal(v16[3], v16);
        break;
      case 4:
        *((_BYTE *)v16 + 17) = 5;
        *((_DWORD *)SystemArgument1 + 1) = 0;
        KeInsertQueueDpc((PRKDPC)v16[3], SystemArgument1, v16);
        break;
      default:
        v18 = 256LL;
LABEL_25:
        KiTryUnwaitThread(CurrentPrcb, v16, v18, 0LL);
        break;
    }
  }
  *((_QWORD *)SystemArgument1 + 2) = SystemArgument1 + 8;
  *v14 = v14;
  _InterlockedAnd((volatile signed __int32 *)SystemArgument1, 0xFFFFFF7F);
  SystemArgument1[388] = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0, 0);
  v19 = (signed __int64 *)(SystemArgument1 + 1256);
  _m_prefetchw(&PsReaperListHead);
  v20 = PsReaperListHead;
  do
  {
    *v19 = v20;
    v21 = v20;
    v20 = _InterlockedCompareExchange64(&PsReaperListHead, (signed __int64)v19, v20);
  }
  while ( v20 != v21 );
  if ( v20 )
  {
    if ( qword_140F05BB8 && _interlockedbittestandreset((volatile signed __int32 *)&qword_140F05BB8, 0) )
    {
      v22 = 0xFFFFLL;
      goto LABEL_32;
    }
  }
  else
  {
    v22 = 0xFFFFFFFFLL;
LABEL_32:
    if ( !(unsigned __int8)ExQueueWorkItemEx(&PsReaperWorkItem, 2LL, v22) )
      _interlockedbittestandset((volatile signed __int32 *)&qword_140F05BB8, 0);
  }
  _InterlockedOr(v25, 0);
  if ( *((_QWORD *)SystemArgument1 + 8) )
  {
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)SystemArgument1 + 16, 0LL) )
    {
      do
      {
        if ( (++v23 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v23);
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
