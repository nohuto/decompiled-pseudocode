/*
 * XREFs of VfPtMiscPoolNotification @ 0x1403FA750
 * Callers:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MiAllocatePagesForMdl @ 0x14039469C (MiAllocatePagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x140395A6C (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x140398060 (MmFreeContiguousMemory.c)
 *     IopAllocateMdl @ 0x1403FA4F0 (IopAllocateMdl.c)
 *     MmAllocateMappingAddressEx @ 0x140A531F0 (MmAllocateMappingAddressEx.c)
 *     VfPtIoAllocateMdl_Exit @ 0x140B8E1D0 (VfPtIoAllocateMdl_Exit.c)
 *     VfPtMmAllocateContiguousMemoryEx_Exit @ 0x140B8E220 (VfPtMmAllocateContiguousMemoryEx_Exit.c)
 *     VfPtMmAllocateContiguousMemorySpecifyCache_Exit @ 0x140B8E260 (VfPtMmAllocateContiguousMemorySpecifyCache_Exit.c)
 *     VfPtMmAllocateContiguousMemory_Exit @ 0x140B8E2A0 (VfPtMmAllocateContiguousMemory_Exit.c)
 *     VfPtMmAllocateMappingAddressEx_Exit @ 0x140B8E2E0 (VfPtMmAllocateMappingAddressEx_Exit.c)
 *     VfPtMmAllocateMappingAddress_Exit @ 0x140B8E320 (VfPtMmAllocateMappingAddress_Exit.c)
 *     VfPtMmAllocateNodePagesForMdlEx_Exit @ 0x140B8E360 (VfPtMmAllocateNodePagesForMdlEx_Exit.c)
 *     VfPtMmAllocateNonCachedMemory_Exit @ 0x140B8E3A0 (VfPtMmAllocateNonCachedMemory_Exit.c)
 *     VfPtMmAllocatePagesForMdlEx_Exit @ 0x140B8E3E0 (VfPtMmAllocatePagesForMdlEx_Exit.c)
 *     VfPtMmAllocatePagesForMdl_Exit @ 0x140B8E420 (VfPtMmAllocatePagesForMdl_Exit.c)
 *     VfPtMmCreateMdl_Exit @ 0x140B8E460 (VfPtMmCreateMdl_Exit.c)
 *     VfPtMmFreeContiguousMemory_Entry @ 0x140B8E4A0 (VfPtMmFreeContiguousMemory_Entry.c)
 *     VfPtMmFreeMappingAddress_Entry @ 0x140B8E4E0 (VfPtMmFreeMappingAddress_Entry.c)
 *     VfPtMmFreeNonCachedMemory_Entry @ 0x140B8E520 (VfPtMmFreeNonCachedMemory_Entry.c)
 * Callees:
 *     ViPtLogPoolTraceWrapper @ 0x140B84104 (ViPtLogPoolTraceWrapper.c)
 */

__int64 __fastcall VfPtMiscPoolNotification(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 result; // rax

  v4 = 0LL;
  v5 = (unsigned int)(a4 != 0) + 2;
  result = (unsigned int)(DifpPoolTagsSize - 1);
  if ( (unsigned int)result > 9 )
    return ViPtLogPoolTraceWrapper(a1, a3, a2, v5);
  while ( (unsigned int)v4 < DifpPoolTagsSize )
  {
    if ( *((_DWORD *)&DifpPoolTags + v4) == a3 )
      return ViPtLogPoolTraceWrapper(a1, a3, a2, v5);
    v4 = (unsigned int)(v4 + 1);
  }
  return result;
}
