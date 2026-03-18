/*
 * XREFs of MiReferenceVad @ 0x1402A7A40
 * Callers:
 *     MiUserFaultAllowed @ 0x14024ACD0 (MiUserFaultAllowed.c)
 *     MiObtainReferencedSecureVad @ 0x1402A6B28 (MiObtainReferencedSecureVad.c)
 *     MiReturnLockedVadOrNextVa @ 0x1402A77E4 (MiReturnLockedVadOrNextVa.c)
 *     MiHotPatchProcess @ 0x1407E2E80 (MiHotPatchProcess.c)
 *     MiAllocateEnclaveVad @ 0x1407E6EB0 (MiAllocateEnclaveVad.c)
 *     MiDeleteInsertedCloneVads @ 0x1407F03A4 (MiDeleteInsertedCloneVads.c)
 *     MiMapViewOfPhysicalSection @ 0x1408B6998 (MiMapViewOfPhysicalSection.c)
 *     MiLockVadRange @ 0x1408D98A0 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408F71CC (MiCoalescePlaceholderAllocations.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1408FA704 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiCommitInitialVadMetadataBits @ 0x140906C50 (MiCommitInitialVadMetadataBits.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A68E90 (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 36)) )
    __fastfail(0xEu);
}
