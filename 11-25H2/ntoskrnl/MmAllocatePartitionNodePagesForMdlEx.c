/*
 * XREFs of MmAllocatePartitionNodePagesForMdlEx @ 0x140415540
 * Callers:
 *     MmAllocateNodePagesForMdlEx @ 0x140415500 (MmAllocateNodePagesForMdlEx.c)
 *     EtwpAllocatePartitionMemory @ 0x140480F50 (EtwpAllocatePartitionMemory.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140595B08 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     MmAllocateSecureKernelPages @ 0x14067D234 (MmAllocateSecureKernelPages.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140C487AC (MiMeasureDemandCoalesceTimeBounds.c)
 * Callees:
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     MiTranslateCacheType @ 0x1404156B0 (MiTranslateCacheType.c)
 *     MiPartitionObjectToPartition @ 0x1404156EC (MiPartitionObjectToPartition.c)
 *     MiAllocatePagesForMdl @ 0x1404157CC (MiAllocatePagesForMdl.c)
 */

__int64 __fastcall MmAllocatePartitionNodePagesForMdlEx(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        ULONG_PTR BugCheckParameter2)
{
  int v12; // ebp
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  int v15; // r13d
  __int64 v16; // rax

  if ( a6 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  v12 = a7;
  v15 = MiTranslateCacheType(a5);
  if ( (a7 & 0xFFFFF800) != 0 )
    return 0LL;
  if ( (a7 & 0x60) == 0x20 )
  {
    v12 = a7 | 0x10;
    if ( a3 )
    {
      if ( ((v13 - 1) & a3) != 0 || a3 < 4096 || v14 % (unsigned int)a3 )
        return 0LL;
    }
    else
    {
      v12 = a7 | 0x14;
    }
  }
  if ( (v12 & 0x100) == 0 || (v12 & 4) == 0 && !KeGetCurrentIrql() )
  {
    v16 = MiPartitionObjectToPartition(BugCheckParameter2);
    if ( v16 )
      return MiAllocatePagesForMdl(
               v16,
               a1,
               a2,
               a3,
               a4,
               v15,
               a6,
               v12,
               (__int64)KeGetCurrentThread()->ApcState.Process,
               0LL);
  }
  return 0LL;
}
