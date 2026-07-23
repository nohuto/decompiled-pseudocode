/*
 * XREFs of UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374
 * Callers:
 *     MiDeletePartialVad @ 0x1402675A0 (MiDeletePartialVad.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiDeleteEmptyPageTables @ 0x1403C7ED4 (MiDeleteEmptyPageTables.c)
 *     MiBeginProcessClean @ 0x1403C826C (MiBeginProcessClean.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 *     MiDeleteFinalPageTables @ 0x140450DBC (MiDeleteFinalPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x14066B9B8 (MiReleaseCommitForResetPages.c)
 *     MiAllocateEnclaveVad @ 0x1407F74B4 (MiAllocateEnclaveVad.c)
 *     MiResizeAweBitMap @ 0x1407FA110 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x1407FA340 (NtFreeUserPhysicalPages.c)
 *     MiUnlockVadRange @ 0x1408D9210 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408D92F0 (MiLockVadRange.c)
 *     MiFreeVirtualMemory @ 0x1408D9E68 (MiFreeVirtualMemory.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DA56C (MiCoalescePlaceholderAllocations.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1408DE814 (MiAllocateFromSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiInitializeVadCellBitMap @ 0x14091A2FC (MiInitializeVadCellBitMap.c)
 *     MiInsertProcessVads @ 0x14091A6A0 (MiInsertProcessVads.c)
 *     MiInitializeVadBitMap @ 0x14091A74C (MiInitializeVadBitMap.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 *     MiPrepareVadDelete @ 0x140A12E00 (MiPrepareVadDelete.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall UNLOCK_ADDRESS_SPACE_UNORDERED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *result; // rax

  v2 = a2 + 600;
  *(_DWORD *)(a1 + 1448) &= ~1u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 600), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 600));
  result = (_QWORD *)KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
