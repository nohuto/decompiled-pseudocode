/*
 * XREFs of NvmeAdapterAllocateControllerAdminQueue @ 0x1400DE5B0
 * Callers:
 *     NvmeAdapterCreateNvmeController @ 0x14019DFDC (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeAdapterFreeControllerAdminQueue @ 0x1400E2D7C (NvmeAdapterFreeControllerAdminQueue.c)
 */

__int64 __fastcall NvmeAdapterAllocateControllerAdminQueue(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 Pool; // rax

  v2 = 0;
  Pool = RaidAllocatePool(64LL, 192LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 712) = Pool;
  if ( !Pool
    || (*(_QWORD *)(*(_QWORD *)(a1 + 712) + 96LL) = RaidAllocatePool(
                                                      64LL,
                                                      5672LL,
                                                      1095655762LL,
                                                      *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL))) == 0LL )
  {
    v2 = -1073741801;
    NvmeAdapterFreeControllerAdminQueue(a1);
  }
  return v2;
}
