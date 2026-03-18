/*
 * XREFs of ??$_Emplace@AEBI@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@IPEAX@std@@_N@1@AEBI@Z @ 0x1801F2404
 * Callers:
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801F2234 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180152D28 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCSceneMeshRendererComponent@@V-$com_.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@IPEAX@std@@@1@AEBI@Z @ 0x1801F24CC (--$_Find_lower_bound@I@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802223C0 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@QEAVCInteractionTracker@@W4Interact.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18024DD10 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBI@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@AEBI@Z @ 0x18028C6E0 (--$-0AEBI@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@std@@QEAA@AEAV-$allocat.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Emplace<unsigned int const &>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 lower; // rax
  _DWORD *v5; // r8
  __int128 v6; // xmm6
  __int64 v7; // rax
  __int64 v8; // rbx
  _BYTE v10[16]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]

  lower = std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Find_lower_bound<unsigned int>(
            a1,
            &v11);
  v6 = *(_OWORD *)lower;
  v12 = *(_QWORD *)(lower + 16);
  if ( *(_BYTE *)(v12 + 25) || *v5 < *(_DWORD *)(v12 + 28) )
  {
    if ( a1[1] == 0x7FFFFFFFFFFFFFFLL )
      std::_Throw_tree_length_error();
    v7 = std::_Tree_temp_node<std::allocator<std::_Tree_node<unsigned int,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<unsigned int,void *>>>(
           v10,
           a1,
           *a1,
           v5);
    v8 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v7 + 8) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>,void *>>>(v10);
    v11 = v6;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>::_Insert_node(
                      a1,
                      (__int64)&v11,
                      v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
