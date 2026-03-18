/*
 * XREFs of VfPtMiscPoolNotification @ 0x140400260
 * Callers:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     MmFreeContiguousMemory @ 0x1403A93D0 (MmFreeContiguousMemory.c)
 *     IopAllocateMdl @ 0x140400000 (IopAllocateMdl.c)
 *     MiAllocateContiguousMemory @ 0x14041182C (MiAllocateContiguousMemory.c)
 *     MiAllocatePagesForMdl @ 0x14041225C (MiAllocatePagesForMdl.c)
 *     MmAllocateMappingAddressEx @ 0x140A5B620 (MmAllocateMappingAddressEx.c)
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
 * Callees:
 *     ViPtLogPoolTraceWrapper @ 0x140B82100 (ViPtLogPoolTraceWrapper.c)
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
