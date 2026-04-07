/*
 * XREFs of ?find@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@2@AEBQEAVCWindowData@@@Z @ 0x1800844AC
 * Callers:
 *     ?EnsureMinimizedWindowListUpdated@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@_N@Z @ 0x180061E98 (-EnsureMinimizedWindowListUpdated@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@PEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@AEBQEAVCWindowData@@@Z @ 0x1800844F0 (--$_Find_lower_bound@PEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWin.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::find(
        __int64 *a1)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r11
  __int64 v4; // r10
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::_Find_lower_bound<CWindowData *>(
    a1,
    v6);
  v4 = v7;
  if ( *(_BYTE *)(v7 + 25) || *v2 < *(_QWORD *)(v7 + 32) )
    v4 = *a1;
  *v3 = v4;
  return v3;
}
