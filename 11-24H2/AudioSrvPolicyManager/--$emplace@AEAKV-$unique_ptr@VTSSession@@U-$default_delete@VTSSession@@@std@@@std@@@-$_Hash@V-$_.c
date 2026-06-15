/*
 * XREFs of ??$emplace@AEAKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@1@@Z @ 0x18003CC00
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180004DE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18000D8B0 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@.c)
 *     ??$?RK@?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@QEBA_KAEBK@Z @ 0x1800151CC (--$-RK@-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@QEBA_KAEBK@Z.c)
 *     ??$construct@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@AEAKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@2@@?$_Default_allocator_traits@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@QEAU?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@1@AEAK$$QEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@1@@Z @ 0x18003CBD4 (--$construct@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@s.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18003D3B0 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180040CCC (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180040E04 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x180040F9C (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::emplace<unsigned long &,std::unique_ptr<TSSession>>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  __int64 v7; // rbp
  _DWORD *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD v20[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>::operator()<unsigned long>(
         a1,
         (__int64)a3);
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Find_last<unsigned long>(
    v9,
    v21,
    v8,
    v7);
  if ( v21[1] )
  {
    *(_QWORD *)a2 = v21[1];
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( qword_180064AB0 == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v20[0] = &qword_180064AA8;
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v20[1] = v10;
    std::_Default_allocator_traits<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>::construct<std::pair<unsigned long const,std::unique_ptr<TSSession>>,unsigned long &,std::unique_ptr<TSSession>>(
      v11,
      (__int64)(v10 + 2),
      a3,
      a4);
    v12 = qword_180064AB0 + 1;
    if ( qword_180064AB0 + 1 < 0 )
      v13 = (float)(int)(v12 & 1 | (v12 >> 1)) + (float)(int)(v12 & 1 | (v12 >> 1));
    else
      v13 = (float)(int)v12;
    v14 = qword_180064AD8;
    if ( qword_180064AD8 < 0 )
    {
      v14 = qword_180064AD8 & 1;
      v15 = (float)(int)(v14 | ((unsigned __int64)qword_180064AD8 >> 1))
          + (float)(int)(v14 | ((unsigned __int64)qword_180064AD8 >> 1));
    }
    else
    {
      v15 = (float)(int)qword_180064AD8;
    }
    if ( (float)(v13 / v15) > *(float *)&dword_180064AA0 )
    {
      v16 = std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Desired_grow_bucket_count(
              v14,
              v12);
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Forced_rehash(
        v17,
        v16);
      *(_OWORD *)v21 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Find_last<unsigned long>(
                                    v18,
                                    v21,
                                    (_DWORD *)v10 + 4,
                                    v7);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Insert_new_node_before(
                      v14,
                      v7,
                      v21[0],
                      v10,
                      v20[0],
                      0LL);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>(v20);
  }
  return a2;
}
