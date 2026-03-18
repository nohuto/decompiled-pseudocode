/*
 * XREFs of PopHandleNextState @ 0x140B55D00
 * Callers:
 *     PopInvokeStateHandlerTargetProcessor @ 0x140B55C20 (PopInvokeStateHandlerTargetProcessor.c)
 *     PopIssueNextState @ 0x140B55C9C (PopIssueNextState.c)
 * Callees:
 *     KeForceDetachProcess @ 0x14023A720 (KeForceDetachProcess.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140262BC0 (KeRestoreExtendedAndSupervisorState.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeForceAttachProcess @ 0x1402C9F60 (KeForceAttachProcess.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     PpmResetPerfEngineForProcessor @ 0x1403EC9C0 (PpmResetPerfEngineForProcessor.c)
 *     PopFxNotifySystemStateTransition @ 0x1404A78D0 (PopFxNotifySystemStateTransition.c)
 *     KeFlushCurrentTbImmediately @ 0x1404AC640 (KeFlushCurrentTbImmediately.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x1404B49F4 (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSuspendClockTimer @ 0x1404C0710 (KeSuspendClockTimer.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x1404CA720 (KeRestoreProcessorSpecificFeatures.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x1404D0578 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     HvlEnlightenProcessor @ 0x1404D3598 (HvlEnlightenProcessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeResumeClockTimer @ 0x1404F2DEC (KeResumeClockTimer.c)
 *     KdPowerTransition @ 0x1404F6150 (KdPowerTransition.c)
 *     KeSaveProcessorSpecificFeatures @ 0x1404F71DC (KeSaveProcessorSpecificFeatures.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1404F862C (KeSaveExtendedAndSupervisorState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140B560C8 (PopSstDiagInitializeResumeTimer.c)
 *     PopRestoreHiberContext @ 0x140B561BC (PopRestoreHiberContext.c)
 */

void __fastcall PopHandleNextState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbp
  int v5; // ebx
  int v6; // eax
  struct _KPRCB *v7; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 v9; // rbx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // rcx
  int v13; // r14d
  __int64 v14; // rdx
  unsigned __int8 CurrentIrql; // bl

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  while ( *(_DWORD *)(a1 + 56) == *(_DWORD *)a2 )
  {
    if ( (++v5 & HvlLongSpinCountMask) == 0
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
  v6 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v6;
  if ( v6 == 13 )
  {
    KeResumeClockTimer();
    PpmResetPerfEngineForProcessor((__int64)CurrentPrcb, 0LL);
    if ( *(_BYTE *)(a2 + 4) )
    {
      v7 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v7->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v10 = *SchedulerAssist;
        do
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
        }
        while ( v11 != v10 );
        if ( (v10 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v7);
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
    switch ( v6 )
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
            KdPowerTransition(4);
          v13 = guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)a1 + 16LL));
          if ( !CurrentPrcb->Number )
          {
            if ( !PoResumeFromHibernate )
              KdPowerTransition(1);
            if ( !CurrentPrcb->Number )
            {
              PopSstDiagInitializeResumeTimer(v12);
              if ( !CurrentPrcb->Number )
                qword_140F0B1C8 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F06530;
            }
          }
          *(_DWORD *)(a2 + 120) = v13;
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
          KeForceDetachProcess((volatile _KAFFINITY_EX *)(a2 + 64), 1);
          *(_BYTE *)(a2 + 6) = 0;
        }
        break;
      case 12:
        if ( **(_QWORD **)(a1 + 32) )
          guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 40));
        break;
      case 14:
        PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 0);
        break;
      case 15:
        if ( *(_BYTE *)(a2 + 5) )
          KeRestoreExtendedAndSupervisorState(a2 + 8);
        KeRestoreIptStateAfterProcessorComesOnline();
        LOBYTE(v14) = 1;
        PpmResetPerfEngineForProcessor((__int64)CurrentPrcb, v14);
        break;
      default:
        break;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
}
