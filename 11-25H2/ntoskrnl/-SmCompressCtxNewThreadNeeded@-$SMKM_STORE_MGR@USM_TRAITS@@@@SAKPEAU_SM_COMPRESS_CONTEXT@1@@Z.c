/*
 * XREFs of ?SmCompressCtxNewThreadNeeded@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1403A1100
 * Callers:
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140393600 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403A0C80 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxNewThreadNeeded(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 8) + 44LL) - *(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) < 0
      && **(_QWORD **)(a1 + 24) > (unsigned __int64)(unsigned int)(32 * *(_DWORD *)(a1 + 156));
}
