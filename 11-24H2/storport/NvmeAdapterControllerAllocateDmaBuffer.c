/*
 * XREFs of NvmeAdapterControllerAllocateDmaBuffer @ 0x1400E04C4
 * Callers:
 *     NvmeNamespaceScsiUnmapRequest @ 0x140118CB8 (NvmeNamespaceScsiUnmapRequest.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

void *__fastcall NvmeAdapterControllerAllocateDmaBuffer(__int64 a1, unsigned int a2, __int64 a3, PHYSICAL_ADDRESS *a4)
{
  __int64 v5; // r9
  void *Pool; // rax
  void *v7; // rbx

  v5 = *(_QWORD *)(a1 + 128);
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 400) + 184LL) & 0x2000) != 0 && a2 <= 0x1000 )
    Pool = (void *)RaidAllocatePool(72LL, 4096LL, 1380147538LL, *(_QWORD *)(v5 + 8));
  else
    Pool = (void *)MmAllocateContiguousNodeMemory(a2, 0x100000000LL, -1LL, 0LL, 4, 0x80000000);
  v7 = Pool;
  if ( Pool )
    *a4 = MmGetPhysicalAddress(Pool);
  return v7;
}
