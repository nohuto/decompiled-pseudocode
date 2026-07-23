/*
 * XREFs of ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0
 * Callers:
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 *     MiComputeAgingAmount @ 0x14020F5E0 (MiComputeAgingAmount.c)
 *     MiLockPageListAndLastPage @ 0x140219C30 (MiLockPageListAndLastPage.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiAcquirePageListLock @ 0x140240AB0 (MiAcquirePageListLock.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIncrementSubsectionViewCount @ 0x1402743B0 (MiIncrementSubsectionViewCount.c)
 *     KiAbEntryRemoveFromTree @ 0x14028D4F0 (KiAbEntryRemoveFromTree.c)
 *     MiPostInsertVad @ 0x14028F1F0 (MiPostInsertVad.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140296038 (MiLockWorkingSetCoreExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     PspRevertContainerImpersonation @ 0x1402D21C0 (PspRevertContainerImpersonation.c)
 *     ExDeleteResourceLite @ 0x1402E55A0 (ExDeleteResourceLite.c)
 *     MiAttachThreadDone @ 0x1402FE6F0 (MiAttachThreadDone.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140336C60 (RtlpHpAcquireQueuedLockExclusive.c)
 *     MiAddViewsForSection @ 0x140336DD0 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     MiStoreEvictPageFile @ 0x140337B90 (MiStoreEvictPageFile.c)
 *     MiUnmapViewSubsections @ 0x140337FB0 (MiUnmapViewSubsections.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAddPageToFlushMdl @ 0x14033A230 (MiAddPageToFlushMdl.c)
 *     MiTrimSection @ 0x1403612B0 (MiTrimSection.c)
 *     PopPepLockActivityLink @ 0x1403A76F0 (PopPepLockActivityLink.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1404071F0 (MiCheckPurgeAndUpMapCount.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpWaitForSpinLockExclusiveAndAcquire(int *a1, unsigned __int8 CurrentIrql)
{
  unsigned int v2; // esi
  int i; // eax

  v2 = 0;
  do
  {
    _m_prefetchw(a1);
    for ( i = *a1; *a1 < 0; i = *a1 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(a1, 0x40000000u);
      if ( CurrentIrql != 0xFF )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v2);
      }
      else
      {
        _mm_pause();
      }
      if ( CurrentIrql != 0xFF )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      }
    }
  }
  while ( _interlockedbittestandset(a1, 0x1Fu) );
  return v2;
}
