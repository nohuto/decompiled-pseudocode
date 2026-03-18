/*
 * XREFs of KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0
 * Callers:
 *     NtContinueEx @ 0x1406AA3F0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1406AA880 (NtRaiseException.c)
 *     KiCallUserMode @ 0x1406AB4A0 (KiCallUserMode.c)
 *     KxStartUserThread @ 0x1406AC170 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x1406AC7A0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1406ACE50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1406AD230 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406AD610 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1406AD9F0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406ADDC0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406AE9A0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406AF140 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1406B0A70 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1406B0E60 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1406B1390 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406B1AE0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B2240 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x1406B3EC0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1406B7440 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406B7B40 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1406B9B40 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1406BB200 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1406BBD00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406BC440 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1406BDE40 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406BF240 (KiFastFailDispatch.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiSynchronizeUserIsolationDomainEntry(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 CoreControlBlockIndex; // rsi
  struct _LIST_ENTRY *Flink; // rbp
  _KCORE_CONTROL_BLOCK_SHADOW *CoreControlBlockShadow; // rbx
  struct _LIST_ENTRY *NextIsolationDomain; // rax
  unsigned int v7; // r14d
  struct _LIST_ENTRY *v8; // rax
  int v9; // edx
  int TotalProcessors; // eax
  int v11; // ecx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *v15; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  int v19; // r8d
  _KTHREAD *NextThread; // rcx
  bool v21; // r9
  unsigned int v22; // edi

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
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)CoreControlBlockShadow, 0LL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v7);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( CoreControlBlockShadow->Lock );
  }
  v8 = (struct _LIST_ENTRY *)CoreControlBlockShadow->NextIsolationDomain;
  if ( v8 == (struct _LIST_ENTRY *)1 )
  {
    CoreControlBlockShadow->NextIsolationDomain = (volatile unsigned __int64)Flink;
  }
  else if ( v8 != Flink )
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
    v15 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v15->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v17 = *SchedulerAssist;
      do
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
      }
      while ( v18 != v17 );
      if ( (v17 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v15);
    }
    _enable();
    _mm_pause();
    _disable();
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 1LL;
  }
  v9 = (unsigned __int8)(CoreControlBlockShadow->NewDomainProcessors + 1);
  TotalProcessors = CoreControlBlockShadow->TotalProcessors;
  v11 = v9 + CoreControlBlockShadow->IdleProcessors;
  CoreControlBlockShadow->NewDomainProcessors = v9;
  if ( TotalProcessors == v11 )
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
    v19 = 0;
    while ( (struct _LIST_ENTRY *)CoreControlBlockShadow->CurrentIsolationDomain != Flink )
    {
      _mm_pause();
      NextThread = CurrentPrcb->NextThread;
      v21 = (unsigned int)++v19 > 0x1388;
      if ( NextThread )
        v21 = 1;
      if ( CurrentPrcb->DpcRequestSummary || v21 )
      {
        v22 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)CoreControlBlockShadow, 0LL) )
        {
          do
          {
            if ( (++v22 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(NextThread) )
            {
              HvlNotifyLongSpinWait(v22);
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
