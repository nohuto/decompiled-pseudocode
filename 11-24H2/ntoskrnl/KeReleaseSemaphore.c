/*
 * XREFs of KeReleaseSemaphore @ 0x1403D91C0
 * Callers:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     PopFxQueueWorkItem @ 0x14029F7F4 (PopFxQueueWorkItem.c)
 *     PopPepRequestWork @ 0x1403170D0 (PopPepRequestWork.c)
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1403D77B8 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1403D8F34 (PopCompleteNotifyTransitionCommon.c)
 *     PopDispatchQuerySetIrp @ 0x1403D9EFC (PopDispatchQuerySetIrp.c)
 *     PnpDeviceCompletionQueueAddCompletedRequest @ 0x14043B514 (PnpDeviceCompletionQueueAddCompletedRequest.c)
 *     IoRaiseInformationalHardError @ 0x1404ADFA0 (IoRaiseInformationalHardError.c)
 *     PopIrpWorker @ 0x1404EBF10 (PopIrpWorker.c)
 *     PnpProcessRebalance @ 0x1405A97C8 (PnpProcessRebalance.c)
 *     FsRtlDeregisterUncProvider @ 0x14070AAC0 (FsRtlDeregisterUncProvider.c)
 *     FsRtlpRegisterUncProvider @ 0x14070ADD0 (FsRtlpRegisterUncProvider.c)
 *     IopAllocateBootResources @ 0x140725220 (IopAllocateBootResources.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14072D5E8 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14072D670 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14072D71C (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x1407346D4 (PnpReallocateResources.c)
 *     AlpcpDoPortCleanup @ 0x14088B7F4 (AlpcpDoPortCleanup.c)
 *     PnpAllocateResources @ 0x14098DAA8 (PnpAllocateResources.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1409C52C8 (IopInsertLegacyBusDeviceNode.c)
 *     IopLegacyResourceAllocation @ 0x140A0FC24 (IopLegacyResourceAllocation.c)
 *     IopUncacheInterfaceInformation @ 0x140A104B4 (IopUncacheInterfaceInformation.c)
 *     NtReleaseKeyedEvent @ 0x140A598F0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A5AFC0 (NtWaitForKeyedEvent.c)
 *     PopSystemIrpCompletion @ 0x140B6F8E0 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
