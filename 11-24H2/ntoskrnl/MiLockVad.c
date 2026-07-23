/*
 * XREFs of MiLockVad @ 0x1402926F0
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x140292568 (MiObtainReferencedSecureVad.c)
 *     MiMapImageScpCfgPages @ 0x140294080 (MiMapImageScpCfgPages.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiWaitForVadDeletion @ 0x140345500 (MiWaitForVadDeletion.c)
 *     MiFindPlaceholderVadToReplace @ 0x1403C6CE0 (MiFindPlaceholderVadToReplace.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C752C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiDeleteEmptyPageTables @ 0x1403C7ED4 (MiDeleteEmptyPageTables.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C8524 (MiInsertViewOfPhysicalSection.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14066B9B8 (MiReleaseCommitForResetPages.c)
 *     MiCanDeleteEnclave @ 0x140681954 (MiCanDeleteEnclave.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     MiPrepareToHotPatchVad @ 0x1407F6280 (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x1407F63AC (MiProcessPatchImageCfg.c)
 *     MiAllocateEnclaveVad @ 0x1407F74B4 (MiAllocateEnclaveVad.c)
 *     MiInitializeVsmEnclave @ 0x1407F7EF0 (MiInitializeVsmEnclave.c)
 *     MiTerminateEnclave @ 0x1407F8028 (MiTerminateEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x1408009A4 (MiDeleteInsertedCloneVads.c)
 *     MiLockVadRange @ 0x1408D92F0 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DA56C (MiCoalescePlaceholderAllocations.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408DD544 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1408DE814 (MiAllocateFromSubAllocatedRegion.c)
 *     MiCommitFileBackedSection @ 0x1409147D8 (MiCommitFileBackedSection.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiCommitInitialVadMetadataBits @ 0x14091C25C (MiCommitInitialVadMetadataBits.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A2A370 (MiLoadSectionIntoVsmEnclave.c)
 *     MiDeleteVadHotPatchState @ 0x140AAD494 (MiDeleteVadHotPatchState.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

int __fastcall MiLockVad(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  int result; // eax

  --*(_WORD *)(a1 + 486);
  v2 = (volatile signed __int32 *)(a2 + 40);
  v4 = KeAbPreAcquire(a2 + 40, 0LL, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64(v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v4, v2);
  if ( v5 )
    *(_BYTE *)(v5 + 10) = 1;
  result = *(_DWORD *)(a1 + 1448) | 0x80;
  *(_DWORD *)(a1 + 1448) = result;
  return result;
}
