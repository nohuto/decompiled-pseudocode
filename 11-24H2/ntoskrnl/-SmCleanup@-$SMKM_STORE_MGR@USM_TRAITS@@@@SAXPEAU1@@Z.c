/*
 * XREFs of ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140609FD4
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A8CB0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     SmPartitionCleanup @ 0x140797594 (SmPartitionCleanup.c)
 * Callees:
 *     SmFpCleanup @ 0x14037E384 (SmFpCleanup.c)
 *     KeDisableTimer2 @ 0x1403C01A8 (KeDisableTimer2.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140467EF4 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140609A60 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmCompressManagerCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x14060A0F0 (-SmCompressManagerCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     SmKmCleanup @ 0x14079993C (SmKmCleanup.c)
 */

char __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCleanup(union _SLIST_HEADER *a1)
{
  char *Alignment; // rdx

  SmKmCleanup();
  Alignment = (char *)a1[28].Alignment;
  if ( Alignment )
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNodeFree(
      (__int64)&a1[28],
      Alignment);
  SmFpCleanup((__int64)&a1[99]);
  SmFpCleanup((__int64)&a1[106].Region);
  SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(a1 + 78, 1);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerCleanup(&a1[79]);
  return KeDisableTimer2((__int64)&a1[114], 1, 1, 0LL);
}
