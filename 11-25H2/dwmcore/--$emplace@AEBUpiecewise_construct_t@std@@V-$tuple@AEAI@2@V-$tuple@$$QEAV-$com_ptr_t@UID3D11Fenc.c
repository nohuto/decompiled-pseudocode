/*
 * XREFs of ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEAI@2@V?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@2@@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEAI@1@$$QEAV?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@1@@Z @ 0x1802C74C0
 * Callers:
 *     ?EnsureFlipAwayFenceForPlane@CDDisplaySwapChain@@UEAAJIPEAUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x1802C7D40 (-EnsureFlipAwayFenceForPlane@CDDisplaySwapChain@@UEAAJIPEAUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800C152C (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash.c)
 *     ??$?RI@?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@QEBA_KAEBI@Z @ 0x1801D0244 (--$-RI@-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@QEBA_KAEBI@Z.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@1@AEBI_K@Z @ 0x1802C71A0 (--$_Find_last@I@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$e.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802C78E8 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBIVCDDisplayFlipAwayFence@@@st.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1802C8F8C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IVCDDisplayFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@s.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,CDDisplayFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CDDisplayFlipAwayFence>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned int &>,std::tuple<wil::com_ptr_t<ID3D11Fence,wil::err_returncode_policy> &&,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>> &&,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayFence,wil::err_returncode_policy> &&>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int **a4,
        __int64 a5)
{
  _QWORD *v5; // rbp
  __int64 v9; // rdi
  __int64 *v10; // rdx
  __int64 *v11; // r9
  _QWORD *v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rdx
  float v20; // xmm0_4
  __int64 v21; // rcx
  float v22; // xmm1_4
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 *v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r9
  _QWORD *v31; // [rsp+20h] [rbp-38h] BYREF
  __int64 v32; // [rsp+28h] [rbp-30h]
  _OWORD v33[2]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a1 + 1;
  v31 = a1 + 1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  v32 = v9;
  v10 = *(__int64 **)(a5 + 16);
  v11 = *(__int64 **)a5;
  v12 = *(_QWORD **)(a5 + 8);
  v13 = **a4;
  v14 = CFlipAwayFence::s_nextUniqueId;
  *(_DWORD *)(v9 + 16) = v13;
  *(_QWORD *)(v9 + 24) = ++v14;
  CFlipAwayFence::s_nextUniqueId = v14;
  v15 = *v10;
  *v10 = 0LL;
  *(_QWORD *)(v9 + 32) = v15;
  *(_QWORD *)(v9 + 40) = *v12;
  *v12 = 0LL;
  v16 = *v11;
  *v11 = 0LL;
  *(_QWORD *)(v9 + 48) = v16;
  v17 = std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>::operator()<unsigned int>(
          v13,
          v9 + 16);
  std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Find_last<unsigned int>(
    a1,
    v33,
    (_DWORD *)(v9 + 16),
    v17);
  if ( !*((_QWORD *)&v33[0] + 1) )
  {
    v18 = a1[2];
    if ( v18 == 0x492492492492492LL )
      std::_Xlength_error("unordered_map/set too long");
    v19 = v18 + 1;
    if ( v19 < 0 )
      v20 = (float)(v19 & 1 | (unsigned int)((unsigned __int64)v19 >> 1))
          + (float)(v19 & 1 | (unsigned int)((unsigned __int64)v19 >> 1));
    else
      v20 = (float)(int)v19;
    v21 = a1[7];
    if ( v21 < 0 )
    {
      v23 = a1[7] & 1LL | (a1[7] >> 1);
      v22 = (float)(int)v23 + (float)(int)v23;
    }
    else
    {
      v22 = (float)(int)v21;
    }
    if ( (float)(v20 / v22) > *(float *)a1 )
    {
      v24 = std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v19);
      std::_Hash<std::_Umap_traits<unsigned int,CDDisplayFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CDDisplayFlipAwayFence>>,0>>::_Forced_rehash(
        a1,
        v24);
      v33[0] = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Find_last<unsigned int>(
                            a1,
                            v33,
                            (_DWORD *)(v9 + 16),
                            v17);
    }
    v25 = *(_QWORD *)&v33[0];
    v32 = 0LL;
    v26 = *(__int64 **)(*(_QWORD *)&v33[0] + 8LL);
    ++a1[2];
    *(_QWORD *)v9 = v25;
    *(_QWORD *)(v9 + 8) = v26;
    *v26 = v9;
    *(_QWORD *)(v25 + 8) = v9;
    v27 = a1[3];
    v28 = 2 * (v17 & a1[6]);
    v29 = *(_QWORD *)(v27 + 16 * (v17 & a1[6]));
    if ( v29 == *v5 )
    {
      *(_QWORD *)(v27 + 16 * (v17 & a1[6])) = v9;
LABEL_18:
      *(_QWORD *)(v27 + 8 * v28 + 8) = v9;
      goto LABEL_19;
    }
    if ( v29 == v25 )
    {
      *(_QWORD *)(v27 + 16 * (v17 & a1[6])) = v9;
    }
    else if ( *(__int64 **)(v27 + 16 * (v17 & a1[6]) + 8) == v26 )
    {
      goto LABEL_18;
    }
LABEL_19:
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 1;
    goto LABEL_20;
  }
  *(_QWORD *)a2 = *((_QWORD *)&v33[0] + 1);
  *(_BYTE *)(a2 + 8) = 0;
LABEL_20:
  std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,CDDisplayFlipAwayFence>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,CDDisplayFlipAwayFence>,void *>>>(&v31);
  return a2;
}
