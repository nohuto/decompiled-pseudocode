/*
 * XREFs of PopHandleNextState @ 0x140B65E10
 * Callers:
 *     PopInvokeStateHandlerTargetProcessor @ 0x140B65D30 (PopInvokeStateHandlerTargetProcessor.c)
 *     PopIssueNextState @ 0x140B65DAC (PopIssueNextState.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeForceDetachProcess @ 0x1402F9B70 (KeForceDetachProcess.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140406C00 (KeRestoreExtendedAndSupervisorState.c)
 *     KeForceAttachProcess @ 0x14042D8D0 (KeForceAttachProcess.c)
 *     PpmResetPerfEngineForProcessor @ 0x140447E00 (PpmResetPerfEngineForProcessor.c)
 *     PopFxNotifySystemStateTransition @ 0x1404A87DC (PopFxNotifySystemStateTransition.c)
 *     KeFlushCurrentTbImmediately @ 0x1404ADC80 (KeFlushCurrentTbImmediately.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x1404B4304 (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSuspendClockTimer @ 0x1404BEE1C (KeSuspendClockTimer.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x1404CD748 (KeRestoreProcessorSpecificFeatures.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x1404D0514 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     HvlEnlightenProcessor @ 0x1404D33C4 (HvlEnlightenProcessor.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeResumeClockTimer @ 0x1404F56F0 (KeResumeClockTimer.c)
 *     KdPowerTransition @ 0x1404F8980 (KdPowerTransition.c)
 *     KeSaveProcessorSpecificFeatures @ 0x1404F99DC (KeSaveProcessorSpecificFeatures.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1404FAACC (KeSaveExtendedAndSupervisorState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140B661C8 (PopSstDiagInitializeResumeTimer.c)
 *     PopRestoreHiberContext @ 0x140B662BC (PopRestoreHiberContext.c)
 */

void __fastcall PopHandleNextState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rbx
  struct _KPRCB *v12; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 v14; // rcx
  int v15; // r14d
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
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
    PpmResetPerfEngineForProcessor((__int64)CurrentPrcb, 0LL, v9, v10);
    if ( *(_BYTE *)(a2 + 4) )
    {
      v12 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v12->SchedulerAssist;
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
          KiRemoveSystemWorkPriorityKick((__int64)v12);
      }
      _enable();
    }
    v11 = *(unsigned __int8 *)(a2 + 7);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    __writecr8(v11);
  }
  else
  {
    switch ( v8 )
    {
      case 2:
        PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 1, dword_140F0B12C);
        break;
      case 3:
        KeSaveIptStateBeforeProcessorGoesOffline();
        *(_BYTE *)(a2 + 5) = 0;
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          *(_BYTE *)(a2 + 5) = (int)KeSaveExtendedAndSupervisorState(
                                      (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                                      a2 + 8) >= 0;
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
          v15 = guard_dispatch_icall_no_overrides(
                  *(_QWORD *)(*(_QWORD *)a1 + 16LL),
                  *(_QWORD *)(a1 + 8),
                  *(_QWORD *)(a1 + 16),
                  *(unsigned int *)(a1 + 48));
          if ( !CurrentPrcb->Number )
          {
            if ( !PoResumeFromHibernate )
              KdPowerTransition(1);
            if ( !CurrentPrcb->Number )
            {
              PopSstDiagInitializeResumeTimer(v14);
              if ( !CurrentPrcb->Number )
                qword_140F0B468 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F06970;
            }
          }
          *(_DWORD *)(a2 + 120) = v15;
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
        v18 = *(_QWORD **)(a1 + 32);
        if ( *v18 )
          guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 40), v18[1], *(unsigned __int8 *)(a1 + 44), a4);
        break;
      case 14:
        PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 0, dword_140F0B12C);
        break;
      case 15:
        if ( *(_BYTE *)(a2 + 5) )
          KeRestoreExtendedAndSupervisorState(a2 + 8);
        KeRestoreIptStateAfterProcessorComesOnline();
        LOBYTE(v19) = 1;
        PpmResetPerfEngineForProcessor((__int64)CurrentPrcb, v19, v20, v21);
        break;
      default:
        break;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
}
