/*
 * XREFs of NvmeAdapterAllocateControllerIoQueues @ 0x1400DE644
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400DFBF4 (NvmeAdapterConnectFabricNvmeController.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeAdapterFreeControllerIoQueues @ 0x1400E2DF4 (NvmeAdapterFreeControllerIoQueues.c)
 */

__int64 __fastcall NvmeAdapterAllocateControllerIoQueues(__int64 a1)
{
  unsigned int v2; // edi
  __int64 Pool; // rax
  unsigned int v4; // ebp
  __int64 v5; // rbx

  v2 = 0;
  Pool = RaidAllocatePool(
           64LL,
           192LL * *(unsigned __int16 *)(a1 + 20),
           1380147538LL,
           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 728) = Pool;
  if ( !Pool )
  {
LABEL_7:
    v2 = -1073741801;
    NvmeAdapterFreeControllerIoQueues(a1);
    return v2;
  }
  if ( (*(_BYTE *)(a1 + 136) & 0x40) != 0 )
  {
    v4 = 0;
    if ( *(_WORD *)(a1 + 20) )
    {
      while ( 1 )
      {
        v5 = 192LL * v4;
        *(_QWORD *)(*(_QWORD *)(a1 + 728) + v5 + 96) = RaidAllocatePool(
                                                         64LL,
                                                         5672LL,
                                                         1095655762LL,
                                                         *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
        if ( !*(_QWORD *)(*(_QWORD *)(a1 + 728) + v5 + 96) )
          break;
        if ( ++v4 >= *(unsigned __int16 *)(a1 + 20) )
          return v2;
      }
      goto LABEL_7;
    }
  }
  return v2;
}
