/*
 * XREFs of StorpInitializePerUnitIoSizeDistribution @ 0x14018C604
 * Callers:
 *     RaUnitStorageDataCollectionIoctl @ 0x140187D70 (RaUnitStorageDataCollectionIoctl.c)
 *     StorpInitializePerUnitPerfTelemetry @ 0x14018C6D0 (StorpInitializePerUnitPerfTelemetry.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorpUninitializePerUnitIoSizeDistribution @ 0x1400BD038 (StorpUninitializePerUnitIoSizeDistribution.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall StorpInitializePerUnitIoSizeDistribution(__int64 a1)
{
  unsigned int v1; // ebx
  void *v3; // rcx
  __int64 Pool; // rax
  void *v5; // rcx
  __int64 v6; // rax

  v1 = 0;
  if ( (_DWORD)dword_140170E44 && g_RaidNumberProcessors )
  {
    v3 = *(void **)(a1 + 2384);
    if ( v3 )
    {
      memset_0(v3, 0, (unsigned int)dword_140170E44);
    }
    else
    {
      Pool = RaidAllocatePool(72LL, (unsigned int)dword_140170E44, 1700028754LL, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 2384) = Pool;
      if ( !Pool )
        goto LABEL_9;
    }
    v5 = *(void **)(a1 + 2408);
    if ( v5 )
    {
      memset_0(v5, 0, (unsigned int)dword_140170E3C);
    }
    else
    {
      v6 = RaidAllocatePool(72LL, (unsigned int)dword_140170E3C, 1700028754LL, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 2408) = v6;
      if ( !v6 )
      {
LABEL_9:
        v1 = -1073741801;
        StorpUninitializePerUnitIoSizeDistribution(a1);
        return v1;
      }
    }
    *(_BYTE *)(a1 + 507) |= 0x10u;
  }
  return v1;
}
