/*
 * XREFs of SmKmStoreGet @ 0x14020DEF4
 * Callers:
 *     ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x14020DD3C (-SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x1402E6EC4 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     SmpKeyedStoreCreate @ 0x140A383F4 (SmpKeyedStoreCreate.c)
 *     SmStoreCompressionStop @ 0x140A4375C (SmStoreCompressionStop.c)
 *     SmSwapStore @ 0x140A43AF4 (SmSwapStore.c)
 *     SmProcessDeleteNotification @ 0x140A4863C (SmProcessDeleteNotification.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140A57F94 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140A58168 (SmProcessSystemStoreTrimRequest.c)
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
