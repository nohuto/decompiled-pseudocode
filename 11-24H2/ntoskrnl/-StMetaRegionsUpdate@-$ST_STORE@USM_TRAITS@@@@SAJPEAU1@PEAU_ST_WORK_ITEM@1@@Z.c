/*
 * XREFs of ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B1B48
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B1CA4 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?NpNodesPageOut@NP_CONTEXT@@SAJPEAUNP_CTX@1@@Z @ 0x1406082FC (-NpNodesPageOut@NP_CONTEXT@@SAJPEAUNP_CTX@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14060A93C (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StMetaRegionsUpdate(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r15
  int v4; // r12d
  _DWORD *v5; // rbp
  __int64 v6; // r8
  _DWORD *v8; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // ecx
  int v11; // esi
  int v12; // ebx
  _DWORD *v13; // r14
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1 + 604;
  v4 = 0;
  v5 = 0LL;
  LODWORD(v6) = 0;
  v8 = a1 + 1156;
  v9 = (-(__int64)((unsigned __int8)a1[798] != 0) & 0xFFFFFFFFFFFFFFF9uLL) + 8;
  do
  {
    v6 = (unsigned int)(*v8 + v6);
    v8 += 2;
    --v9;
  }
  while ( v9 );
  v10 = a1[818] - v6;
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
  {
    v11 = 2;
    if ( v10 >= 2 )
    {
LABEL_5:
      v12 = 1075380276;
      goto LABEL_15;
    }
    v13 = a1 + 20;
    v5 = v2;
  }
  else
  {
    if ( v10 < 8 )
      goto LABEL_5;
    v5 = a1 + 20;
    v13 = v2;
    v11 = a1[818] - v6;
    if ( v2[214] == v10 )
      v11 = v10 - 1;
  }
  v15 = 0;
  while ( v11 )
  {
    v12 = ST_STORE<SM_TRAITS>::StDmRegionRemove(v13, &v15);
    if ( v12 < 0 )
      goto LABEL_15;
    ++v4;
    v6 = *((_QWORD *)v5 + 106);
    *(_BYTE *)(((unsigned __int64)v15 >> 3) + v6) |= 1 << (v15 & 7);
    ++v5[214];
    --v11;
  }
  v12 = 0;
LABEL_15:
  ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(a1, a2, v6);
  if ( v5 == v2 && v4 && v12 != -1073741818 )
  {
    NP_CONTEXT::NpNodesPageOut((struct NP_CONTEXT::NP_CTX *)((unsigned __int64)(a1 + 24) & -(__int64)(a1 + 20 != 0LL)));
    NP_CONTEXT::NpNodesPageOut((struct NP_CONTEXT::NP_CTX *)((unsigned __int64)(a1 + 40) & -(__int64)(a1 + 36 != 0LL)));
  }
  return (unsigned int)v12;
}
