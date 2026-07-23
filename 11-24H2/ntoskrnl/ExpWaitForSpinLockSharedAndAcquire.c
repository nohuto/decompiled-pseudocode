/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50
 * Callers:
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiLockProbePacketWorkingSet @ 0x14020AFF0 (MiLockProbePacketWorkingSet.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140219A20 (MiUpdateWorkingSetPrivateSize.c)
 *     MiLockPageListAndLastPage @ 0x140219C30 (MiLockPageListAndLastPage.c)
 *     ExpAddTagForBigPages @ 0x14021A4A0 (ExpAddTagForBigPages.c)
 *     ExpRemoveTagForBigPages @ 0x14021B1B0 (ExpRemoveTagForBigPages.c)
 *     KeQueryBasePriorityThread @ 0x14021B3D0 (KeQueryBasePriorityThread.c)
 *     MiStopPageAccessor @ 0x140220340 (MiStopPageAccessor.c)
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiLockWorkingSetCoreShared @ 0x140240A40 (MiLockWorkingSetCoreShared.c)
 *     MiAcquirePageListLock @ 0x140240AB0 (MiAcquirePageListLock.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiMakeHyperRangeAccessible @ 0x140241470 (MiMakeHyperRangeAccessible.c)
 *     MiAddWorkingSetEntries @ 0x140242260 (MiAddWorkingSetEntries.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiReacquireWalkLocks @ 0x140246140 (MiReacquireWalkLocks.c)
 *     MmIsFileObjectAPagingFile @ 0x14025C5CC (MmIsFileObjectAPagingFile.c)
 *     MiEndingOffsetWithLock @ 0x1402724D4 (MiEndingOffsetWithLock.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140280660 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x14028D4F0 (KiAbEntryRemoveFromTree.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140299180 (MiDecommitHandleProtoFormatPte.c)
 *     KiSelectCandidateProcessor @ 0x1402A2F00 (KiSelectCandidateProcessor.c)
 *     MiGetControlAreaPtes @ 0x1402C2B60 (MiGetControlAreaPtes.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402D4F94 (KiActivateWaiterQueueWithNoLocks.c)
 *     MiSynchronizeFastPageInsert @ 0x140301300 (MiSynchronizeFastPageInsert.c)
 *     MiSetVaAgeList @ 0x140304F30 (MiSetVaAgeList.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MiZeroFault @ 0x1403091D0 (MiZeroFault.c)
 *     MiCheckProtoAccess @ 0x140309950 (MiCheckProtoAccess.c)
 *     MiCheckVirtualAddress @ 0x140309D30 (MiCheckVirtualAddress.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiWalkLeap @ 0x140339C60 (MiWalkLeap.c)
 *     MiReturnLockedVadOrNextVa @ 0x140345020 (MiReturnLockedVadOrNextVa.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     MiTrimSection @ 0x1403612B0 (MiTrimSection.c)
 *     KiAcquireProcessLockShared @ 0x14039FE44 (KiAcquireProcessLockShared.c)
 *     MiLocateSubsectionNode @ 0x14040FCF0 (MiLocateSubsectionNode.c)
 *     MmQueryWorkingSetInformation @ 0x1404103B0 (MmQueryWorkingSetInformation.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v5; // rdi
  unsigned int v6; // esi
  signed __int32 v7; // eax

  CurrentIrql = a2;
  v5 = a1;
  v6 = 0;
  _m_prefetchw(a1);
  v7 = *a1;
  do
  {
    if ( v7 < 0 )
    {
      do
      {
        if ( (v7 & 0x40000000) == 0 )
          _InterlockedOr(v5, 0x40000000u);
        if ( CurrentIrql != 0xFF )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
        {
          HvlNotifyLongSpinWait(v6);
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
        v7 = *v5;
      }
      while ( *(int *)v5 < 0 );
    }
    a1 = (signed __int32 *)(unsigned int)(v7 + 1);
    a2 = (unsigned int)v7;
    LODWORD(a1) = (unsigned int)a1 & 0xBFFFFFFF;
    v7 = _InterlockedCompareExchange(v5, (signed __int32)a1, v7);
  }
  while ( v7 != (_DWORD)a2 );
  return v6;
}
