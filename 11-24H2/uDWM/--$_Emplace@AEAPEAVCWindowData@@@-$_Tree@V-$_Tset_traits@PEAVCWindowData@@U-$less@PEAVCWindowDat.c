/*
 * XREFs of ??$_Emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800843E4
 * Callers:
 *     ??$emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800843B0 (--$emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData.c)
 * Callees:
 *     ??$_Find_lower_bound@PEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@AEBQEAVCWindowData@@@Z @ 0x1800844F0 (--$_Find_lower_bound@PEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWin.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180096728 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$?0AEAPEAVCWindowData@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@1@AEAPEAVCWindowData@@@Z @ 0x1800BC8F8 (--$-0AEAPEAVCWindowData@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@PEAVCWindowData@@PEAX@std.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800BCB74 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@std@@QEAA.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAPEAU?$_Tree_node@PEAVCWindowData@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@@2@QEAU32@@Z @ 0x1800BD9C0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAPEAU-$_Tree_nod.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::_Emplace<CWindowData * &>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 lower; // rax
  const char *v5; // rcx
  _QWORD *v6; // r8
  __int128 v7; // xmm6
  __int64 v8; // rax
  __int64 v9; // rbx
  _BYTE v11[16]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]

  lower = std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::_Find_lower_bound<CWindowData *>(
            a1,
            &v12);
  v7 = *(_OWORD *)lower;
  v13 = *(_QWORD *)(lower + 16);
  if ( *(_BYTE *)(v13 + 25) || *v6 < *(_QWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Dwm_Xlength_error(v5);
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<CWindowData *,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<CWindowData *,void *>>>(
           v11,
           a1,
           *a1,
           v6);
    v9 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v8 + 8) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<CWindowData *,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<CWindowData *,void *>>>(v11);
    v12 = v7;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Insert_node(a1, &v12, v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
