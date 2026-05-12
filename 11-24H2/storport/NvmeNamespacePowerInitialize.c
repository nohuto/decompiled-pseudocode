/*
 * XREFs of NvmeNamespacePowerInitialize @ 0x140133D74
 * Callers:
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocatePoolEx @ 0x14008AB5C (RaidAllocatePoolEx.c)
 *     NvmeNamespacePowerUninitialize @ 0x140134500 (NvmeNamespacePowerUninitialize.c)
 */

__int64 __fastcall NvmeNamespacePowerInitialize(__int64 a1)
{
  _DWORD *v2; // rbp
  unsigned int v3; // ebx
  __int64 Pool; // rax
  unsigned int v5; // esi
  unsigned __int16 *v6; // rdx
  int v7; // eax
  __int64 v8; // rcx

  v2 = g_CpuInfo;
  v3 = 0;
  Pool = RaidAllocatePool(72LL, 192LL, 1313890642LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 128) = Pool;
  if ( Pool )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 128) + 144LL) = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 128) + 144LL) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) = RaidAllocatePool(
                                                    72LL,
                                                    g_RecommendedSharedDataAlignment
                                                  * ((g_RecommendedSharedDataAlignment + 8 * v2[2] - 1)
                                                   / (unsigned int)g_RecommendedSharedDataAlignment),
                                                    1313890642LL,
                                                    *(_QWORD *)(a1 + 8));
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) )
      {
        v5 = 0;
        if ( v2[2] )
        {
          while ( 1 )
          {
            v6 = *(unsigned __int16 **)(56LL * v5 + *((_QWORD *)v2 + 4) + 48);
            v7 = v6 ? *v6 : 0x80000000;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) + 8LL * v5) = RaidAllocatePoolEx(
                                                                                  72LL,
                                                                                  64LL,
                                                                                  1313890642LL,
                                                                                  *(_QWORD *)(a1 + 8),
                                                                                  v7);
            if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) + 8LL * v5) )
              break;
            if ( ++v5 >= v2[2] )
              goto LABEL_10;
          }
        }
        else
        {
LABEL_10:
          *(_QWORD *)(*(_QWORD *)(a1 + 128) + 32LL) = RaidAllocatePool(72LL, 32LL, 1313890642LL, *(_QWORD *)(a1 + 8));
          v8 = *(_QWORD *)(a1 + 128);
          if ( *(_QWORD *)(v8 + 32) )
          {
            KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 88));
            *(_DWORD *)(*(_QWORD *)(a1 + 128) + 72LL) = 1;
            *(_DWORD *)(*(_QWORD *)(a1 + 128) + 68LL) = 1;
            *(_QWORD *)(*(_QWORD *)(a1 + 128) + 16LL) = 0LL;
            *(_QWORD *)(*(_QWORD *)(a1 + 128) + 40LL) = 0LL;
            *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) = 0;
            *(_DWORD *)(*(_QWORD *)(a1 + 128) + 64LL) = 0;
            **(_BYTE **)(a1 + 128) = 1;
            *(_BYTE *)(a1 + 284) = 1;
            return v3;
          }
        }
      }
    }
  }
  v3 = -1073741670;
  NvmeNamespacePowerUninitialize(a1);
  return v3;
}
