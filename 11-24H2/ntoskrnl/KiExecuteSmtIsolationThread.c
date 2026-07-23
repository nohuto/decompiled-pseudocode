/*
 * XREFs of KiExecuteSmtIsolationThread @ 0x1405C01A0
 * Callers:
 *     <none>
 * Callees:
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x1402A4BC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiResumeThreadCycleAccumulation @ 0x1402DBC80 (KiResumeThreadCycleAccumulation.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14036C1B0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KeAttachProcess @ 0x140477330 (KeAttachProcess.c)
 *     KeIdleSpecCtrl @ 0x1404DE260 (KeIdleSpecCtrl.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSynchronizeIdleIsolationDomainEntry @ 0x1405BC610 (KiSynchronizeIdleIsolationDomainEntry.c)
 *     KiSynchronizeIdleIsolationDomainExit @ 0x1405BC6A8 (KiSynchronizeIdleIsolationDomainExit.c)
 *     HalProcessorIdle @ 0x1406A6AA0 (HalProcessorIdle.c)
 *     KiSwapContext @ 0x1406B3A00 (KiSwapContext.c)
 *     KeExecuteVerw @ 0x1406C09C0 (KeExecuteVerw.c)
 */

void __noreturn KiExecuteSmtIsolationThread()
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KPRCB *CurrentPrcb; // rbx
  signed __int32 *SchedulerAssist; // r8
  __int64 v3; // r9
  struct _KPRCB *v4; // rcx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 NextThread; // rdi
  __int64 v8; // r8
  char v9; // al
  unsigned __int16 v10; // di
  char v11; // si
  __int64 v12; // rcx
  int v13; // edx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v15; // rcx
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  signed __int32 v18[18]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentPrcb = KeGetCurrentPrcb();
  KeAttachProcess(PsInitialSystemProcess);
  while ( 1 )
  {
    if ( (CurrentPrcb->DpcRequestSlot[0] & 0xBF) != 0 )
    {
      _disable();
      KiRetireDpcList((__int64)CurrentPrcb);
      v4 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v4->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v5 = *SchedulerAssist;
        do
        {
          v6 = v5;
          v5 = _InterlockedCompareExchange(SchedulerAssist, v5 & 0xFFDFFFFF, v5);
        }
        while ( v6 != v5 );
        if ( (v5 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v4);
      }
      _enable();
    }
    if ( CurrentPrcb->NextThread )
    {
      KiCaptureTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)CurrentThread, (__int64)SchedulerAssist, v3);
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = (__int64)CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      KiUpdatePriorityMatrixForRunningTransition(CurrentPrcb, NextThread);
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
      if ( (struct _KTHREAD *)NextThread == CurrentThread )
      {
        KiResumeThreadCycleAccumulation((__int64)CurrentPrcb, (__int64)CurrentThread, 0LL);
      }
      else
      {
        LOBYTE(v8) = 2;
        KiSwapContext(CurrentThread, NextThread, v8);
      }
    }
    else
    {
      _disable();
      CurrentPrcb->IdleHalt = 1;
      _InterlockedOr(v18, 0);
      if ( !CurrentPrcb->NextThread && (CurrentPrcb->DpcRequestSummary & 0xBF) == 0 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
        __writecr8(0LL);
        KiSynchronizeIdleIsolationDomainEntry();
        v19 = 0;
        v9 = KeIdleSpecCtrl((__int64)CurrentPrcb, 1, &v19, 0);
        v10 = v19;
        v11 = v9;
        if ( (_WORD)v19 )
          __writemsr(0x48u, 0LL);
        v12 = HIWORD(v19);
        if ( HIWORD(v19) )
          KeExecuteVerw(v12);
        HalProcessorIdle(v12);
        if ( v10 )
          __writemsr(0x48u, v10);
        else
          _mm_lfence();
        KeIdleSpecCtrl((__int64)CurrentPrcb, 0, &v19, v11);
        _disable();
        KiSynchronizeIdleIsolationDomainExit();
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v13) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v13);
        }
      }
      CurrentPrcb->IdleHalt = 0;
      v15 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v15->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v16 = *SchedulerAssist;
        do
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
        }
        while ( v17 != v16 );
        if ( (v16 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
      _enable();
    }
  }
}
