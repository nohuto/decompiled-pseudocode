/*
 * XREFs of MiReferenceVad @ 0x140262A70
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x140262864 (MiObtainReferencedSecureVad.c)
 *     MiWaitForRotateToComplete @ 0x14049A424 (MiWaitForRotateToComplete.c)
 *     MiHotPatchProcess @ 0x1407F2D08 (MiHotPatchProcess.c)
 *     MiAllocateEnclaveVad @ 0x1407F6D40 (MiAllocateEnclaveVad.c)
 *     MiDeleteInsertedCloneVads @ 0x140800264 (MiDeleteInsertedCloneVads.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DC33C (MiCoalescePlaceholderAllocations.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x1408E8B10 (MiLockVadRange.c)
 *     MiCommitInitialVadMetadataBits @ 0x1408F9980 (MiCommitInitialVadMetadataBits.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C33C4 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A135A0 (MiMapViewOfPhysicalSection.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A6753C (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 36)) )
    __fastfail(0xEu);
}
