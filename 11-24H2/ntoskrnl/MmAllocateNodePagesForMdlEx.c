/*
 * XREFs of MmAllocateNodePagesForMdlEx @ 0x140411F90
 * Callers:
 *     HalpAllocateCommonBufferVectorInternal @ 0x14041011C (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140410764 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140410E18 (HalpAllocateCommonBufferDmaThin.c)
 *     MmAllocatePagesForMdlEx @ 0x140411F30 (MmAllocatePagesForMdlEx.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140550340 (HalpAllocateDomainCommonBufferInternal.c)
 *     HvlpDepositPages @ 0x140584134 (HvlpDepositPages.c)
 *     DifMmAllocateNodePagesForMdlExWrapper @ 0x140632550 (DifMmAllocateNodePagesForMdlExWrapper.c)
 *     KiComputeNumaCosts @ 0x140C278AC (KiComputeNumaCosts.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140411FD0 (MmAllocatePartitionNodePagesForMdlEx.c)
 */

__int64 __fastcall MmAllocateNodePagesForMdlEx(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return MmAllocatePartitionNodePagesForMdlEx(a1, a2, a3, a4, a5, a6, a7, 0LL);
}
