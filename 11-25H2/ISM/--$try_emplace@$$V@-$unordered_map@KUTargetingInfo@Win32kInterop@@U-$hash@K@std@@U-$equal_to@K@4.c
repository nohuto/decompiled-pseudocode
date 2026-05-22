/*
 * XREFs of ??$try_emplace@$$V@?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18003D560
 * Callers:
 *     ?DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18003C6E0 (-DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResul.c)
 * Callees:
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180021BE0 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800515EC (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x18009B2F4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>::try_emplace<>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // rbx
  _QWORD *v10; // r15
  __int64 v11; // rdx
  float v12; // xmm0_4
  __int64 v13; // rcx
  float v14; // xmm1_4
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // rdx
  char v19; // al
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0x100000001B3LL
     * (a3[3] ^ (0x100000001B3LL
               * (a3[2] ^ (0x100000001B3LL * (a3[1] ^ (0x100000001B3LL * (*a3 ^ 0xCBF29CE484222325uLL)))))));
  v7 = 2 * (v6 & *(_QWORD *)(a1 + 48));
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_DWORD **)(v8 + 8 * v7 + 8);
  v10 = *(_QWORD **)(a1 + 8);
  if ( v9 == (_DWORD *)v10 )
  {
LABEL_5:
    if ( *(_QWORD *)(a1 + 16) == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v23[0] = a1 + 8;
    v9 = operator new(0x28uLL);
    v23[1] = v9;
    v9[4] = *(_DWORD *)a3;
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v9 + 4) = 0LL;
    v11 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v11 < 0 )
      v12 = (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
          + (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1));
    else
      v12 = (float)(int)v11;
    v13 = *(_QWORD *)(a1 + 56);
    if ( v13 < 0 )
    {
      v21 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v13 >> 1);
      v14 = (float)(int)v21 + (float)(int)v21;
    }
    else
    {
      v14 = (float)(int)v13;
    }
    if ( (float)(v12 / v14) > *(float *)a1 )
    {
      v22 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(
              a1,
              v11);
      std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
        a1,
        v22);
      v10 = *(_QWORD **)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                          a1,
                          v23,
                          v9 + 4,
                          v6);
    }
    v15 = (_QWORD *)v10[1];
    ++*(_QWORD *)(a1 + 16);
    *(_QWORD *)v9 = v10;
    *((_QWORD *)v9 + 1) = v15;
    *v15 = v9;
    v10[1] = v9;
    v16 = *(_QWORD *)(a1 + 24);
    v17 = 2 * (*(_QWORD *)(a1 + 48) & v6);
    v18 = *(_QWORD **)(v16 + 8 * v17);
    if ( v18 == *(_QWORD **)(a1 + 8) )
    {
      *(_QWORD *)(v16 + 8 * v17) = v9;
    }
    else
    {
      if ( v18 == v10 )
      {
        *(_QWORD *)(v16 + 8 * v17) = v9;
        goto LABEL_16;
      }
      if ( *(_QWORD **)(v16 + 8 * v17 + 8) != v15 )
      {
LABEL_16:
        v19 = 1;
        goto LABEL_17;
      }
    }
    *(_QWORD *)(v16 + 8 * v17 + 8) = v9;
    goto LABEL_16;
  }
  while ( *(_DWORD *)a3 != v9[4] )
  {
    if ( v9 == *(_DWORD **)(v8 + 8 * v7) )
    {
      v10 = v9;
      goto LABEL_5;
    }
    v9 = (_DWORD *)*((_QWORD *)v9 + 1);
  }
  v19 = 0;
LABEL_17:
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = v19;
  return a2;
}
