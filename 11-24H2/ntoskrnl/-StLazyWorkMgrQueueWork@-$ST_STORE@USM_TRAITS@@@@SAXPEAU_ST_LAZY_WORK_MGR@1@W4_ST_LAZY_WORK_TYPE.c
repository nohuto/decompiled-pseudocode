/*
 * XREFs of ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140380DD0
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402F6914 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037F670 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140381398 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140381820 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140477D30 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1404F76EC (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r11
  unsigned __int64 v6; // r10
  __int64 *v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 *v12; // r9
  unsigned __int64 *v13; // rax
  unsigned __int64 i; // rdi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx

  v4 = a3;
  v6 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v7 = (__int64 *)(a1 + 24LL * a2);
  v8 = -1LL;
  if ( a4 == -1 )
  {
    v9 = -1LL;
    v10 = -1LL;
  }
  else
  {
    v7[2] = v6;
    v9 = v6 + 10000LL * a4;
    v10 = 10000 * v4;
  }
  *v7 = v10;
  v7[1] = v9;
  result = *(unsigned int *)(a1 + 224);
  if ( (result & 1) == 0 )
  {
    if ( !v6 )
      v6 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    v12 = (unsigned __int64 *)(a1 + 168);
    v13 = (unsigned __int64 *)a1;
    for ( i = -1LL; v13 < v12; v13 += 3 )
    {
      v15 = v13[1];
      v16 = v8;
      if ( v15 != -1LL )
      {
        v21 = v13[2];
        if ( v21 < v6 - *(_QWORD *)(a1 + 184) )
          v21 = v6 - *(_QWORD *)(a1 + 184);
        v8 = v21 + *v13;
        if ( v8 >= v16 )
          v8 = v16;
        if ( v15 < i )
          i = v13[1];
      }
    }
    v17 = v6;
    v18 = v6;
    if ( v8 >= v6 )
      v17 = v8;
    if ( i >= v6 )
      v18 = i;
    *v12 = v18;
    if ( v18 == -1LL )
    {
      v20 = 0LL;
    }
    else
    {
      v19 = v18;
      v20 = v18 - v6;
      if ( v19 >= v17 )
        v20 = v17 - v6;
      *(_QWORD *)(a1 + 176) = v20;
      if ( v20 )
        goto LABEL_19;
      v20 = 1LL;
    }
    *(_QWORD *)(a1 + 176) = v20;
LABEL_19:
    result = *(_QWORD *)(a1 - 6512);
    *(_QWORD *)(result + 7448) = -v20;
  }
  return result;
}
