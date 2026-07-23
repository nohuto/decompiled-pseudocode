/*
 * XREFs of ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1404F76EC
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140378D1C (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmEtwEnabled @ 0x140380D60 (SmEtwEnabled.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140380DD0 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     SmEtwLogStoreStateChange @ 0x14060BC00 (SmEtwLogStoreStateChange.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StEmptyStore(__int64 a1, unsigned int a2)
{
  ULONGLONG *v4; // rax
  __int64 v5; // rdx

  v4 = SmEtwEnabled(0);
  if ( v4 )
    SmEtwLogStoreStateChange(v4, v5, a1, a2);
  if ( *(_DWORD *)(a1 + 6528) )
  {
    *(_DWORD *)(a1 + 6528) = 0;
    ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 2376), 6, 0xFFFFFFFF, 0xFFFFFFFF);
  }
  ST_STORE<SM_TRAITS>::StDmCleanup(a1 + 80, 1u);
  if ( a2 )
    ST_STORE<SM_TRAITS>::StDmCleanup(a1 + 2416, 1u);
}
