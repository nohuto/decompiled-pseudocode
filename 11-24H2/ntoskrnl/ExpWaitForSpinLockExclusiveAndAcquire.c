/*
 * XREFs of ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580
 * Callers:
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpWaitForSpinLockExclusiveAndAcquire(int *a1, unsigned __int8 CurrentIrql, __int64 a3)
{
  unsigned int v3; // esi
  int i; // eax

  v3 = 0;
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
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v3);
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
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
      }
    }
  }
  while ( _interlockedbittestandset(a1, 0x1Fu) );
  return v3;
}
