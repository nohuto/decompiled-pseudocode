/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@1@@Z @ 0x1800B6E50
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@1@@Z @ 0x1800B6E50 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree.c)
 *     ??1?$set@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@@std@@QEAA@XZ @ 0x1800B6FA8 (--1-$set@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAVCWindowData@@@3@@std@@.c)
 *     ??1CDisplayAnimatedVisual@@MEAA@XZ @ 0x1800B6FD8 (--1CDisplayAnimatedVisual@@MEAA@XZ.c)
 *     ?clear@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800B87E4 (-clear@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAV.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@1@@Z @ 0x1800B6E50 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Erase_tree<std::allocator<std::_Tree_node<CWindowData *,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Erase_tree<std::allocator<std::_Tree_node<CWindowData *,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      result = std::_Deallocate<16,0>(v6, 0x28uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
