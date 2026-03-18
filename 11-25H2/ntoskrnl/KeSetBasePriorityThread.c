/*
 * XREFs of KeSetBasePriorityThread @ 0x1404713B0
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x1407A2BCC (EtwpCovSampCaptureContextStart.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x140922920 (PfTLoggingWorker.c)
 * Callees:
 *     KiSetBasePriorityAndClearDecrement @ 0x14020D7F0 (KiSetBasePriorityAndClearDecrement.c)
 *     EtwTracePriority @ 0x14020E1D8 (EtwTracePriority.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402A1FC8 (KiPriQueueThreadPriorityChanged.c)
 *     KiQueryQuantumReset @ 0x1402E5930 (KiQueryQuantumReset.c)
 *     KiAdjustRealtimePriorityFloor @ 0x1402E673C (KiAdjustRealtimePriorityFloor.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  _KPROCESS *Process; // r13
  PKTHREAD v4; // rbx
  char v5; // si
  __int64 CurrentIrql; // rax
  int v7; // edi
  struct _KPRCB *v8; // r12
  LONG v9; // r15d
  int Saturation; // eax
  LONG v11; // eax
  int v12; // edi
  int v13; // esi
  int v14; // eax
  char v15; // dl
  int Priority; // ecx
  unsigned __int64 updated; // rax
  struct _KPRCB *v18; // rcx
  unsigned __int64 CycleTime; // rdi
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 v21; // rcx
  int v22; // r8d
  volatile signed __int32 *p_Lock; // rcx
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  char v27; // al
  _QWORD *v28; // [rsp+30h] [rbp-20h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-10h]
  __int64 v31; // [rsp+48h] [rbp-8h]
  int v32; // [rsp+90h] [rbp+40h] BYREF
  int v33; // [rsp+A0h] [rbp+50h] BYREF
  int BasePriority; // [rsp+A8h] [rbp+58h]

  v32 = 0;
  Process = Thread->Process;
  v4 = Thread;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v5 = 0;
  v28 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v31 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Thread) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Thread);
  }
  v7 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v4->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0
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
    while ( v4->ThreadLock );
  }
  v8 = CurrentPrcb;
  v9 = v4->BasePriority - Process->BasePriority;
  Saturation = v4->Saturation;
  BasePriority = v4->BasePriority;
  if ( (_BYTE)Saturation )
    v9 = 16 * Saturation;
  v4->Saturation = 0;
  v11 = -Increment;
  if ( Increment > 0 )
    v11 = Increment;
  if ( v11 >= 16 )
  {
    v27 = 1;
    if ( Increment <= 0 )
      v27 = -1;
    v4->Saturation = v27;
  }
  v12 = Increment + Process->BasePriority;
  if ( Process->BasePriority >= 16 )
  {
    if ( v12 >= 16 )
    {
      if ( v12 > 31 )
        v12 = 31;
      v33 = v12;
    }
    else
    {
      v12 = 16;
      v33 = 16;
    }
  }
  else
  {
    if ( v12 >= 16 )
    {
      v12 = 15;
      v33 = 15;
    }
    else
    {
      if ( v12 <= 0 )
        v12 = 1;
      v33 = v12;
    }
    v13 = v12 + v4->DecayBoost;
    v32 = v13;
    if ( v13 >= 16 )
    {
      LOBYTE(v13) = 15;
      v32 = 15;
    }
    v5 = v13 - v12;
  }
  KiSetBasePriorityAndClearDecrement((__int64)v4, &v33);
  KiAdjustRealtimePriorityFloor((ULONG_PTR)v4, v12);
  v4->DecayBoost = v5;
  v14 = KiComputeThreadPriority((__int64)v4, 0);
  Priority = v4->Priority;
  v32 = v14;
  if ( v14 != Priority )
  {
    if ( v4 == CurrentThread && v8->NestingLevel == v15 )
    {
      _disable();
      updated = KiUpdateTotalCyclesCurrentThread((__int64)v8, (__int64)v4, 0LL);
      v18 = KeGetCurrentPrcb();
      CycleTime = updated;
      SchedulerAssist = (signed __int32 *)v18->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v25 = *SchedulerAssist;
        do
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange(SchedulerAssist, v25 & 0xFFDFFFFF, v25);
        }
        while ( v26 != v25 );
        if ( (v25 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v18);
      }
      _enable();
    }
    else
    {
      CycleTime = v4->CycleTime;
    }
    v21 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset((__int64)v4);
    if ( (*((_DWORD *)&v4->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&v4->116 + 1, 5u);
    v22 = v32;
    v4->QuantumTarget = v21;
    KiSetPriorityThread(v4, (__int64)&v28, v22);
  }
  p_Lock = &v4->Queue->Lock;
  if ( p_Lock && (*(_BYTE *)p_Lock & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(p_Lock, (__int64)v4);
  else
    v4->ThreadLock = 0LL;
  KiProcessDeferredReadyList(v8, &v28, v31);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((__int64)v4, 0x531u, BasePriority, v33, &v32);
  return v9;
}
