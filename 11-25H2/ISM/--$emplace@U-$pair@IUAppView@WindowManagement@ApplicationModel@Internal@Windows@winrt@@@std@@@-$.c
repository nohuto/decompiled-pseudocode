/*
 * XREFs of ??$emplace@U?$pair@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@1@@Z @ 0x180026CA8
 * Callers:
 *     ?OnAppViewAdded@ViewHierarchyWithWindowManager@@AEAAJUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@34567@@Z @ 0x180027170 (-OnAppViewAdded@ViewHierarchyWithWindowManager@@AEAAJUAppViewWatcher@WindowManagement@Applicatio.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x180027114 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Int.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18007390C (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x18009B2F4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::emplace<std::pair<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 *v9; // rsi
  __int64 *v10; // rax
  __int64 **v12; // r15
  _DWORD *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 *v23; // [rsp+20h] [rbp-28h]

  v6 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
         a1,
         a3);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(__int64 **)(v7 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8);
  v9 = *(__int64 **)(a1 + 8);
  if ( v8 == v9 )
  {
    v12 = (__int64 **)(a1 + 8);
  }
  else
  {
    v10 = *(__int64 **)(v7 + 16 * (v6 & *(_QWORD *)(a1 + 48)));
    while ( 1 )
    {
      if ( *(_DWORD *)a3 == *((_DWORD *)v8 + 4) )
      {
        v9 = (__int64 *)*v8;
        goto LABEL_5;
      }
      if ( v8 == v10 )
        break;
      v8 = (__int64 *)v8[1];
    }
    v9 = v8;
    v8 = 0LL;
LABEL_5:
    if ( v8 )
    {
      *(_QWORD *)a2 = v8;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
    v12 = (__int64 **)(a1 + 8);
  }
  if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v13[4] = *(_DWORD *)a3;
  v14 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a3 + 8) = 0LL;
  *((_QWORD *)v13 + 3) = v14;
  v15 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v15 < 0 )
    v16 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1))
        + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
  else
    v16 = (float)(int)v15;
  v17 = *(_QWORD *)(a1 + 56);
  if ( v17 < 0 )
  {
    v22 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v17 >> 1);
    v18 = (float)(int)v22 + (float)(int)v22;
  }
  else
  {
    v18 = (float)(int)v17;
  }
  if ( (float)(v16 / v18) > *(float *)a1 )
  {
    v19 = std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
      a1,
      v19);
    v20 = *(_QWORD *)(a1 + 24);
    v21 = *(__int64 **)(v20 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8);
    if ( v21 == *v12 )
    {
      v23 = *v12;
    }
    else
    {
      while ( 1 )
      {
        if ( v13[4] == *((_DWORD *)v21 + 4) )
        {
          v23 = (__int64 *)*v21;
          goto LABEL_21;
        }
        if ( v21 == *(__int64 **)(v20 + 16 * (v6 & *(_QWORD *)(a1 + 48))) )
          break;
        v21 = (__int64 *)v21[1];
      }
      v23 = v21;
    }
LABEL_21:
    v9 = v23;
  }
  *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Insert_new_node_before(
                    a1,
                    v6,
                    v9,
                    v13);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
