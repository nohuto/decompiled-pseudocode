/*
 * XREFs of MmAllocateNodePagesForMdlEx @ 0x1403953A0
 * Callers:
 *     MmAllocatePagesForMdlEx @ 0x140395340 (MmAllocatePagesForMdlEx.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403962A4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140397478 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1403976A0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054DC80 (HalpAllocateDomainCommonBufferInternal.c)
 *     HvlpDepositPages @ 0x1405814B4 (HvlpDepositPages.c)
 *     DifMmAllocateNodePagesForMdlExWrapper @ 0x140630B10 (DifMmAllocateNodePagesForMdlExWrapper.c)
 *     KiComputeNumaCosts @ 0x140C29888 (KiComputeNumaCosts.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140394410 (MmAllocatePartitionNodePagesForMdlEx.c)
 */

__int64 __fastcall MmAllocateNodePagesForMdlEx(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  return MmAllocatePartitionNodePagesForMdlEx(a1, a2, a3, a4, a5, a6, a7, 0LL);
}
