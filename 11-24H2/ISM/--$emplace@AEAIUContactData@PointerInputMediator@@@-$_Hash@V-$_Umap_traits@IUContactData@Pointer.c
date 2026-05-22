/*
 * XREFs of ??$emplace@AEAIUContactData@PointerInputMediator@@@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUContactData@PointerInputMediator@@@Z @ 0x1800165D4
 * Callers:
 *     ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180015654 (-Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18004D8FC (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180081624 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarch.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x18009B4A4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::emplace<unsigned int &,PointerInputMediator::ContactData>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // r8
  __int64 *v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rdx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  __int64 *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD v26[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = 0LL;
  v9 = 0xCBF29CE484222325uLL;
  do
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v8++) ^ (unsigned __int64)v9);
  while ( v8 < 4 );
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(__int64 **)(v10 + 16 * (v9 & *(_QWORD *)(a1 + 48)) + 8);
  v12 = a1 + 8;
  v13 = *(__int64 **)(a1 + 8);
  if ( v11 != v13 )
  {
    while ( 1 )
    {
      if ( *a3 == *((_DWORD *)v11 + 4) )
      {
        v13 = (__int64 *)*v11;
        goto LABEL_6;
      }
      if ( v11 == *(__int64 **)(v10 + 16 * (v9 & *(_QWORD *)(a1 + 48))) )
        break;
      v11 = (__int64 *)v11[1];
    }
    v13 = v11;
    v11 = 0LL;
LABEL_6:
    if ( v11 )
    {
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
    v12 = a1 + 8;
  }
  if ( *(_QWORD *)(a1 + 16) == 0x492492492492492LL )
    std::_Xlength_error("unordered_map/set too long");
  v26[0] = v12;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(56LL);
  v26[1] = v14;
  *(_DWORD *)(v14 + 16) = *a3;
  *(_BYTE *)(v14 + 24) = *(_BYTE *)a4;
  *(_BYTE *)(v14 + 25) = *(_BYTE *)(a4 + 1);
  *(_QWORD *)(v14 + 32) = *(_QWORD *)(a4 + 8);
  *(_QWORD *)(v14 + 40) = *(_QWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_BYTE *)(v14 + 48) = *(_BYTE *)(a4 + 24);
  *(_BYTE *)(v14 + 49) = *(_BYTE *)(a4 + 25);
  v15 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v15 < 0 )
    v16 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1))
        + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
  else
    v16 = (float)(int)v15;
  v17 = *(_QWORD *)(a1 + 56);
  if ( v17 < 0 )
  {
    v24 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v17 >> 1);
    v18 = (float)(int)v24 + (float)(int)v24;
  }
  else
  {
    v18 = (float)(int)v17;
  }
  if ( (float)(v16 / v18) > *(float *)a1 )
  {
    v25 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
      a1,
      v25);
    v13 = *(__int64 **)((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64))std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>)(
                         a1,
                         v26,
                         v14 + 16,
                         v9);
  }
  v19 = (__int64 *)v13[1];
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)v14 = v13;
  *(_QWORD *)(v14 + 8) = v19;
  *v19 = v14;
  v13[1] = v14;
  v20 = *(_QWORD *)(a1 + 24);
  v21 = 2 * (v9 & *(_QWORD *)(a1 + 48));
  v22 = *(__int64 **)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48)));
  if ( v22 == *(__int64 **)(a1 + 8) )
  {
    *(_QWORD *)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48))) = v14;
LABEL_23:
    *(_QWORD *)(v20 + 8 * v21 + 8) = v14;
    goto LABEL_18;
  }
  if ( v22 == v13 )
  {
    *(_QWORD *)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48))) = v14;
    goto LABEL_18;
  }
  if ( *(__int64 **)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48)) + 8) == v19 )
    goto LABEL_23;
LABEL_18:
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
