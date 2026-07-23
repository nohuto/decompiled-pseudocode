/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380
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
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x14040594C (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall ExpAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1, unsigned __int8 a2)
{
  int v2; // r9d
  struct _KPRCB *CurrentPrcb; // rsi
  int v4; // ebx
  int v5; // r14d
  char v6; // di
  unsigned int InterruptCount; // ebp
  __int64 result; // rax
  int v9; // ett
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax

  v2 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (int)a1;
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
  _m_prefetchw(a1);
  LODWORD(result) = *a1 & 0x7FFFFFFF;
  while ( 1 )
  {
    v9 = result;
    result = (unsigned int)_InterlockedCompareExchange(a1, result + 1, result);
    if ( v9 == (_DWORD)result )
      break;
    if ( (int)result < 0 )
    {
      result = ExpWaitForSpinLockSharedAndAcquire(a1, a2, a2, 0LL);
      ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
      v2 = result;
      CurrentPrcb->SynchCounters.SpinLockSpinCount += result;
      break;
    }
  }
  if ( v6 )
  {
    v11 = __rdtsc();
    return PerfLogSpinLockAcquire(v4, v11, (int)v11 - v5, v2, InterruptCount, 2);
  }
  return result;
}
