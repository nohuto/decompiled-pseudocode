/*
 * XREFs of KeReleaseSemaphore @ 0x1402F2490
 * Callers:
 *     PopPepRequestWork @ 0x1402BFC80 (PopPepRequestWork.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     PnpDeviceCompletionQueueAddCompletedRequest @ 0x1402F0794 (PnpDeviceCompletionQueueAddCompletedRequest.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1402F1298 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1402F2208 (PopCompleteNotifyTransitionCommon.c)
 *     PopFxQueueWorkItem @ 0x1403AA2B4 (PopFxQueueWorkItem.c)
 *     PopDispatchQuerySetIrp @ 0x1403CC360 (PopDispatchQuerySetIrp.c)
 *     IoRaiseInformationalHardError @ 0x1404A88B0 (IoRaiseInformationalHardError.c)
 *     PopIrpWorker @ 0x1404E3650 (PopIrpWorker.c)
 *     PnpProcessRebalance @ 0x1405A6738 (PnpProcessRebalance.c)
 *     FsRtlDeregisterUncProvider @ 0x140708680 (FsRtlDeregisterUncProvider.c)
 *     FsRtlpRegisterUncProvider @ 0x140708990 (FsRtlpRegisterUncProvider.c)
 *     IopAllocateBootResources @ 0x140722DB0 (IopAllocateBootResources.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14072B5F8 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14072B680 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14072B72C (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x140732604 (PnpReallocateResources.c)
 *     AlpcpDoPortCleanup @ 0x14088E7E4 (AlpcpDoPortCleanup.c)
 *     PnpAllocateResources @ 0x140978AE0 (PnpAllocateResources.c)
 *     IopInsertLegacyBusDeviceNode @ 0x140981EE8 (IopInsertLegacyBusDeviceNode.c)
 *     IopLegacyResourceAllocation @ 0x1409BE034 (IopLegacyResourceAllocation.c)
 *     IopUncacheInterfaceInformation @ 0x1409BE8C4 (IopUncacheInterfaceInformation.c)
 *     NtReleaseKeyedEvent @ 0x140A511B0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A528D0 (NtWaitForKeyedEvent.c)
 *     PopSystemIrpCompletion @ 0x140B71950 (PopSystemIrpCompletion.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v10; // edi
  LONG SignalState; // edi
  LONG v12; // eax
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v14; // rdx
  struct _LIST_ENTRY *v15; // rax
  struct _LIST_ENTRY *Blink; // rcx
  char v17; // cl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  if ( _interlockedbittestandset(&Semaphore->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v10);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (Semaphore->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Semaphore->Header.Lock, 7u) );
  }
  SignalState = Semaphore->Header.SignalState;
  v12 = SignalState + Adjustment;
  if ( SignalState + Adjustment < SignalState || v12 > Semaphore->Limit )
  {
    _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  Semaphore->Header.SignalState = v12;
  if ( !SignalState )
  {
    Flink = Semaphore->Header.WaitListHead.Flink;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( Flink == &Semaphore->Header.WaitListHead )
          goto LABEL_15;
        v14 = Flink->Flink;
        v15 = Flink;
        Flink = v14;
        Blink = v15->Blink;
        if ( v14->Blink != v15 || Blink->Flink != v15 )
          __fastfail(3u);
        Blink->Flink = v14;
        v14->Blink = Blink;
        v17 = (char)v15[1].Flink;
        if ( v17 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v15, WORD1(v15[1].Flink), 0LL) )
        {
LABEL_14:
          if ( Semaphore->Header.SignalState-- == 1 )
            goto LABEL_15;
        }
      }
      if ( v17 == 2 )
      {
        BYTE1(v15[1].Flink) = 5;
        KiInsertQueueInternal((__int64)v15[1].Blink, (__int64 *)v15);
        goto LABEL_14;
      }
      if ( v17 == 4 )
      {
        BYTE1(v15[1].Flink) = 5;
        Semaphore->Header.SignalState = 0;
        KeInsertQueueDpc((PRKDPC)v15[1].Blink, Semaphore, v15);
      }
      else
      {
        KiTryUnwaitThread(CurrentPrcb, v15, 256LL, 0LL);
      }
    }
  }
LABEL_15:
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, Wait != 0 ? 3 : 0, 1u, Increment, CurrentIrql);
  return SignalState;
}
