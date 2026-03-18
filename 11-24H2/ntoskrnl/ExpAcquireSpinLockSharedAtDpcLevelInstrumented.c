/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0
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
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x14040D6FC (PerfLogSpinLockAcquire.c)
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
