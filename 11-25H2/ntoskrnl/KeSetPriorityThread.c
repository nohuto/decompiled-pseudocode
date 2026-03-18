/*
 * XREFs of KeSetPriorityThread @ 0x1403778B0
 * Callers:
 *     KeGenericProcessorCallback @ 0x140277E30 (KeGenericProcessorCallback.c)
 *     MiSetIdealProcessorThread @ 0x140377430 (MiSetIdealProcessorThread.c)
 *     KeSetThreadSchedulerAssist @ 0x1403E7EF8 (KeSetThreadSchedulerAssist.c)
 *     MiMappedPageWriter @ 0x14040C760 (MiMappedPageWriter.c)
 *     MiDereferenceSegmentThread @ 0x140458D80 (MiDereferenceSegmentThread.c)
 *     MiRebuildLargePagesThread @ 0x140475C40 (MiRebuildLargePagesThread.c)
 *     CcApplyLowIoPriorityToThread @ 0x1404DB588 (CcApplyLowIoPriorityToThread.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404DB798 (CcBoostLowPriorityWorkerThread.c)
 *     FsRtlWorkerThread @ 0x14057E960 (FsRtlWorkerThread.c)
 *     KeBalanceSetManager @ 0x1405C0270 (KeBalanceSetManager.c)
 *     KeSwapProcessOrStack @ 0x1405C0540 (KeSwapProcessOrStack.c)
 *     KiExecuteDpc @ 0x1405C2BB0 (KiExecuteDpc.c)
 *     PfTSetTraceWorkerPriority @ 0x1405C8110 (PfTSetTraceWorkerPriority.c)
 *     ExRegisterBootDevice @ 0x140649CF0 (ExRegisterBootDevice.c)
 *     MiPartitionWorkingSetManager @ 0x140667880 (MiPartitionWorkingSetManager.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140B82010 (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     EtwTracePriority @ 0x14020E1D8 (EtwTracePriority.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiQueryQuantumReset @ 0x1402E5930 (KiQueryQuantumReset.c)
 *     KiAdjustRealtimePriorityFloor @ 0x1402E673C (KiAdjustRealtimePriorityFloor.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  PKTHREAD v3; // rdi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r14
  int v6; // esi
  struct _KTHREAD *CurrentThread; // r15
  int v8; // ebp
  unsigned __int64 updated; // rax
  struct _KPRCB *v10; // rcx
  unsigned __int64 CycleTime; // rsi
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 v13; // rcx
  KPRIORITY BasePriority; // eax
  int v15; // ebx
  char v16; // al
  int v17; // esi
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  _QWORD *v21; // [rsp+60h] [rbp+8h] BYREF

  v3 = Thread;
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  v21 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Thread) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Thread);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v3->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
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
    while ( v3->ThreadLock );
  }
  v8 = v3->Priority;
  if ( Priority != v8 )
  {
    if ( v3 != CurrentThread || CurrentPrcb->NestingLevel )
    {
      CycleTime = v3->CycleTime;
    }
    else
    {
      _disable();
      updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)v3, 0LL);
      v10 = KeGetCurrentPrcb();
      CycleTime = updated;
      SchedulerAssist = (signed __int32 *)v10->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v19 = *SchedulerAssist;
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange(SchedulerAssist, v19 & 0xFFDFFFFF, v19);
        }
        while ( v20 != v19 );
        if ( (v19 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v10);
      }
      _enable();
    }
    v13 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset((__int64)v3);
    if ( (*((_DWORD *)&v3->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&v3->116 + 1, 5u);
    v3->QuantumTarget = v13;
  }
  BasePriority = v3->BasePriority;
  v3->DecayBoost = 0;
  if ( Priority < BasePriority )
    Priority = BasePriority;
  v3->PriorityDecrement &= 0xF00Fu;
  KiAdjustRealtimePriorityFloor((ULONG_PTR)v3, Priority);
  if ( Priority < 16 )
    v3->DecayBoost = Priority - v3->BasePriority;
  v15 = KiComputeThreadPriority((__int64)v3, 0);
  v16 = KiSetPriorityThread(v3, (__int64)&v21, v15);
  v17 = 0;
  v3->ThreadLock = 0LL;
  if ( v16 )
    v17 = v15;
  KiProcessDeferredReadyList(CurrentPrcb, &v21, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v17 )
    EtwTracePriority((__int64)v3, 0x530u, v8, v17, 0LL);
  return v8;
}
