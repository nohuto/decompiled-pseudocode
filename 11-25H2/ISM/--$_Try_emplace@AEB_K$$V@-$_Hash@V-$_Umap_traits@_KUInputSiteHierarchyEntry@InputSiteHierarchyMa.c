/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18001640C
 * Callers:
 *     ?GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@_K@Z @ 0x1800173E0 (-GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA-AV-$vector@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001C760 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x18006144C (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006AF18 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180081584 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarch.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rbp
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  do
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v6++) ^ (unsigned __int64)v7);
  while ( v6 < 8 );
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD **)(v8 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8);
  v10 = *(_QWORD **)(a1 + 8);
  if ( v9 == v10 )
    goto LABEL_11;
  while ( 1 )
  {
    if ( *a3 == v9[2] )
    {
      v10 = (_QWORD *)*v9;
      goto LABEL_8;
    }
    if ( v9 == *(_QWORD **)(v8 + 16 * (v7 & *(_QWORD *)(a1 + 48))) )
      break;
    v9 = (_QWORD *)v9[1];
  }
  v10 = v9;
  v9 = 0LL;
LABEL_8:
  if ( !v9 )
  {
LABEL_11:
    if ( *(_QWORD *)(a1 + 16) == 0x3FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v23[0] = a1 + 8;
    v12 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(64LL);
    v23[1] = v12;
    v12[2] = *a3;
    v12[4] = 0LL;
    v12[3] = 0LL;
    v12[5] = 0LL;
    v12[6] = 0LL;
    v12[7] = 0LL;
    v13 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v13 < 0 )
      v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
          + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
    else
      v14 = (float)(int)v13;
    v15 = *(_QWORD *)(a1 + 56);
    if ( v15 < 0 )
    {
      v21 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v15 >> 1);
      v16 = (float)(int)v21 + (float)(int)v21;
    }
    else
    {
      v16 = (float)(int)v15;
    }
    if ( (float)(v14 / v16) > *(float *)a1 )
    {
      v22 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Forced_rehash(
        a1,
        v22);
      v10 = *(_QWORD **)((__int64 (__fastcall *)(__int64, _QWORD *, _QWORD *, __int64))std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Find_last<unsigned __int64>)(
                          a1,
                          v23,
                          v12 + 2,
                          v7);
    }
    v17 = (_QWORD *)v10[1];
    ++*(_QWORD *)(a1 + 16);
    *v12 = v10;
    v12[1] = v17;
    *v17 = v12;
    v10[1] = v12;
    v18 = *(_QWORD *)(a1 + 24);
    v19 = 2 * (v7 & *(_QWORD *)(a1 + 48));
    v20 = *(_QWORD **)(v18 + 16 * (v7 & *(_QWORD *)(a1 + 48)));
    if ( v20 == *(_QWORD **)(a1 + 8) )
    {
      *(_QWORD *)(v18 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v12;
    }
    else
    {
      if ( v20 == v10 )
      {
        *(_QWORD *)(v18 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v12;
        goto LABEL_22;
      }
      if ( *(_QWORD **)(v18 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8) != v17 )
      {
LABEL_22:
        *(_QWORD *)a2 = v12;
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
    }
    *(_QWORD *)(v18 + 8 * v19 + 8) = v12;
    goto LABEL_22;
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
