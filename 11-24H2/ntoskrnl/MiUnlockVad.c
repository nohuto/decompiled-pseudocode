/*
 * XREFs of MiUnlockVad @ 0x1403C870C
 * Callers:
 *     MiMapImageScpCfgPages @ 0x140294080 (MiMapImageScpCfgPages.c)
 *     MiWaitForVadDeletion @ 0x140345500 (MiWaitForVadDeletion.c)
 *     MiFindPlaceholderVadToReplace @ 0x1403C6CE0 (MiFindPlaceholderVadToReplace.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C752C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiLockAddressSpaceToo @ 0x1403C7D64 (MiLockAddressSpaceToo.c)
 *     MiDeleteEmptyPageTables @ 0x1403C7ED4 (MiDeleteEmptyPageTables.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C8524 (MiInsertViewOfPhysicalSection.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14066B9B8 (MiReleaseCommitForResetPages.c)
 *     MiCanDeleteEnclave @ 0x140681954 (MiCanDeleteEnclave.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     MiPrepareToHotPatchVad @ 0x1407F6280 (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x1407F63AC (MiProcessPatchImageCfg.c)
 *     MiInitializeVsmEnclave @ 0x1407F7EF0 (MiInitializeVsmEnclave.c)
 *     MiTerminateEnclave @ 0x1407F8028 (MiTerminateEnclave.c)
 *     MiUnlockVadRange @ 0x1408D9210 (MiUnlockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DA56C (MiCoalescePlaceholderAllocations.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408DD544 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCommitFileBackedSection @ 0x1409147D8 (MiCommitFileBackedSection.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A2A370 (MiLoadSectionIntoVsmEnclave.c)
 *     MiDeleteVadHotPatchState @ 0x140AAD494 (MiDeleteVadHotPatchState.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockVad(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *result; // rax

  v2 = a2 + 40;
  *(_DWORD *)(a1 + 1448) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 40));
  result = (_QWORD *)KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
