/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0
 * Callers:
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiAcquirePageListLock @ 0x1402122F0 (MiAcquirePageListLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140212CB0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140213800 (RtlpHpAcquireQueuedLockExclusive.c)
 *     MiAddViewsForSection @ 0x140213970 (MiAddViewsForSection.c)
 *     MiUnmapViewSubsections @ 0x14022EE90 (MiUnmapViewSubsections.c)
 *     MiAddPageToFlushMdl @ 0x14022FA30 (MiAddPageToFlushMdl.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiComputeAgingAmount @ 0x1402477F0 (MiComputeAgingAmount.c)
 *     KiAbEntryRemoveFromTree @ 0x14029D4A0 (KiAbEntryRemoveFromTree.c)
 *     MiIncrementSubsectionViewCount @ 0x1402A7470 (MiIncrementSubsectionViewCount.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiAttachThreadDone @ 0x1402BC1A0 (MiAttachThreadDone.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageListAndLastPage @ 0x1402FCA40 (MiLockPageListAndLastPage.c)
 *     PspRevertContainerImpersonation @ 0x140308400 (PspRevertContainerImpersonation.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiTrimSection @ 0x140320A50 (MiTrimSection.c)
 *     MiStoreEvictPageFile @ 0x140326CC0 (MiStoreEvictPageFile.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     ExDeleteResourceLite @ 0x1403A42F0 (ExDeleteResourceLite.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1403A4900 (MiCheckPurgeAndUpMapCount.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1403C3B04 (MiLockWorkingSetCoreExclusive.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     PerfLogSpinLockAcquire @ 0x14041FC48 (PerfLogSpinLockAcquire.c)
 */

void __fastcall ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(int *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  int v3; // r15d
  char v5; // bp
  unsigned int InterruptCount; // r14d
  unsigned int v7; // ebx
  int v8; // edx
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v5 = 0;
    InterruptCount = 0;
  }
  else
  {
    v5 = 1;
    v10 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v3 = v10;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v7 = 0;
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    v7 = ExpWaitForSpinLockExclusiveAndAcquire(a1, a2);
  v8 = *a1;
  v9 = (unsigned int)*a1;
  LODWORD(v9) = v9 & 0xBFFFFFFF;
  if ( (_DWORD)v9 != 0x80000000 )
  {
    do
    {
      if ( (v8 & 0x40000000) == 0 )
        _InterlockedOr(a1, 0x40000000u);
      if ( (++v7 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
      {
        HvlNotifyLongSpinWait(v7);
      }
      else
      {
        _mm_pause();
      }
      v8 = *a1;
    }
    while ( (*a1 & 0xBFFFFFFF) != 0x80000000 );
  }
  if ( v7 )
  {
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v7;
  }
  if ( v5 )
  {
    v11 = __rdtsc();
    PerfLogSpinLockAcquire((_DWORD)a1, v11, v11 - v3, v7, InterruptCount, 3);
  }
}
