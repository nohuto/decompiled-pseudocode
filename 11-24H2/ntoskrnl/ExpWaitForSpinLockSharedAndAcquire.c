/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0
 * Callers:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiWalkLeap @ 0x140210900 (MiWalkLeap.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiReacquireWalkLocks @ 0x1402193F0 (MiReacquireWalkLocks.c)
 *     MiSynchronizeFastPageInsert @ 0x14022D9F0 (MiSynchronizeFastPageInsert.c)
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 *     MiEndingOffsetWithLock @ 0x14023A3EC (MiEndingOffsetWithLock.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140250050 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x14025CEE0 (KiAbEntryRemoveFromTree.c)
 *     MiStopPageAccessor @ 0x14026ADB0 (MiStopPageAccessor.c)
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140289580 (MiDecommitHandleProtoFormatPte.c)
 *     KiSelectCandidateProcessor @ 0x140293300 (KiSelectCandidateProcessor.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402A5864 (KiActivateWaiterQueueWithNoLocks.c)
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 *     MiLocateSubsectionNode @ 0x1402C31C0 (MiLocateSubsectionNode.c)
 *     ExpStampBigPoolEntry @ 0x1402C3590 (ExpStampBigPoolEntry.c)
 *     MiLockProbePacketWorkingSet @ 0x1402C3B90 (MiLockProbePacketWorkingSet.c)
 *     KeQueryBasePriorityThread @ 0x1402C3D10 (KeQueryBasePriorityThread.c)
 *     ExpRemoveTagForBigPages @ 0x1402C3EB0 (ExpRemoveTagForBigPages.c)
 *     ExpAddTagForBigPages @ 0x1402C4180 (ExpAddTagForBigPages.c)
 *     MiLockPageListAndLastPage @ 0x1402C46F0 (MiLockPageListAndLastPage.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402C49A0 (MiUpdateWorkingSetPrivateSize.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLockWorkingSetCoreShared @ 0x1402DF160 (MiLockWorkingSetCoreShared.c)
 *     MiAcquirePageListLock @ 0x1402DF1D0 (MiAcquirePageListLock.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiMakeHyperRangeAccessible @ 0x1402DFB90 (MiMakeHyperRangeAccessible.c)
 *     MiAddWorkingSetEntries @ 0x1402E0980 (MiAddWorkingSetEntries.c)
 *     MmQueryWorkingSetInformation @ 0x1402E1DB0 (MmQueryWorkingSetInformation.c)
 *     MiReturnLockedVadOrNextVa @ 0x1402FC120 (MiReturnLockedVadOrNextVa.c)
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 *     MiZeroFault @ 0x1402FEA50 (MiZeroFault.c)
 *     MiCheckProtoAccess @ 0x1402FF1D0 (MiCheckProtoAccess.c)
 *     MiCheckVirtualAddress @ 0x1402FF5B0 (MiCheckVirtualAddress.c)
 *     MiGetControlAreaPtes @ 0x140319FD0 (MiGetControlAreaPtes.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     MmIsFileObjectAPagingFile @ 0x140373D0C (MmIsFileObjectAPagingFile.c)
 *     KiAcquireProcessLockShared @ 0x1403B1634 (KiAcquireProcessLockShared.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(signed __int32 *a1, unsigned __int8 CurrentIrql)
{
  unsigned int v4; // esi
  signed __int32 v5; // eax
  signed __int32 v6; // edx

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
          _InterlockedOr(a1, 0x40000000u);
        if ( CurrentIrql != 0xFF )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
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
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
        }
        v5 = *a1;
      }
      while ( *a1 < 0 );
    }
    v6 = v5;
    v5 = _InterlockedCompareExchange(a1, (v5 + 1) & 0xBFFFFFFF, v5);
  }
  while ( v5 != v6 );
  return v4;
}
