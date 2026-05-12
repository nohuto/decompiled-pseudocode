/*
 * XREFs of NvmeControllerAllocateExtendedCommand @ 0x1401290D8
 * Callers:
 *     NvmeControllerCreateAERExtendedCommandPool @ 0x1400EBDB4 (NvmeControllerCreateAERExtendedCommandPool.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeControllerCreateExtendedCommandPool @ 0x1401291AC (NvmeControllerCreateExtendedCommandPool.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeAllocateContiguousMemoryWithPreferredNode @ 0x140087984 (NvmeAllocateContiguousMemoryWithPreferredNode.c)
 *     NvmeControllerFreeExtendedCommand @ 0x1401293D8 (NvmeControllerFreeExtendedCommand.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

PHYSICAL_ADDRESS *__fastcall NvmeControllerAllocateExtendedCommand(__int64 a1)
{
  __int64 v1; // r9
  PHYSICAL_ADDRESS *Pool; // rbx
  __int64 v4; // rax
  void *v5; // rax
  PHYSICAL_ADDRESS v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  v7.QuadPart = 0LL;
  Pool = (PHYSICAL_ADDRESS *)RaidAllocatePool(72LL, 128LL, 1380147538LL, *(_QWORD *)(v1 + 8));
  if ( Pool
    && ((*(_QWORD *)(a1 + 136) & 0x100000000LL) != 0
     || (v4 = RaidAllocatePool(74LL, 584LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL)),
         (Pool[7].QuadPart = v4) != 0))
    && (v5 = NvmeAllocateContiguousMemoryWithPreferredNode(0x10B0u, *(_QWORD **)(a1 + 128), 0x80000000, &v7),
        (Pool->QuadPart = (__int64)v5) != 0) )
  {
    Pool[1] = v7;
    memset_0(v5, 0, 0x10B0uLL);
    return Pool;
  }
  else
  {
    NvmeControllerFreeExtendedCommand(a1, Pool);
    return 0LL;
  }
}
