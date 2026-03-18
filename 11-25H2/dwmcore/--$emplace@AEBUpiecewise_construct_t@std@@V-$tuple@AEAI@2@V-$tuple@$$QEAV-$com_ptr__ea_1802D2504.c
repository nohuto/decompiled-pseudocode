/*
 * XREFs of ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEAI@2@V?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@2@@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCFlipAwayFence@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEAI@1@$$QEAV?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@1@@Z @ 0x1802D2504
 * Callers:
 *     ?EnsureFlipAwayFenceForPlane@CLegacySwapChain@@UEAAJIPEAUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x1802D2E70 (-EnsureFlipAwayFenceForPlane@CLegacySwapChain@@UEAAJIPEAUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800C152C (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash.c)
 *     ??$?RI@?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@QEBA_KAEBI@Z @ 0x1801D0244 (--$-RI@-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@QEBA_KAEBI@Z.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@1@AEBI_K@Z @ 0x1802C71A0 (--$_Find_last@I@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$e.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802D2BF4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1802D32E0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$e.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned int &>,std::tuple<wil::com_ptr_t<ID3D11Fence,wil::err_returncode_policy> &&,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>> &&>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int **a4,
        _QWORD **a5)
{
  _QWORD *v5; // rbp
  __int64 v9; // rdi
  _QWORD *v10; // r9
  __int64 *v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rdx
  float v18; // xmm0_4
  __int64 v19; // rcx
  float v20; // xmm1_4
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r9
  _QWORD *v29; // [rsp+20h] [rbp-38h] BYREF
  __int64 v30; // [rsp+28h] [rbp-30h]
  _OWORD v31[2]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a1 + 1;
  v29 = a1 + 1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  v30 = v9;
  v10 = *a5;
  v11 = a5[1];
  v12 = **a4;
  v13 = CFlipAwayFence::s_nextUniqueId + 1;
  *(_DWORD *)(v9 + 16) = v12;
  *(_QWORD *)(v9 + 24) = v13;
  CFlipAwayFence::s_nextUniqueId = v13;
  v14 = *v11;
  *v11 = 0LL;
  *(_QWORD *)(v9 + 32) = v14;
  *(_QWORD *)(v9 + 40) = *v10;
  *v10 = 0LL;
  v15 = std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>::operator()<unsigned int>(
          v12,
          v9 + 16);
  std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Find_last<unsigned int>(
    a1,
    v31,
    (_DWORD *)(v9 + 16),
    v15);
  if ( !*((_QWORD *)&v31[0] + 1) )
  {
    v16 = a1[2];
    if ( v16 == 0x555555555555555LL )
      std::_Xlength_error("unordered_map/set too long");
    v17 = v16 + 1;
    if ( v17 < 0 )
      v18 = (float)(v17 & 1 | (unsigned int)((unsigned __int64)v17 >> 1))
          + (float)(v17 & 1 | (unsigned int)((unsigned __int64)v17 >> 1));
    else
      v18 = (float)(int)v17;
    v19 = a1[7];
    if ( v19 < 0 )
    {
      v21 = a1[7] & 1LL | (a1[7] >> 1);
      v20 = (float)(int)v21 + (float)(int)v21;
    }
    else
    {
      v20 = (float)(int)v19;
    }
    if ( (float)(v18 / v20) > *(float *)a1 )
    {
      v22 = std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v17);
      std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Forced_rehash(
        a1,
        v22);
      v31[0] = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Find_last<unsigned int>(
                            a1,
                            v31,
                            (_DWORD *)(v9 + 16),
                            v15);
    }
    v23 = *(_QWORD *)&v31[0];
    v30 = 0LL;
    v24 = *(__int64 **)(*(_QWORD *)&v31[0] + 8LL);
    ++a1[2];
    *(_QWORD *)v9 = v23;
    *(_QWORD *)(v9 + 8) = v24;
    *v24 = v9;
    *(_QWORD *)(v23 + 8) = v9;
    v25 = a1[3];
    v26 = 2 * (v15 & a1[6]);
    v27 = *(_QWORD *)(v25 + 16 * (v15 & a1[6]));
    if ( v27 == *v5 )
    {
      *(_QWORD *)(v25 + 16 * (v15 & a1[6])) = v9;
LABEL_18:
      *(_QWORD *)(v25 + 8 * v26 + 8) = v9;
      goto LABEL_19;
    }
    if ( v27 == v23 )
    {
      *(_QWORD *)(v25 + 16 * (v15 & a1[6])) = v9;
    }
    else if ( *(__int64 **)(v25 + 16 * (v15 & a1[6]) + 8) == v24 )
    {
      goto LABEL_18;
    }
LABEL_19:
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 1;
    goto LABEL_20;
  }
  *(_QWORD *)a2 = *((_QWORD *)&v31[0] + 1);
  *(_BYTE *)(a2 + 8) = 0;
LABEL_20:
  std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,CFlipAwayFence>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,CFlipAwayFence>,void *>>>(&v29);
  return a2;
}
