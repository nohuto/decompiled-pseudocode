/*
 * XREFs of ??$_Try_emplace@PEAVVirtualTouchpadControllerProxy@@$$V@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@PEAX@std@@_N@1@$$QEAPEAVVirtualTouchpadControllerProxy@@@Z @ 0x180132724
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180132C34 (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18003DBA0 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180079CC0 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$com_ptr_t@UIHeadEventHandl.c)
 *     ??$_Find_last@PEAVVirtualTouchpadControllerProxy@@@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@PEAX@std@@@1@AEBQEAVVirtualTouchpadControllerProxy@@_K@Z @ 0x1801326C0 (--$_Find_last@PEAVVirtualTouchpadControllerProxy@@@-$_Hash@V-$_Umap_traits@PEAVVirtualTouchpadCo.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18013582C (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801358D8 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V-$_Uhash_.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x180135A7C (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::_Try_emplace<VirtualTouchpadControllerProxy *,>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 appended; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rbp
  unsigned __int64 v8; // rdx
  float v9; // xmm0_4
  __int64 v10; // rcx
  float v11; // xmm1_4
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes(a1, a3, 8uLL);
  std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::_Find_last<VirtualTouchpadControllerProxy *>(
    v6,
    &v17,
    a3,
    appended);
  if ( *((_QWORD *)&v17 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v17 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( qword_180246EF0 == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v16[0] = &qword_180246EE8;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v16[1] = v7;
    v7[2] = *(_QWORD *)a3;
    *((_DWORD *)v7 + 6) = 0;
    v8 = qword_180246EF0 + 1;
    if ( qword_180246EF0 + 1 < 0 )
      v9 = (float)(int)(v8 & 1 | (v8 >> 1)) + (float)(int)(v8 & 1 | (v8 >> 1));
    else
      v9 = (float)(int)v8;
    v10 = qword_180246F18;
    if ( qword_180246F18 < 0 )
    {
      v10 = qword_180246F18 & 1;
      v11 = (float)(int)(v10 | ((unsigned __int64)qword_180246F18 >> 1))
          + (float)(int)(v10 | ((unsigned __int64)qword_180246F18 >> 1));
    }
    else
    {
      v11 = (float)(int)qword_180246F18;
    }
    if ( (float)(v9 / v11) > *(float *)&VirtualTouchpadControllerProxy::s_configuredControllers )
    {
      v12 = std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::_Desired_grow_bucket_count(
              v10,
              v8);
      std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::_Forced_rehash(
        v13,
        v12);
      v17 = *(_OWORD *)std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::_Find_last<VirtualTouchpadControllerProxy *>(
                         v14,
                         &v17,
                         v7 + 2,
                         appended);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::_Insert_new_node_before(
                      v10,
                      appended,
                      v17,
                      v7,
                      v16[0],
                      0LL);
    *(_BYTE *)(a2 + 8) = 1;
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>,void *>>>((__int64)v16);
  }
  return a2;
}
