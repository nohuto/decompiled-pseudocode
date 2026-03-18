/*
 * XREFs of SmKmStoreGet @ 0x140245714
 * Callers:
 *     ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x14024555C (-SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x140379F54 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     SmpKeyedStoreCreate @ 0x140A42B64 (SmpKeyedStoreCreate.c)
 *     SmStoreCompressionStop @ 0x140A4CBCC (SmStoreCompressionStop.c)
 *     SmSwapStore @ 0x140A4CF64 (SmSwapStore.c)
 *     SmProcessDeleteNotification @ 0x140A51570 (SmProcessDeleteNotification.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140A5FA44 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140A5FC18 (SmProcessSystemStoreTrimRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmKmStoreGet(__int64 a1, __int16 a2)
{
  unsigned int v2; // edx
  __int64 v3; // r8
  __int64 v4; // rax

  v2 = a2 & 0x3FF;
  v3 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)v2 >> 5));
  v4 = 0LL;
  if ( v3 )
    v4 = v3 + 40LL * (v2 & 0x1F);
  return *(_QWORD *)v4;
}
