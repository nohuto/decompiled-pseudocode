/*
 * XREFs of ??$_Try_emplace@AEBQEAVCSceneNode@@$$V@?$map@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@std@@_N@1@AEBQEAVCSceneNode@@@Z @ 0x1802B66E0
 * Callers:
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x1802B6930 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180197D2C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCSceneMeshRendererComponent@@V-$com_.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x180211E08 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18023736C (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1802591E0 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<CSceneNode *,void *>::_Try_emplace<CSceneNode * const &,>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  _QWORD *v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::_Find_lower_bound<unsigned __int64>(
    a1,
    &v13,
    a3);
  if ( *(_BYTE *)(v14 + 25) || *v6 < *(_QWORD *)(v14 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v7 = *a1;
    v12 = (unsigned __int64)a1;
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
    v9 = *a3;
    v10 = v8;
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_QWORD *)(v8 + 32) = v9;
    *(_QWORD *)v8 = v7;
    *(_QWORD *)(v8 + 8) = v7;
    *(_QWORD *)(v8 + 16) = v7;
    *(_WORD *)(v8 + 24) = 0;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,CCursorState *>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,CCursorState *>,void *>>>((__int64)&v12);
    v12 = v13;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>::_Insert_node(
                      a1,
                      (__int64)&v12,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
