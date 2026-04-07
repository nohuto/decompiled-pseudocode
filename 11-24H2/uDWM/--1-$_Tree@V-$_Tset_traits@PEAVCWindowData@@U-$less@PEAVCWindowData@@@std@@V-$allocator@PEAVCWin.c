/*
 * XREFs of ??1?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800BCB98
 * Callers:
 *     ??1?$set@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@@std@@QEAA@XZ @ 0x1800BCBC8 (--1-$set@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAVCWindowData@@@3@@std@@.c)
 *     ??1CDisplayAnimatedVisual@@MEAA@XZ @ 0x1800BCBD4 (--1CDisplayAnimatedVisual@@MEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@1@@Z @ 0x1800BCAD8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree.c)
 */

void __fastcall std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::~_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Erase_tree<std::allocator<std::_Tree_node<CWindowData *,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x28);
}
