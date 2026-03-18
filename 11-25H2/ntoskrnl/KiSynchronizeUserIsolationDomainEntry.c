/*
 * XREFs of KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0
 * Callers:
 *     NtContinueEx @ 0x14069F120 (NtContinueEx.c)
 *     NtRaiseException @ 0x14069F5B0 (NtRaiseException.c)
 *     KiCallUserMode @ 0x1406A01D0 (KiCallUserMode.c)
 *     KxStartUserThread @ 0x1406A0EA0 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x1406A14D0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1406A1B80 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1406A1F60 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406A2340 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1406A2720 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406A2AF0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406A36D0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406A3E70 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1406A57A0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1406A5B90 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1406A60C0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406A6810 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406A6F70 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x1406A8BF0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1406AC140 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406AC840 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1406AE840 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1406AFF00 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1406B0A00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406B1140 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1406B2B40 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406B3F40 (KiFastFailDispatch.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 KiSynchronizeUserIsolationDomainEntry()
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 CoreControlBlockIndex; // rsi
  struct _LIST_ENTRY *Flink; // rbp
  _KCORE_CONTROL_BLOCK_SHADOW *CoreControlBlockShadow; // rbx
  struct _LIST_ENTRY *NextIsolationDomain; // rax
  int v5; // r14d
  struct _LIST_ENTRY *v6; // rax
  int v7; // edx
  int TotalProcessors; // eax
  int v9; // ecx
  char v10; // dl
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *v14; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  int v18; // r8d
  bool v19; // r9
  int v20; // edi

  CurrentPrcb = KeGetCurrentPrcb();
  CoreControlBlockIndex = CurrentPrcb->CoreControlBlockIndex;
  Flink = CurrentPrcb->CurrentThread[1].SavedApcState.ApcListHead[0].Flink;
  CoreControlBlockShadow = CurrentPrcb->CoreControlBlock->CoreControlBlockShadow;
  if ( !Flink )
    return 0LL;
  if ( CoreControlBlockShadow->TotalProcessors == 1 )
  {
    CoreControlBlockShadow->CurrentIsolationDomain = (volatile unsigned __int64)Flink;
    return 0LL;
  }
  NextIsolationDomain = (struct _LIST_ENTRY *)CoreControlBlockShadow->NextIsolationDomain;
  if ( NextIsolationDomain != (struct _LIST_ENTRY *)1 && NextIsolationDomain != Flink )
    goto LABEL_26;
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)CoreControlBlockShadow, 0LL) )
  {
    do
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
    while ( CoreControlBlockShadow->Lock );
  }
  v6 = (struct _LIST_ENTRY *)CoreControlBlockShadow->NextIsolationDomain;
  if ( v6 == (struct _LIST_ENTRY *)1 )
  {
    CoreControlBlockShadow->NextIsolationDomain = (volatile unsigned __int64)Flink;
  }
  else if ( v6 != Flink )
  {
LABEL_25:
    _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
LABEL_26:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    v14 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v14->SchedulerAssist;
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
        KiRemoveSystemWorkPriorityKick((__int64)v14);
    }
    _enable();
    _mm_pause();
    _disable();
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 1LL;
  }
  v7 = (unsigned __int8)(CoreControlBlockShadow->NewDomainProcessors + 1);
  TotalProcessors = CoreControlBlockShadow->TotalProcessors;
  v9 = v7 + CoreControlBlockShadow->IdleProcessors;
  CoreControlBlockShadow->NewDomainProcessors = v7;
  if ( TotalProcessors == v9 )
  {
    CoreControlBlockShadow->CurrentIsolationDomain = CoreControlBlockShadow->NextIsolationDomain;
    CoreControlBlockShadow->NewDomainProcessors = 0;
    CoreControlBlockShadow->NextIsolationDomain = 1LL;
  }
  else
  {
    CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 2;
    _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
    v10 = 0;
    v18 = 0;
    while ( (struct _LIST_ENTRY *)CoreControlBlockShadow->CurrentIsolationDomain != Flink )
    {
      _mm_pause();
      v19 = (unsigned int)++v18 > 0x1388;
      if ( CurrentPrcb->NextThread )
        v19 = 1;
      if ( CurrentPrcb->DpcRequestSummary || v19 )
      {
        v20 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)CoreControlBlockShadow, 0LL) )
        {
          do
          {
            if ( (++v20 & HvlLongSpinCountMask) == 0
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
          while ( CoreControlBlockShadow->Lock );
        }
        v10 = 1;
        if ( (struct _LIST_ENTRY *)CoreControlBlockShadow->CurrentIsolationDomain != Flink )
        {
          if ( CoreControlBlockShadow->NewDomainProcessors-- == 1 )
            CoreControlBlockShadow->NextIsolationDomain = 1LL;
          CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 0;
          goto LABEL_25;
        }
        break;
      }
    }
    CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 0;
    if ( !v10 )
      return 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
  return 0LL;
}
