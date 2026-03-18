/*
 * XREFs of ?SmCompressCtxUpdateThreadTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_ETHREAD@@@Z @ 0x14044A2C8
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140389780 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeSetUserAffinityThread @ 0x140209564 (KeSetUserAffinityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403B422C (KeSetIdealProcessorThreadEx.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x14044A328 (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxUpdateThreadTopology(
        __int64 a1,
        struct _KTHREAD *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  unsigned int IdealProcessor; // eax

  v3 = *(_QWORD *)(a1 + 8);
  KeSetUserAffinityThread((__int64)a2, v3 + 48, a3);
  IdealProcessor = SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerGetIdealProcessor(v3, *(unsigned int *)(a1 + 168), 1LL);
  return KeSetIdealProcessorThreadEx(a2, IdealProcessor, 0LL);
}
