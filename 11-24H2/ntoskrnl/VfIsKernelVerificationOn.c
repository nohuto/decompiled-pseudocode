/*
 * XREFs of VfIsKernelVerificationOn @ 0x1404FB110
 * Callers:
 *     VfPtIoAllocateMdl_Exit @ 0x140B8C1D0 (VfPtIoAllocateMdl_Exit.c)
 *     VfPtMmAllocateContiguousMemoryEx_Exit @ 0x140B8C220 (VfPtMmAllocateContiguousMemoryEx_Exit.c)
 *     VfPtMmAllocateContiguousMemorySpecifyCache_Exit @ 0x140B8C260 (VfPtMmAllocateContiguousMemorySpecifyCache_Exit.c)
 *     VfPtMmAllocateContiguousMemory_Exit @ 0x140B8C2A0 (VfPtMmAllocateContiguousMemory_Exit.c)
 *     VfPtMmAllocateMappingAddressEx_Exit @ 0x140B8C2E0 (VfPtMmAllocateMappingAddressEx_Exit.c)
 *     VfPtMmAllocateMappingAddress_Exit @ 0x140B8C320 (VfPtMmAllocateMappingAddress_Exit.c)
 *     VfPtMmAllocateNodePagesForMdlEx_Exit @ 0x140B8C360 (VfPtMmAllocateNodePagesForMdlEx_Exit.c)
 *     VfPtMmAllocateNonCachedMemory_Exit @ 0x140B8C3A0 (VfPtMmAllocateNonCachedMemory_Exit.c)
 *     VfPtMmAllocatePagesForMdlEx_Exit @ 0x140B8C3E0 (VfPtMmAllocatePagesForMdlEx_Exit.c)
 *     VfPtMmAllocatePagesForMdl_Exit @ 0x140B8C420 (VfPtMmAllocatePagesForMdl_Exit.c)
 *     VfPtMmCreateMdl_Exit @ 0x140B8C460 (VfPtMmCreateMdl_Exit.c)
 *     VfPtMmFreeContiguousMemory_Entry @ 0x140B8C4A0 (VfPtMmFreeContiguousMemory_Entry.c)
 *     VfPtMmFreeMappingAddress_Entry @ 0x140B8C4E0 (VfPtMmFreeMappingAddress_Entry.c)
 *     VfPtMmFreeNonCachedMemory_Entry @ 0x140B8C520 (VfPtMmFreeNonCachedMemory_Entry.c)
 *     VerifierExFreePool @ 0x140B91810 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140B91890 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

bool VfIsKernelVerificationOn()
{
  return KernelVerifier == 1;
}
