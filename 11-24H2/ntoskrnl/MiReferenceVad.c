/*
 * XREFs of MiReferenceVad @ 0x140292770
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x140292568 (MiObtainReferencedSecureVad.c)
 *     MiWaitForRotateToComplete @ 0x140494E48 (MiWaitForRotateToComplete.c)
 *     MiHotPatchProcess @ 0x1407F32D8 (MiHotPatchProcess.c)
 *     MiAllocateEnclaveVad @ 0x1407F74B4 (MiAllocateEnclaveVad.c)
 *     MiDeleteInsertedCloneVads @ 0x1408009A4 (MiDeleteInsertedCloneVads.c)
 *     MiLockVadRange @ 0x1408D92F0 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DA56C (MiCoalescePlaceholderAllocations.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1408DE814 (MiAllocateFromSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiCommitInitialVadMetadataBits @ 0x14091C25C (MiCommitInitialVadMetadataBits.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A6031C (MiPreparePlaceholderVadReplacement.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 36)) )
    __fastfail(0xEu);
}
