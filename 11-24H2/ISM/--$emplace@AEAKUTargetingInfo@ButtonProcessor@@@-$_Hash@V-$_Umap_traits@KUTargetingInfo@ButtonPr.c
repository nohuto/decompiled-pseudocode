/*
 * XREFs of ??$emplace@AEAKUTargetingInfo@ButtonProcessor@@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUTargetingInfo@ButtonProcessor@@@Z @ 0x1800337F8
 * Callers:
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180035150 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001C490 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKUTargetingInfo@ButtonProcess.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800221B0 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x180023C14 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V-.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18004D8FC (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x18009B4A4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::emplace<unsigned long &,ButtonProcessor::TargetingInfo>(
        float *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // rax
  _DWORD *v13; // r15
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v22; // [rsp+20h] [rbp-48h] BYREF
  _DWORD *v23; // [rsp+28h] [rbp-40h]
  _BYTE v24[16]; // [rsp+30h] [rbp-38h] BYREF

  v8 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
         (__int64)a1,
         (__int64)a3);
  v9 = *((_QWORD *)a1 + 3);
  v10 = *(_QWORD *)(v9 + 16 * (v8 & *((_QWORD *)a1 + 6)) + 8);
  v11 = *((_QWORD *)a1 + 1);
  if ( v10 == v11 )
    goto LABEL_10;
  v12 = *(_QWORD *)(v9 + 16 * (v8 & *((_QWORD *)a1 + 6)));
  while ( *a3 != *(_DWORD *)(v10 + 16) )
  {
    if ( v10 == v12 )
    {
      v11 = v10;
      v10 = 0LL;
      goto LABEL_8;
    }
    v10 = *(_QWORD *)(v10 + 8);
  }
  v11 = *(_QWORD *)v10;
LABEL_8:
  if ( !v10 )
  {
LABEL_10:
    if ( *((_QWORD *)a1 + 2) == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v22 = a1 + 2;
    v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    v23 = v13;
    v13[4] = *a3;
    *((_QWORD *)v13 + 3) = 0LL;
    if ( v13 + 6 != (_DWORD *)a4 )
    {
      *((_QWORD *)v13 + 3) = *a4;
      *a4 = 0LL;
    }
    v14 = a4 + 1;
    *((_QWORD *)v13 + 4) = 0LL;
    if ( v13 + 8 != (_DWORD *)(a4 + 1) )
    {
      *((_QWORD *)v13 + 4) = *v14;
      *v14 = 0LL;
    }
    v15 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v15 < 0 )
      v16 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1))
          + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
    else
      v16 = (float)(int)v15;
    v17 = *((_QWORD *)a1 + 7);
    if ( v17 < 0 )
    {
      v19 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v17 >> 1);
      v18 = (float)(int)v19 + (float)(int)v19;
    }
    else
    {
      v18 = (float)(int)v17;
    }
    if ( (float)(v16 / v18) > *a1 )
    {
      v20 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v15);
      std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
        a1,
        v20);
      v11 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                         a1,
                         v24,
                         v13 + 4,
                         v8,
                         v22,
                         v23);
    }
    v23 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::_Insert_new_node_before(
                      a1,
                      v8,
                      v11,
                      v13);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>,void *>>>((__int64)&v22);
  }
  else
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
