/*
 * XREFs of PopHandleNextState @ 0x140B67F50
 * Callers:
 *     PopInvokeStateHandlerTargetProcessor @ 0x140B67E70 (PopInvokeStateHandlerTargetProcessor.c)
 *     PopIssueNextState @ 0x140B67EEC (PopIssueNextState.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeForceDetachProcess @ 0x1403422E0 (KeForceDetachProcess.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x1403FF0E0 (KeRestoreExtendedAndSupervisorState.c)
 *     KeForceAttachProcess @ 0x140424E30 (KeForceAttachProcess.c)
 *     PpmResetPerfEngineForProcessor @ 0x140440520 (PpmResetPerfEngineForProcessor.c)
 *     PopFxNotifySystemStateTransition @ 0x1404A2D4C (PopFxNotifySystemStateTransition.c)
 *     KeFlushCurrentTbImmediately @ 0x1404A8590 (KeFlushCurrentTbImmediately.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x1404AEB24 (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSuspendClockTimer @ 0x1404BA350 (KeSuspendClockTimer.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x1404C6B18 (KeRestoreProcessorSpecificFeatures.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x1404C9708 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     HvlEnlightenProcessor @ 0x1404CC584 (HvlEnlightenProcessor.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeResumeClockTimer @ 0x1404F2FF0 (KeResumeClockTimer.c)
 *     KdPowerTransition @ 0x1404F6260 (KdPowerTransition.c)
 *     KeSaveProcessorSpecificFeatures @ 0x1404F72BC (KeSaveProcessorSpecificFeatures.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1404F83AC (KeSaveExtendedAndSupervisorState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140B68308 (PopSstDiagInitializeResumeTimer.c)
 *     PopRestoreHiberContext @ 0x140B683FC (PopRestoreHiberContext.c)
 */

void __fastcall PopHandleNextState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v7; // ebx
  int v8; // eax
  unsigned __int64 v9; // rbx
  struct _KPRCB *v10; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r14d
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  _QWORD *v17; // rdx
  __int64 v18; // rdx
  unsigned __int8 CurrentIrql; // bl

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  while ( *(_DWORD *)(a1 + 56) == *(_DWORD *)a2 )
  {
    if ( (++v7 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v7);
    }
    else
    {
      _mm_pause();
    }
  }
  v8 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v8;
  if ( v8 == 13 )
  {
    KeResumeClockTimer();
    PpmResetPerfEngineForProcessor((__int64)CurrentPrcb, 0LL);
    if ( *(_BYTE *)(a2 + 4) )
    {
      v10 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v10->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v15 = *SchedulerAssist;
        do
        {
          v16 = v15;
          v15 = _InterlockedCompareExchange(SchedulerAssist, v15 & 0xFFDFFFFF, v15);
        }
        while ( v16 != v15 );
        if ( (v15 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v10);
      }
      _enable();
    }
    v9 = *(unsigned __int8 *)(a2 + 7);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    __writecr8(v9);
  }
  else
  {
    switch ( v8 )
    {
      case 2:
        PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 1);
        break;
      case 3:
        KeSaveIptStateBeforeProcessorGoesOffline();
        *(_BYTE *)(a2 + 5) = 0;
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          *(_BYTE *)(a2 + 5) = (int)KeSaveExtendedAndSupervisorState(
                                      (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                                      (PVOID *)(a2 + 8)) >= 0;
        KeSaveProcessorSpecificFeatures();
        *(_QWORD *)(a2 + 128) = KeGetPcr();
        break;
      case 4:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
        *(_BYTE *)(a2 + 7) = CurrentIrql;
        *(_BYTE *)(a2 + 4) = KeDisableInterrupts();
        KeSuspendClockTimer();
        break;
      case 5:
        if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
        {
          *(_BYTE *)(a2 + 6) = 1;
          KeForceAttachProcess(PsInitialSystemProcess, (_OWORD *)(a2 + 64), 1);
        }
        break;
      case 6:
        if ( (PopSimulate & 0x800000) != 0 && *(_QWORD *)(a1 + 8) )
        {
          PoResumeFromHibernate = 1;
          *(_DWORD *)(a2 + 120) = 0;
        }
        else
        {
          if ( !CurrentPrcb->Number && !*(_QWORD *)(a1 + 8) )
            KdPowerTransition(4LL, a2);
          v14 = guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)a1 + 16LL), *(_QWORD *)(a1 + 8));
          if ( !CurrentPrcb->Number )
          {
            if ( !PoResumeFromHibernate )
              KdPowerTransition(1LL, v12);
            if ( !CurrentPrcb->Number )
            {
              PopSstDiagInitializeResumeTimer(v13);
              if ( !CurrentPrcb->Number )
                qword_140F0C0A8 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F06C90;
            }
          }
          *(_DWORD *)(a2 + 120) = v14;
        }
        break;
      case 7:
        HvlEnlightenProcessor(1);
        break;
      case 8:
        KeRestoreProcessorSpecificFeatures(a2 + 112);
        break;
      case 9:
        PopRestoreHiberContext(*(_QWORD *)(a1 + 24));
        break;
      case 10:
        KeFlushCurrentTbImmediately();
        __wbinvd();
        break;
      case 11:
        if ( *(_BYTE *)(a2 + 6) )
        {
          KeForceDetachProcess((volatile _KAFFINITY_EX *)(a2 + 64), 1, a3, a4);
          *(_BYTE *)(a2 + 6) = 0;
        }
        break;
      case 12:
        v17 = *(_QWORD **)(a1 + 32);
        if ( *v17 )
          guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 40), v17[1]);
        break;
      case 14:
        PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 0);
        break;
      case 15:
        if ( *(_BYTE *)(a2 + 5) )
          KeRestoreExtendedAndSupervisorState(a2 + 8);
        KeRestoreIptStateAfterProcessorComesOnline();
        LOBYTE(v18) = 1;
        PpmResetPerfEngineForProcessor((__int64)CurrentPrcb, v18);
        break;
      default:
        break;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
}
