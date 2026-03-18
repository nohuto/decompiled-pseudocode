/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650
 * Callers:
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14020D900 (RtlpHpAcquireQueuedLockExclusive.c)
 *     MiAddViewsForSection @ 0x14020DA70 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     MiStoreEvictPageFile @ 0x14020E830 (MiStoreEvictPageFile.c)
 *     MiUnmapViewSubsections @ 0x14020EC50 (MiUnmapViewSubsections.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAddPageToFlushMdl @ 0x140210ED0 (MiAddPageToFlushMdl.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiComputeAgingAmount @ 0x140235450 (MiComputeAgingAmount.c)
 *     MiObtainSystemCacheView @ 0x140241D90 (MiObtainSystemCacheView.c)
 *     KiAbEntryRemoveFromTree @ 0x14025CEE0 (KiAbEntryRemoveFromTree.c)
 *     MiPostInsertVad @ 0x14025EBE0 (MiPostInsertVad.c)
 *     MiIncrementSubsectionViewCount @ 0x1402624F0 (MiIncrementSubsectionViewCount.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     PspRevertContainerImpersonation @ 0x1402A2A90 (PspRevertContainerImpersonation.c)
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 *     MiLockPageListAndLastPage @ 0x1402C46F0 (MiLockPageListAndLastPage.c)
 *     ExDeleteResourceLite @ 0x1402CD920 (ExDeleteResourceLite.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiAcquirePageListLock @ 0x1402DF1D0 (MiAcquirePageListLock.c)
 *     MiAttachThreadDone @ 0x1402E2710 (MiAttachThreadDone.c)
 *     PopPepLockActivityLink @ 0x140312A80 (PopPepLockActivityLink.c)
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140379CE4 (MiLockWorkingSetCoreExclusive.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14040EFF0 (MiCheckPurgeAndUpMapCount.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     PerfLogSpinLockAcquire @ 0x14040D6FC (PerfLogSpinLockAcquire.c)
 */

void __fastcall ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(int *a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  struct _KPRCB *CurrentPrcb; // rbp
  int v5; // r15d
  char v6; // si
  unsigned int InterruptCount; // r14d
  int v8; // edx
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax

  v2 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v6 = 0;
    InterruptCount = 0;
  }
  else
  {
    v6 = 1;
    v10 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v5 = v10;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    v2 = ExpWaitForSpinLockExclusiveAndAcquire(a1, a2, a2);
  v8 = *a1;
  v9 = (unsigned int)*a1;
  LODWORD(v9) = v9 & 0xBFFFFFFF;
  if ( (_DWORD)v9 != 0x80000000 )
  {
    do
    {
      if ( (v8 & 0x40000000) == 0 )
        _InterlockedOr(a1, 0x40000000u);
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
      {
        HvlNotifyLongSpinWait(v2);
      }
      else
      {
        _mm_pause();
      }
      v8 = *a1;
    }
    while ( (*a1 & 0xBFFFFFFF) != 0x80000000 );
  }
  if ( v2 )
  {
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v2;
  }
  if ( v6 )
  {
    v11 = __rdtsc();
    PerfLogSpinLockAcquire((_DWORD)a1, v11, v11 - v5, v2, InterruptCount, 3);
  }
}
