/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0
 * Callers:
 *     MiAcquirePageListLock @ 0x1402122F0 (MiAcquirePageListLock.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
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
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x14041FC48 (PerfLogSpinLockAcquire.c)
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
      result = ExpWaitForSpinLockSharedAndAcquire(a1, a2);
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
