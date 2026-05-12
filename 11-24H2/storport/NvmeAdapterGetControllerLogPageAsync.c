/*
 * XREFs of NvmeAdapterGetControllerLogPageAsync @ 0x1400E33A0
 * Callers:
 *     NvmeAdapterCompleteFabricControllerAsyncEventCommand @ 0x1400DF310 (NvmeAdapterCompleteFabricControllerAsyncEventCommand.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocateNvmeSrb @ 0x14007AEA0 (RaidAllocateNvmeSrb.c)
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterProcessControllerQueueRequestAsync @ 0x1400E631C (NvmeAdapterProcessControllerQueueRequestAsync.c)
 *     BuildNvmeGetLogPageCommand @ 0x14011927C (BuildNvmeGetLogPageCommand.c)
 */

__int64 __fastcall NvmeAdapterGetControllerLogPageAsync(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 NvmeSrb; // rbx
  int v14; // edi
  __int64 v15; // rdx
  unsigned int v16; // r8d
  void *Pool; // r14
  unsigned int i; // ecx
  __int64 v19; // rdi
  int v21; // [rsp+30h] [rbp-98h]

  v9 = *(_QWORD *)(a1 + 128);
  v10 = a4;
  NvmeSrb = RaidAllocateNvmeSrb(a1, 0);
  if ( !NvmeSrb )
    return (unsigned int)-1073741801;
  Pool = (void *)RaidAllocatePool(64LL, v10, 1380147538LL, *(_QWORD *)(v9 + 8));
  if ( !Pool )
  {
    v14 = -1073741801;
LABEL_16:
    ExFreePoolWithTag((PVOID)NvmeSrb, 0x72536152u);
    return (unsigned int)v14;
  }
  if ( *(_BYTE *)(NvmeSrb + 2) == 40 )
  {
    v16 = *(_DWORD *)(NvmeSrb + 56);
    if ( v16 )
    {
      for ( i = 0; i < v16; ++i )
      {
        v15 = *(unsigned int *)(NvmeSrb + 4LL * i + 120);
        if ( (unsigned int)v15 >= 0x80 && (unsigned int)v15 < *(_DWORD *)(NvmeSrb + 16) )
        {
          v19 = NvmeSrb + v15;
          if ( *(_DWORD *)(NvmeSrb + v15) == 67 )
            goto LABEL_14;
        }
      }
    }
  }
  v19 = 0LL;
LABEL_14:
  LOBYTE(v16) = a3;
  LOBYTE(v15) = (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 261LL) & 4) != 0;
  BuildNvmeGetLogPageCommand(*(_DWORD *)(a1 + 576), v15, v16, v10, v15, 0LL, v21, 0, (void *)(v19 + 16));
  *(_DWORD *)(NvmeSrb + 60) = v10;
  *(_QWORD *)(NvmeSrb + 64) = Pool;
  *(_DWORD *)(NvmeSrb + 24) = 64;
  *(_BYTE *)(v19 + 80) = 1;
  *(_WORD *)(v19 + 82) = 1;
  *(_WORD *)(v19 + 106) = 0;
  v14 = NvmeAdapterProcessControllerQueueRequestAsync(
          *(_QWORD *)(a1 + 712),
          NvmeSrb,
          0,
          0,
          1,
          0LL,
          0LL,
          0,
          (__int64)NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent,
          a9);
  if ( v14 < 0 )
  {
    StorEtwNvmeControllerEvent(
      a1,
      1,
      3,
      (__int64)L"Get Log Page send failure",
      L"Status",
      v14,
      L"NamespaceId",
      -1,
      L"LogPageIdentifier",
      a3,
      L"LogPageSize",
      v10,
      L"LogPageOffset",
      0,
      L"LogSpecificIdentifier",
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
    ExFreePoolWithTag(Pool, 0x52436152u);
    goto LABEL_16;
  }
  return (unsigned int)v14;
}
