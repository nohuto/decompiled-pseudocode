/*
 * XREFs of StorInitOutstandingRequestBitmap @ 0x140127530
 * Callers:
 *     NvmeControllerInitializeAdminQueue @ 0x1400F02F4 (NvmeControllerInitializeAdminQueue.c)
 *     NvmeControllerIoQueuesInitialize @ 0x1400F159C (NvmeControllerIoQueuesInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall StorInitOutstandingRequestBitmap(__int64 a1)
{
  unsigned int v1; // esi
  ULONG RecommendedSharedDataAlignment; // eax
  int v5; // ecx
  ULONG v6; // ebx
  ULONG v7; // eax
  __int64 Pool; // rax

  v1 = *(_DWORD *)(a1 + 124);
  if ( !v1 )
    return 3221225485LL;
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  v5 = (v1 >> 3) + 1;
  if ( (v1 & 7) == 0 )
    v5 = v1 >> 3;
  v6 = (RecommendedSharedDataAlignment + v5 - 1) / KeGetRecommendedSharedDataAlignment();
  v7 = KeGetRecommendedSharedDataAlignment();
  Pool = RaidAllocatePool(72LL, v6 * v7, 1380082002LL, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 128LL) + 8LL));
  *(_QWORD *)(a1 + 80) = Pool;
  return Pool == 0 ? 0xC000009A : 0;
}
