/*
 * XREFs of ?SmCompressCtxUpdateThreadTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_ETHREAD@@@Z @ 0x140376550
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403830C0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeSetUserAffinityThread @ 0x140330B44 (KeSetUserAffinityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x140370A64 (KeSetIdealProcessorThreadEx.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x1403765B0 (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxUpdateThreadTopology(__int64 a1, struct _KTHREAD *a2)
{
  __int64 v2; // rbx
  unsigned int IdealProcessor; // eax

  v2 = *(_QWORD *)(a1 + 8);
  KeSetUserAffinityThread((__int64)a2, v2 + 48);
  IdealProcessor = SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerGetIdealProcessor(v2, *(unsigned int *)(a1 + 168), 1LL);
  return KeSetIdealProcessorThreadEx(a2, IdealProcessor, 0LL);
}
