/*
 * XREFs of NvmeNamespaceInitializeIoTracking @ 0x140104B48
 * Callers:
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocatePoolEx @ 0x14008AB5C (RaidAllocatePoolEx.c)
 *     NvmeNamespaceUninitializeIoTracking @ 0x140114E90 (NvmeNamespaceUninitializeIoTracking.c)
 */

__int64 __fastcall NvmeNamespaceInitializeIoTracking(__int64 a1)
{
  _QWORD *v1; // rsi
  unsigned int v3; // ebx
  __int64 Pool; // rax
  unsigned int v5; // edi
  unsigned __int16 *v6; // rdx
  int v7; // eax

  v1 = g_CpuInfo;
  v3 = 0;
  Pool = RaidAllocatePool(
           72LL,
           g_RecommendedSharedDataAlignment
         * ((g_RecommendedSharedDataAlignment + 8 * *((_DWORD *)g_CpuInfo + 2) - 1)
          / (unsigned int)g_RecommendedSharedDataAlignment),
           1296982354LL,
           *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 680) = Pool;
  if ( !Pool )
  {
LABEL_9:
    v3 = -1073741670;
    NvmeNamespaceUninitializeIoTracking(a1);
    return v3;
  }
  v5 = 0;
  if ( *((_DWORD *)v1 + 2) )
  {
    while ( 1 )
    {
      v6 = *(unsigned __int16 **)(56LL * v5 + v1[4] + 48);
      v7 = v6 ? *v6 : 0x80000000;
      *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * v5) = RaidAllocatePoolEx(
                                                        72LL,
                                                        64LL,
                                                        1296982354LL,
                                                        *(_QWORD *)(a1 + 8),
                                                        v7);
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * v5) )
        break;
      if ( ++v5 >= *((_DWORD *)v1 + 2) )
        return v3;
    }
    goto LABEL_9;
  }
  return v3;
}
