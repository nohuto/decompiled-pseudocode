/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180193084
 * Callers:
 *     ??1?$map@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@@std@@QEAA@XZ @ 0x1801930E0 (--1-$map@UDockInputIdentity@@_KU-$less@UDockInputIdentity@@@std@@V-$allocator@U-$pair@$$CBUDockI.c)
 *     ??1ISMHeatFrameworkHost@@MEAA@XZ @ 0x180193164 (--1ISMHeatFrameworkHost@@MEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@_K@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@1@@Z @ 0x1801926BC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@std@@@std.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,unsigned __int64,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,unsigned __int64>>,0>>::~_Tree<std::_Tmap_traits<DockInputIdentity,unsigned __int64,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,unsigned __int64>>,0>>(
        char **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,unsigned __int64>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,unsigned __int64>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((char **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x40);
}
