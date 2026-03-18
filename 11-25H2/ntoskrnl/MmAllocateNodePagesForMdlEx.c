/*
 * XREFs of MmAllocateNodePagesForMdlEx @ 0x140415500
 * Callers:
 *     HalpAllocateCommonBufferVectorInternal @ 0x140412974 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140412D64 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140414548 (HalpAllocateCommonBufferDmaThin.c)
 *     MmAllocatePagesForMdlEx @ 0x1404154A0 (MmAllocatePagesForMdlEx.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054D9E0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HvlpDepositPages @ 0x140580984 (HvlpDepositPages.c)
 *     DifMmAllocateNodePagesForMdlExWrapper @ 0x140626590 (DifMmAllocateNodePagesForMdlExWrapper.c)
 *     KiComputeNumaCosts @ 0x140C1681C (KiComputeNumaCosts.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140415540 (MmAllocatePartitionNodePagesForMdlEx.c)
 */

__int64 __fastcall MmAllocateNodePagesForMdlEx(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return MmAllocatePartitionNodePagesForMdlEx(a1, a2, a3, a4, a5, a6, a7, 0LL);
}
