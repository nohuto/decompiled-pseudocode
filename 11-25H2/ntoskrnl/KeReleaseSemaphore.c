/*
 * XREFs of KeReleaseSemaphore @ 0x14027FE40
 * Callers:
 *     PopFxQueueWorkItem @ 0x1402813BC (PopFxQueueWorkItem.c)
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 *     PopPepRequestWork @ 0x1402C126C (PopPepRequestWork.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x140356360 (PopFxHandleReportDevicePoweredOn.c)
 *     PopIrpWorker @ 0x140356760 (PopIrpWorker.c)
 *     PopDispatchQuerySetIrp @ 0x1403570D0 (PopDispatchQuerySetIrp.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x140358230 (PopHandleDevicePowerIrpCompletion.c)
 *     PnpDeviceCompletionQueueAddCompletedRequest @ 0x140463C9C (PnpDeviceCompletionQueueAddCompletedRequest.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x140477304 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140477380 (PopCompleteNotifyTransitionCommon.c)
 *     IoRaiseInformationalHardError @ 0x1404AD170 (IoRaiseInformationalHardError.c)
 *     PnpProcessRebalance @ 0x1405A5E38 (PnpProcessRebalance.c)
 *     FsRtlDeregisterUncProvider @ 0x1406FEBE0 (FsRtlDeregisterUncProvider.c)
 *     FsRtlpRegisterUncProvider @ 0x1406FEEF0 (FsRtlpRegisterUncProvider.c)
 *     IopAllocateBootResources @ 0x1407192A0 (IopAllocateBootResources.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x140721668 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x1407216F0 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14072179C (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x140728444 (PnpReallocateResources.c)
 *     IopLegacyResourceAllocation @ 0x140830B88 (IopLegacyResourceAllocation.c)
 *     PnpAllocateResources @ 0x1408310F4 (PnpAllocateResources.c)
 *     AlpcpDoPortCleanup @ 0x14098B834 (AlpcpDoPortCleanup.c)
 *     IopUncacheInterfaceInformation @ 0x1409A1274 (IopUncacheInterfaceInformation.c)
 *     NtReleaseKeyedEvent @ 0x140A55CF0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A58420 (NtWaitForKeyedEvent.c)
 *     IopInsertLegacyBusDeviceNode @ 0x140AB7C0C (IopInsertLegacyBusDeviceNode.c)
 *     PopSystemIrpCompletion @ 0x140B5A4B0 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v10; // edi
  LONG SignalState; // edi
  LONG v12; // eax
  struct _KSEMAPHORE *Flink; // rsi
  struct _KSEMAPHORE *v14; // rdx
  struct _KSEMAPHORE *v15; // rax
  struct _LIST_ENTRY *v16; // rcx
  char Blink; // cl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  if ( _interlockedbittestandset(&Semaphore->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Semaphore) )
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
  if ( SignalState + Adjustment > Semaphore->Limit || v12 < SignalState )
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
    Flink = (struct _KSEMAPHORE *)Semaphore->Header.WaitListHead.Flink;
    while ( Flink != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead )
    {
      v14 = *(struct _KSEMAPHORE **)&Flink->Header.Lock;
      v15 = Flink;
      Flink = v14;
      v16 = v15->Header.WaitListHead.Flink;
      if ( (struct _KSEMAPHORE *)v14->Header.WaitListHead.Flink != v15 || (struct _KSEMAPHORE *)v16->Flink != v15 )
        __fastfail(3u);
      v16->Flink = (struct _LIST_ENTRY *)v14;
      v14->Header.WaitListHead.Flink = v16;
      Blink = (char)v15->Header.WaitListHead.Blink;
      switch ( Blink )
      {
        case 1:
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v15, WORD1(v15->Header.WaitListHead.Blink), 0LL) )
            goto LABEL_12;
          break;
        case 2:
          BYTE1(v15->Header.WaitListHead.Blink) = 5;
          KiInsertQueueInternal(*(_QWORD *)&v15->Limit, (__int64 *)&v15->Header.Lock);
LABEL_12:
          if ( Semaphore->Header.SignalState-- == 1 )
            goto LABEL_13;
          break;
        case 4:
          BYTE1(v15->Header.WaitListHead.Blink) = 5;
          Semaphore->Header.SignalState = 0;
          KeInsertQueueDpc(*(PRKDPC *)&v15->Limit, Semaphore, v15);
          break;
        default:
          KiTryUnwaitThread(CurrentPrcb, v15, 256LL, 0LL);
          break;
      }
    }
  }
LABEL_13:
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, Wait != 0 ? 3 : 0, 1, Increment, CurrentIrql);
  return SignalState;
}
