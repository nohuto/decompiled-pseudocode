/*
 * XREFs of MiLockVad @ 0x1402629EC
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x140262864 (MiObtainReferencedSecureVad.c)
 *     MiMapImageScpCfgPages @ 0x140264810 (MiMapImageScpCfgPages.c)
 *     MiWaitForVadDeletion @ 0x1402FBA58 (MiWaitForVadDeletion.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403CEF18 (MiInsertViewOfPhysicalSection.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140404528 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiDeleteEmptyPageTables @ 0x140405978 (MiDeleteEmptyPageTables.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14042D608 (MiReleaseOutSwappedProcessCommit.c)
 *     MiFindPlaceholderVadToReplace @ 0x140497E8C (MiFindPlaceholderVadToReplace.c)
 *     MiReleaseCommitForResetPages @ 0x14066A7E8 (MiReleaseCommitForResetPages.c)
 *     MiCanDeleteEnclave @ 0x140680754 (MiCanDeleteEnclave.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 *     MiPrepareToHotPatchVad @ 0x1407F5B90 (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x1407F5CBC (MiProcessPatchImageCfg.c)
 *     MiAllocateEnclaveVad @ 0x1407F6D40 (MiAllocateEnclaveVad.c)
 *     MiInitializeVsmEnclave @ 0x1407F777C (MiInitializeVsmEnclave.c)
 *     MiTerminateEnclave @ 0x1407F78B4 (MiTerminateEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x140800264 (MiDeleteInsertedCloneVads.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408DA8E0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DC33C (MiCoalescePlaceholderAllocations.c)
 *     MiCommitFileBackedSection @ 0x1408DDC1C (MiCommitFileBackedSection.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x1408E8B10 (MiLockVadRange.c)
 *     MiCommitInitialVadMetadataBits @ 0x1408F9980 (MiCommitInitialVadMetadataBits.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C33C4 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409C3660 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A135A0 (MiMapViewOfPhysicalSection.c)
 *     MiDeleteVadHotPatchState @ 0x140AB2524 (MiDeleteVadHotPatchState.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
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
