/*
 * XREFs of KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0
 * Callers:
 *     NtContinueEx @ 0x1406AB390 (NtContinueEx.c)
 *     NtRaiseException @ 0x1406AB820 (NtRaiseException.c)
 *     KiCallUserMode @ 0x1406AC440 (KiCallUserMode.c)
 *     KxStartUserThread @ 0x1406AD110 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x1406AD740 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1406ADDF0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1406AE1D0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406AE5B0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1406AE990 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406AED60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406AF940 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406B00E0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1406B1A10 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1406B1E00 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1406B2330 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406B2A80 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B31E0 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x1406B4E60 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1406B8340 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406B8A40 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1406BAA40 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1406BC100 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1406BCC00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406BD340 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1406BED40 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406C0140 (KiFastFailDispatch.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiSynchronizeUserIsolationDomainEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 CoreControlBlockIndex; // rsi
  struct _LIST_ENTRY *Flink; // rbp
  _KCORE_CONTROL_BLOCK_SHADOW *CoreControlBlockShadow; // rbx
  struct _LIST_ENTRY *NextIsolationDomain; // rax
  unsigned int v9; // r14d
  struct _LIST_ENTRY *v10; // rax
  int TotalProcessors; // eax
  int v12; // ecx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *v16; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  __int64 v20; // r8
  _KTHREAD *NextThread; // rcx
  _BOOL8 v22; // r9
  unsigned int v23; // edi

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
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)CoreControlBlockShadow, 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( CoreControlBlockShadow->Lock );
  }
  v10 = (struct _LIST_ENTRY *)CoreControlBlockShadow->NextIsolationDomain;
  if ( v10 == (struct _LIST_ENTRY *)1 )
  {
    CoreControlBlockShadow->NextIsolationDomain = (volatile unsigned __int64)Flink;
  }
  else if ( v10 != Flink )
  {
LABEL_25:
    _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
LABEL_26:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 1;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    v16 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v16->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v18 = *SchedulerAssist;
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange(SchedulerAssist, v18 & 0xFFDFFFFF, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v16);
    }
    _enable();
    _mm_pause();
    _disable();
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 1LL;
  }
  a2 = (unsigned __int8)(CoreControlBlockShadow->NewDomainProcessors + 1);
  TotalProcessors = CoreControlBlockShadow->TotalProcessors;
  v12 = a2 + CoreControlBlockShadow->IdleProcessors;
  CoreControlBlockShadow->NewDomainProcessors = a2;
  if ( TotalProcessors == v12 )
  {
    CoreControlBlockShadow->CurrentIsolationDomain = CoreControlBlockShadow->NextIsolationDomain;
    CoreControlBlockShadow->NewDomainProcessors = 0;
    CoreControlBlockShadow->NextIsolationDomain = 1LL;
  }
  else
  {
    CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 2;
    _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
    LOBYTE(a2) = 0;
    LODWORD(v20) = 0;
    while ( (struct _LIST_ENTRY *)CoreControlBlockShadow->CurrentIsolationDomain != Flink )
    {
      _mm_pause();
      NextThread = CurrentPrcb->NextThread;
      v20 = (unsigned int)(v20 + 1);
      v22 = (unsigned int)v20 > 0x1388;
      if ( NextThread )
        v22 = 1LL;
      if ( CurrentPrcb->DpcRequestSummary || v22 )
      {
        v23 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)CoreControlBlockShadow, 0LL) )
        {
          do
          {
            if ( (++v23 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(NextThread, a2, v20, v22) )
            {
              HvlNotifyLongSpinWait(v23);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CoreControlBlockShadow->Lock );
        }
        a2 = 1LL;
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
    if ( !(_BYTE)a2 )
      return 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
  return 0LL;
}
