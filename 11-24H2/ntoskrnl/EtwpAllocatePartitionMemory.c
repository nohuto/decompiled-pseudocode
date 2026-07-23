/*
 * XREFs of EtwpAllocatePartitionMemory @ 0x14047CF3C
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x14047CE80 (EtwpAllocateTraceBuffer.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140394410 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     EtwpRegisterPartitionPages @ 0x14064EC40 (EtwpRegisterPartitionPages.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void *__fastcall EtwpAllocatePartitionMemory(ULONG_PTR *a1, __int64 a2)
{
  struct _MDL *PartitionNodePagesForMdl; // rax
  struct _MDL *v4; // rbx
  PVOID v5; // rax
  void *v6; // rdi

  PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(0, -1, 0LL, a2, 1u, 0, 5, *a1);
  v4 = PartitionNodePagesForMdl;
  if ( !PartitionNodePagesForMdl )
    return 0LL;
  v5 = MmMapLockedPagesSpecifyCache(PartitionNodePagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  v6 = v5;
  if ( !v5 )
  {
LABEL_5:
    MiFreePagesFromMdl((ULONG_PTR)v4, 0, 0, 0);
    ExFreePoolWithTag(v4, 0);
    return 0LL;
  }
  if ( !(unsigned __int8)EtwpRegisterPartitionPages(a1, v4, v5) )
  {
    MmUnmapLockedPages(v6, v4);
    goto LABEL_5;
  }
  return v6;
}
