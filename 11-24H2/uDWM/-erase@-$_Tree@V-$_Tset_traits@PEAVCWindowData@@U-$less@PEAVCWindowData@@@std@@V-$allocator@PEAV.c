/*
 * XREFs of ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@2@V32@@Z @ 0x1800BDC30
 * Callers:
 *     ?EnsureMinimizedWindowListUpdated@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@_N@Z @ 0x180061E98 (-EnsureMinimizedWindowListUpdated@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800827A8 (-OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BCC64 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowData@@@std@@@s.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAPEAU?$_Tree_node@PEAVCWindowData@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800BD728 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAPEAU-$_Tree_node@PE.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v4; // r9
  __int64 **v5; // r10
  __int64 *v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a3;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CWindowData *>>,std::_Iterator_base0>::operator++(&v8);
  v6 = std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Extract(v5, v4);
  std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x28);
  *a2 = v8;
  return a2;
}
