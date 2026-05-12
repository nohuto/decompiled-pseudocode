/*
 * XREFs of StorpInitializeNvmePerNamespaceIoSizeDistribution @ 0x14018C244
 * Callers:
 *     StorpInitializeNvmePerNamespacePerfTelemetry @ 0x14018C338 (StorpInitializeNvmePerNamespacePerfTelemetry.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorpUninitializeNvmePerNamespaceIoSizeDistribution @ 0x1400BCF18 (StorpUninitializeNvmePerNamespaceIoSizeDistribution.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall StorpInitializeNvmePerNamespaceIoSizeDistribution(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  void *v4; // rcx

  v2 = 0;
  if ( (_DWORD)dword_140170E44 && g_RaidNumberProcessors )
  {
    v3 = a1[76];
    if ( *(_QWORD *)(v3 + 16) )
    {
      memset_0(*(void **)(v3 + 16), 0, (unsigned int)dword_140170E44);
    }
    else
    {
      *(_QWORD *)(a1[76] + 16) = RaidAllocatePool(72LL, (unsigned int)dword_140170E44, 1700028754LL, a1[1]);
      if ( !*(_QWORD *)(a1[76] + 16) )
        goto LABEL_9;
    }
    v4 = *(void **)(a1[76] + 40);
    if ( v4 )
    {
      memset_0(v4, 0, (unsigned int)dword_140170E3C);
    }
    else
    {
      *(_QWORD *)(a1[76] + 40) = RaidAllocatePool(72LL, (unsigned int)dword_140170E3C, 1700028754LL, a1[1]);
      if ( !*(_QWORD *)(a1[76] + 40) )
      {
LABEL_9:
        v2 = -1073741801;
        StorpUninitializeNvmePerNamespaceIoSizeDistribution((__int64)a1);
        return v2;
      }
    }
    a1[14] |= 0x100uLL;
  }
  return v2;
}
