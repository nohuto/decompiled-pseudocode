/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480
 * Callers:
 *     MiAcquirePageListLock @ 0x1402122F0 (MiAcquirePageListLock.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiLockWorkingSetCoreShared @ 0x1402146E0 (MiLockWorkingSetCoreShared.c)
 *     MiSynchronizeFastPageInsert @ 0x140217140 (MiSynchronizeFastPageInsert.c)
 *     MiLocateSubsectionNode @ 0x140219A20 (MiLocateSubsectionNode.c)
 *     MiZeroFault @ 0x1402429D0 (MiZeroFault.c)
 *     MiCheckProtoAccess @ 0x140243150 (MiCheckProtoAccess.c)
 *     MiCheckVirtualAddress @ 0x140243540 (MiCheckVirtualAddress.c)
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     KiAcquireProcessLockShared @ 0x140271084 (KiAcquireProcessLockShared.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x14029D4A0 (KiAbEntryRemoveFromTree.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14029FAB0 (KiActivateWaiterQueueWithNoLocks.c)
 *     MiWalkLeap @ 0x1402B50C0 (MiWalkLeap.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiReacquireWalkLocks @ 0x1402B8560 (MiReacquireWalkLocks.c)
 *     MiMakeHyperRangeAccessible @ 0x1402B94E0 (MiMakeHyperRangeAccessible.c)
 *     MiAddWorkingSetEntries @ 0x1402BA2B0 (MiAddWorkingSetEntries.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     MiGetControlAreaPtes @ 0x1402BBFC0 (MiGetControlAreaPtes.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402E83C0 (KiAbEntryGetLockedHeadEntry.c)
 *     ExpStampBigPoolEntry @ 0x1402FBED0 (ExpStampBigPoolEntry.c)
 *     KeQueryBasePriorityThread @ 0x1402FC0E0 (KeQueryBasePriorityThread.c)
 *     MiLockProbePacketWorkingSet @ 0x1402FC680 (MiLockProbePacketWorkingSet.c)
 *     ExpRemoveTagForBigPages @ 0x1402FC810 (ExpRemoveTagForBigPages.c)
 *     MiLockPageListAndLastPage @ 0x1402FCA40 (MiLockPageListAndLastPage.c)
 *     ExpAddTagForBigPages @ 0x1402FCDC0 (ExpAddTagForBigPages.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402FD330 (MiUpdateWorkingSetPrivateSize.c)
 *     MiEndingOffsetWithLock @ 0x1402FD558 (MiEndingOffsetWithLock.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiTrimSection @ 0x140320A50 (MiTrimSection.c)
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     KiSelectCandidateProcessor @ 0x14032DF70 (KiSelectCandidateProcessor.c)
 *     MmIsFileObjectAPagingFile @ 0x14035D458 (MmIsFileObjectAPagingFile.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140382C60 (MiDecommitHandleProtoFormatPte.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(signed __int32 *a1, unsigned __int8 CurrentIrql)
{
  volatile signed __int32 *v3; // rdi
  unsigned int v4; // esi
  signed __int32 v5; // eax
  signed __int32 v6; // edx

  v3 = a1;
  v4 = 0;
  _m_prefetchw(a1);
  v5 = *a1;
  do
  {
    if ( v5 < 0 )
    {
      do
      {
        if ( (v5 & 0x40000000) == 0 )
          _InterlockedOr(v3, 0x40000000u);
        if ( CurrentIrql != 0xFF )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v4);
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
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
        }
        v5 = *v3;
      }
      while ( *(int *)v3 < 0 );
    }
    a1 = (signed __int32 *)(unsigned int)(v5 + 1);
    v6 = v5;
    LODWORD(a1) = (unsigned int)a1 & 0xBFFFFFFF;
    v5 = _InterlockedCompareExchange(v3, (signed __int32)a1, v5);
  }
  while ( v5 != v6 );
  return v4;
}
