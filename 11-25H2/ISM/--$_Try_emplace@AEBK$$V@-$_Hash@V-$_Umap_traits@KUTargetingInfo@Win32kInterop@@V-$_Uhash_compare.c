/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180030A50
 * Callers:
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x180030650 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV-$function@$$A6AXPEAVInputCo.c)
 * Callees:
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180021BE0 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800515EC (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x18009B2F4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::_Try_emplace<unsigned long const &,>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // r13
  __int64 v10; // r15
  _DWORD *v11; // rbx
  __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0x100000001B3LL
     * (a3[3] ^ (0x100000001B3LL
               * (a3[2] ^ (0x100000001B3LL * (a3[1] ^ (0x100000001B3LL * (*a3 ^ 0xCBF29CE484222325uLL)))))));
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(v7 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8);
  v9 = (_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 8);
  if ( v8 == v10 )
  {
LABEL_5:
    if ( *(_QWORD *)(a1 + 16) == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v23[0] = a1 + 8;
    v11 = operator new(0x28uLL);
    v23[1] = v11;
    v11[4] = *(_DWORD *)a3;
    *((_QWORD *)v11 + 3) = 0LL;
    *((_QWORD *)v11 + 4) = 0LL;
    v12 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v12 < 0 )
      v13 = (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1))
          + (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1));
    else
      v13 = (float)(int)v12;
    v14 = *(_QWORD *)(a1 + 56);
    if ( v14 < 0 )
    {
      v21 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v14 >> 1);
      v15 = (float)(int)v21 + (float)(int)v21;
    }
    else
    {
      v15 = (float)(int)v14;
    }
    if ( (float)(v13 / v15) > *(float *)a1 )
    {
      v22 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(
              a1,
              v12);
      std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
        a1,
        v22);
      v10 = *(_QWORD *)((__int64 (__fastcall *)(__int64, _QWORD *, _DWORD *, unsigned __int64))std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>)(
                         a1,
                         v23,
                         v11 + 4,
                         v6);
    }
    v16 = *(_QWORD **)(v10 + 8);
    ++*(_QWORD *)(a1 + 16);
    *(_QWORD *)v11 = v10;
    *((_QWORD *)v11 + 1) = v16;
    *v16 = v11;
    *(_QWORD *)(v10 + 8) = v11;
    v17 = *(_QWORD *)(a1 + 24);
    v18 = 2 * (v6 & *(_QWORD *)(a1 + 48));
    v19 = *(_QWORD *)(v17 + 16 * (v6 & *(_QWORD *)(a1 + 48)));
    if ( v19 == *v9 )
    {
      *(_QWORD *)(v17 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v11;
    }
    else
    {
      if ( v19 == v10 )
      {
        *(_QWORD *)(v17 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v11;
        goto LABEL_16;
      }
      if ( *(_QWORD **)(v17 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8) != v16 )
      {
LABEL_16:
        *(_QWORD *)a2 = v11;
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
    }
    *(_QWORD *)(v17 + 8 * v18 + 8) = v11;
    goto LABEL_16;
  }
  while ( *(_DWORD *)a3 != *(_DWORD *)(v8 + 16) )
  {
    if ( v8 == *(_QWORD *)(v7 + 16 * (v6 & *(_QWORD *)(a1 + 48))) )
    {
      v10 = v8;
      goto LABEL_5;
    }
    v8 = *(_QWORD *)(v8 + 8);
  }
  *(_QWORD *)a2 = v8;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
