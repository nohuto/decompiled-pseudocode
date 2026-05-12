/*
 * XREFs of NvmeAdapterPowerInitialize @ 0x14012F574
 * Callers:
 *     CreateNvmeAdapter @ 0x1400CB1EC (CreateNvmeAdapter.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocatePoolEx @ 0x14008AB5C (RaidAllocatePoolEx.c)
 *     NvmeAdapterPowerUninitialize @ 0x14012FB5C (NvmeAdapterPowerUninitialize.c)
 */

__int64 __fastcall NvmeAdapterPowerInitialize(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  _DWORD *v2; // r14
  unsigned int v5; // ebx
  __int64 Pool; // rax
  unsigned int v7; // esi
  unsigned __int16 *v8; // rdx
  int v9; // eax
  __int64 v10; // rax

  v2 = g_CpuInfo;
  v5 = 0;
  Pool = RaidAllocatePool(72LL, 384LL, 1313890642LL, (__int64)a2);
  *(_QWORD *)(a1 + 160) = Pool;
  if ( Pool )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(Pool + 120));
    InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)(a1 + 160) + 96LL));
    *(_QWORD *)(*(_QWORD *)(a1 + 160) + 56LL) = IoAllocateWorkItem(a2);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 160) + 56LL) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 160) + 216LL) = IoAllocateWorkItem(a2);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 160) + 216LL) )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL) = RaidAllocatePool(
                                                      72LL,
                                                      g_RecommendedSharedDataAlignment
                                                    * ((g_RecommendedSharedDataAlignment + 8 * v2[2] - 1)
                                                     / (unsigned int)g_RecommendedSharedDataAlignment),
                                                      1313890642LL,
                                                      (__int64)a2);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL) )
        {
          v7 = 0;
          if ( v2[2] )
          {
            while ( 1 )
            {
              v8 = *(unsigned __int16 **)(56LL * v7 + *((_QWORD *)v2 + 4) + 48);
              v9 = v8 ? *v8 : 0x80000000;
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL) + 8LL * v7) = RaidAllocatePoolEx(
                                                                                    72LL,
                                                                                    64LL,
                                                                                    1313890642LL,
                                                                                    (__int64)a2,
                                                                                    v9);
              if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL) + 8LL * v7) )
                break;
              if ( ++v7 >= v2[2] )
                goto LABEL_11;
            }
          }
          else
          {
LABEL_11:
            *(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL) = RaidAllocatePool(72LL, 72LL, 1313890642LL, (__int64)a2);
            v10 = *(_QWORD *)(a1 + 160);
            if ( *(_QWORD *)(v10 + 24) )
            {
              *(_BYTE *)(v10 + 112) = 10;
              *(_DWORD *)(*(_QWORD *)(a1 + 160) + 68LL) = 1;
              *(_DWORD *)(*(_QWORD *)(a1 + 160) + 64LL) = 1;
              *(_QWORD *)(*(_QWORD *)(a1 + 160) + 280LL) = 0LL;
              *(_QWORD *)(*(_QWORD *)(a1 + 160) + 288LL) = 0LL;
              *(_QWORD *)(*(_QWORD *)(a1 + 160) + 296LL) = 0LL;
              *(_QWORD *)(*(_QWORD *)(a1 + 160) + 304LL) = 0LL;
              **(_BYTE **)(a1 + 160) = 0;
              *(_BYTE *)(a1 + 100) = 1;
              return v5;
            }
          }
        }
      }
    }
  }
  v5 = -1073741670;
  NvmeAdapterPowerUninitialize(a1);
  return v5;
}
