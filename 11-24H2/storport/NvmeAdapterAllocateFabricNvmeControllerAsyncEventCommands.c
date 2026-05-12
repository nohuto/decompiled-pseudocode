/*
 * XREFs of NvmeAdapterAllocateFabricNvmeControllerAsyncEventCommands @ 0x1400DE888
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400DFBF4 (NvmeAdapterConnectFabricNvmeController.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocateNvmeSrb @ 0x14007AEA0 (RaidAllocateNvmeSrb.c)
 *     NvmeAdapterFreeFabricNvmeControllerAsyncEventCommands @ 0x1400E2F50 (NvmeAdapterFreeFabricNvmeControllerAsyncEventCommands.c)
 */

__int64 __fastcall NvmeAdapterAllocateFabricNvmeControllerAsyncEventCommands(__int64 a1)
{
  unsigned int v2; // edi
  __int64 Pool; // rax
  unsigned __int16 i; // bp
  __int64 v5; // rcx
  unsigned int v6; // r9d
  unsigned int j; // edx
  __int64 v8; // r8
  __int64 v9; // rax

  v2 = 0;
  Pool = RaidAllocatePool(
           64LL,
           8LL * *(unsigned __int8 *)(a1 + 742),
           1380147538LL,
           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 544) = Pool;
  if ( Pool )
  {
    for ( i = 0; i < *(unsigned __int8 *)(a1 + 742); ++i )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 544) + 8LL * i) = RaidAllocateNvmeSrb(a1, 0);
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 8LL * i);
      if ( !v5 )
        goto LABEL_15;
      if ( *(_BYTE *)(v5 + 2) == 40 )
      {
        v6 = *(_DWORD *)(v5 + 56);
        if ( v6 )
        {
          for ( j = 0; j < v6; ++j )
          {
            v8 = *(unsigned int *)(v5 + 4LL * j + 120);
            if ( (unsigned int)v8 >= 0x80 && (unsigned int)v8 < *(_DWORD *)(v5 + 16) )
            {
              v9 = v5 + v8;
              if ( *(_DWORD *)(v5 + v8) == 67 )
                goto LABEL_14;
            }
          }
        }
      }
      v9 = 0LL;
LABEL_14:
      *(_BYTE *)(v9 + 16) = 12;
      *(_BYTE *)(v9 + 80) = 1;
      *(_WORD *)(v9 + 106) = 0;
    }
  }
  else
  {
LABEL_15:
    v2 = -1073741801;
    NvmeAdapterFreeFabricNvmeControllerAsyncEventCommands(a1);
  }
  return v2;
}
