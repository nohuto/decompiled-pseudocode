/*
 * XREFs of KeSetBasePriorityThread @ 0x1404E7260
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x1407B1F9C (EtwpCovSampCaptureContextStart.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x14094E990 (PfTLoggingWorker.c)
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
 *     KiPriQueueThreadPriorityChanged @ 0x1404337D0 (KiPriQueueThreadPriorityChanged.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x140452644 (KiSetBasePriorityAndClearDecrement.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C5094 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 */

LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  _KPROCESS *Process; // r14
  PKTHREAD v4; // rbx
  char v6; // si
  __int64 CurrentIrql; // rax
  struct _KPRCB *CurrentPrcb; // r13
  struct _KTHREAD *CurrentThread; // r12
  LONG v10; // r15d
  LONG v11; // eax
  char v12; // al
  __int64 v13; // rcx
  int v14; // edi
  int IsEnabledNoReportingNoInline; // eax
  int DecayBoost; // esi
  int v17; // esi
  int v18; // ecx
  int v19; // esi
  __int64 v20; // rcx
  unsigned int v21; // eax
  int Priority; // ecx
  unsigned __int64 updated; // rax
  struct _KPRCB *v24; // rcx
  unsigned __int64 CycleTime; // rdi
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  unsigned __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // r8
  volatile signed __int32 *p_Lock; // rcx
  int BasePriority; // [rsp+30h] [rbp-20h]
  _QWORD *v34; // [rsp+38h] [rbp-18h] BYREF
  __int64 v35; // [rsp+40h] [rbp-10h]
  unsigned int v36; // [rsp+90h] [rbp+40h] BYREF
  int v37; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp+58h] BYREF

  v36 = 0;
  Process = Thread->Process;
  v4 = Thread;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v6 = 0;
  v34 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v35 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Thread) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Thread, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v38 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v4->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v38);
    while ( v4->ThreadLock );
  }
  v10 = v4->BasePriority - Process->BasePriority;
  BasePriority = v4->BasePriority;
  if ( v4->Saturation )
    v10 = 16 * v4->Saturation;
  v4->Saturation = 0;
  v11 = -Increment;
  if ( Increment > 0 )
    v11 = Increment;
  if ( v11 >= 16 )
  {
    v12 = 1;
    if ( Increment <= 0 )
      v12 = -1;
    v4->Saturation = v12;
  }
  v13 = (unsigned int)Process->BasePriority;
  v14 = v13 + Increment;
  if ( Process->BasePriority < 16 )
  {
    if ( v14 < 16 )
    {
      if ( v14 <= 0 )
        v14 = 1;
      v37 = v14;
    }
    else
    {
      v14 = 15;
      v37 = 15;
    }
    IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v13);
    DecayBoost = v4->DecayBoost;
    if ( IsEnabledNoReportingNoInline )
    {
      v18 = v14 + (v4->PriorityDecrement & 0xF);
      if ( v18 >= 16 )
        v18 = 15;
      v19 = v18 + DecayBoost;
      v36 = v19;
      if ( v19 >= 16 )
      {
        LOBYTE(v19) = 15;
        v36 = 15;
      }
      v6 = v19 - v18;
    }
    else
    {
      v17 = v14 + DecayBoost;
      v36 = v17;
      if ( v17 >= 16 )
      {
        LOBYTE(v17) = 15;
        v36 = 15;
      }
      v6 = v17 - v14;
    }
  }
  else if ( v14 >= 16 )
  {
    if ( v14 > 31 )
      v14 = 31;
    v37 = v14;
  }
  else
  {
    v14 = 16;
    v37 = 16;
  }
  KiSetBasePriorityAndClearDecrement((__int64)v4, &v37);
  KiAdjustRealtimePriorityFloor((ULONG_PTR)v4, v14);
  Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v20);
  v4->DecayBoost = v6;
  v21 = KiComputeThreadPriority((__int64)v4, 0, 0);
  Priority = v4->Priority;
  v36 = v21;
  if ( v21 != Priority )
  {
    if ( v4 != CurrentThread || CurrentPrcb->NestingLevel )
    {
      CycleTime = v4->CycleTime;
    }
    else
    {
      _disable();
      updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, (__int64)v4, 0LL);
      v24 = KeGetCurrentPrcb();
      CycleTime = updated;
      SchedulerAssist = (signed __int32 *)v24->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v27 = *SchedulerAssist;
        do
        {
          v28 = v27;
          v27 = _InterlockedCompareExchange(SchedulerAssist, v27 & 0xFFDFFFFF, v27);
        }
        while ( v28 != v27 );
        if ( (v27 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v24);
      }
      _enable();
    }
    v29 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset((__int64)v4);
    if ( (*((_DWORD *)&v4->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&v4->116 + 1, 5u);
    v31 = v36;
    v4->QuantumTarget = v29;
    KiSetPriorityThread(v4, (__int64)&v34, v31, v30);
  }
  p_Lock = &v4->Queue->Lock;
  if ( p_Lock && (*(_BYTE *)p_Lock & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(p_Lock, (__int64)v4);
  else
    v4->ThreadLock = 0LL;
  KiProcessDeferredReadyList(CurrentPrcb, &v34, v35);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((__int64)v4, 0x531u, BasePriority, v37, &v36);
  return v10;
}
