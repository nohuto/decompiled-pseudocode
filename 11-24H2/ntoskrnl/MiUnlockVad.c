/*
 * XREFs of MiUnlockVad @ 0x140264968
 * Callers:
 *     MiMapImageScpCfgPages @ 0x140264810 (MiMapImageScpCfgPages.c)
 *     MiWaitForVadDeletion @ 0x1402FBA58 (MiWaitForVadDeletion.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403CEF18 (MiInsertViewOfPhysicalSection.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140404528 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiLockAddressSpaceToo @ 0x140405808 (MiLockAddressSpaceToo.c)
 *     MiDeleteEmptyPageTables @ 0x140405978 (MiDeleteEmptyPageTables.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14042D608 (MiReleaseOutSwappedProcessCommit.c)
 *     MiFindPlaceholderVadToReplace @ 0x140497E8C (MiFindPlaceholderVadToReplace.c)
 *     MiReleaseCommitForResetPages @ 0x14066A7E8 (MiReleaseCommitForResetPages.c)
 *     MiCanDeleteEnclave @ 0x140680754 (MiCanDeleteEnclave.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068BF88 (MiStoreDiscardPoisonedPage.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 *     MiPrepareToHotPatchVad @ 0x1407F5B90 (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x1407F5CBC (MiProcessPatchImageCfg.c)
 *     MiInitializeVsmEnclave @ 0x1407F777C (MiInitializeVsmEnclave.c)
 *     MiTerminateEnclave @ 0x1407F78B4 (MiTerminateEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408DA8E0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DC33C (MiCoalescePlaceholderAllocations.c)
 *     MiCommitFileBackedSection @ 0x1408DDC1C (MiCommitFileBackedSection.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiUnlockVadRange @ 0x1408E8A30 (MiUnlockVadRange.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409C3660 (MiAllocateNewSubAllocatedRegion.c)
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A135A0 (MiMapViewOfPhysicalSection.c)
 *     MiDeleteVadHotPatchState @ 0x140AB2524 (MiDeleteVadHotPatchState.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockVad(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v2 = a2 + 40;
  *(_DWORD *)(a1 + 1448) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 40));
  result = (_QWORD *)KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v6, v5, v7, v8);
  }
  return result;
}
