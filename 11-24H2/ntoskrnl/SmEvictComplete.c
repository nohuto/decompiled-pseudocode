/*
 * XREFs of SmEvictComplete @ 0x14037CE14
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14027A7D0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     MmStoreEvictComplete @ 0x14037C798 (MmStoreEvictComplete.c)
 */

LONG __fastcall SmEvictComplete(__int64 a1, ULONG *a2, ULONG a3)
{
  return MmStoreEvictComplete(*(_QWORD *)(a1 + 2096), *a2, a3);
}
