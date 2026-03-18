/*
 * XREFs of KeSetPriorityThread @ 0x1403F96D0
 * Callers:
 *     MiRebuildLargePagesThread @ 0x14030ACC0 (MiRebuildLargePagesThread.c)
 *     KeGenericProcessorCallback @ 0x1403390A4 (KeGenericProcessorCallback.c)
 *     MiMappedPageWriter @ 0x140369760 (MiMappedPageWriter.c)
 *     MiSetIdealProcessorThread @ 0x1403B4508 (MiSetIdealProcessorThread.c)
 *     MiDereferenceSegmentThread @ 0x1403F7700 (MiDereferenceSegmentThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140487FC8 (KeSetThreadSchedulerAssist.c)
 *     CcApplyLowIoPriorityToThread @ 0x1404DAC78 (CcApplyLowIoPriorityToThread.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404DAE88 (CcBoostLowPriorityWorkerThread.c)
 *     FsRtlWorkerThread @ 0x140582110 (FsRtlWorkerThread.c)
 *     KeBalanceSetManager @ 0x1405C45C0 (KeBalanceSetManager.c)
 *     KeSwapProcessOrStack @ 0x1405C4890 (KeSwapProcessOrStack.c)
 *     KiExecuteDpc @ 0x1405C6F50 (KiExecuteDpc.c)
 *     PfTSetTraceWorkerPriority @ 0x1405CC6E0 (PfTSetTraceWorkerPriority.c)
 *     ExRegisterBootDevice @ 0x140655BF0 (ExRegisterBootDevice.c)
 *     MiPartitionWorkingSetManager @ 0x1406732E0 (MiPartitionWorkingSetManager.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140B91FF0 (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     EtwTracePriority @ 0x140209924 (EtwTracePriority.c)
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiQueryQuantumReset @ 0x1403241CC (KiQueryQuantumReset.c)
 *     KiAdjustRealtimePriorityFloor @ 0x140324448 (KiAdjustRealtimePriorityFloor.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14034F060 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C5094 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 */

KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  PKTHREAD v3; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  struct _KTHREAD *CurrentThread; // rsi
  int v8; // ebp
  unsigned __int64 updated; // rax
  struct _KPRCB *v10; // rcx
  unsigned __int64 CycleTime; // rsi
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  unsigned __int64 v15; // rcx
  KPRIORITY BasePriority; // eax
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  char v21; // bl
  KPRIORITY v22; // esi
  unsigned int v23; // ebx
  __int64 v24; // r9
  char v25; // al
  int v26; // esi
  int v27; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v28; // [rsp+70h] [rbp+18h] BYREF

  v3 = Thread;
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  v28 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Thread) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Thread, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v27 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v3->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v27);
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
      updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, (__int64)v3, 0LL);
      v10 = KeGetCurrentPrcb();
      CycleTime = updated;
      SchedulerAssist = (signed __int32 *)v10->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v13 = *SchedulerAssist;
        do
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange(SchedulerAssist, v13 & 0xFFDFFFFF, v13);
        }
        while ( v14 != v13 );
        if ( (v13 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v10);
      }
      _enable();
    }
    v15 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset((__int64)v3);
    if ( (*((_DWORD *)&v3->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&v3->116 + 1, 5u);
    v3->QuantumTarget = v15;
  }
  BasePriority = v3->BasePriority;
  v3->DecayBoost = 0;
  if ( Priority < BasePriority )
    Priority = BasePriority;
  v3->PriorityDecrement &= 0xF00Fu;
  KiAdjustRealtimePriorityFloor((ULONG_PTR)v3, Priority);
  if ( Priority < 16 )
  {
    v18 = (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v17) == 0;
    v20 = v3->BasePriority;
    if ( v18 )
    {
      v21 = Priority - v20;
      Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v19);
    }
    else
    {
      v22 = v20 + (v3->PriorityDecrement & 0xF);
      if ( v22 >= 16 )
        v22 = 15;
      if ( Priority <= v22 )
        goto LABEL_32;
      Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(15LL);
      v21 = Priority - v22;
    }
    v3->DecayBoost = v21;
  }
LABEL_32:
  v23 = KiComputeThreadPriority((__int64)v3, 0, 0);
  v25 = KiSetPriorityThread(v3, (__int64)&v28, v23, v24);
  v26 = 0;
  v3->ThreadLock = 0LL;
  if ( v25 )
    v26 = v23;
  KiProcessDeferredReadyList(CurrentPrcb, &v28, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v26 )
    EtwTracePriority((__int64)v3, 0x530u, v8, v26, 0LL);
  return v8;
}
