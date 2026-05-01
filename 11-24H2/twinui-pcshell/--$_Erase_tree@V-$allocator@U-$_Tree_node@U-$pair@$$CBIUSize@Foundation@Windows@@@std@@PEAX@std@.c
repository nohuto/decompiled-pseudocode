/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@@Z @ 0x1802B170C
 * Callers:
 *     ??1?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1802B16DC (--1-$_Tree@V-$_Tmap_traits@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIU.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@@Z @ 0x1802B170C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@1@@Z @ 0x1805AD17C (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBII@std@@PEAX@std@@@std@@@-$_Tree_val@U-$_T.c)
 *     ?BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ @ 0x1805BD6C8 (-BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@@Z @ 0x1802B170C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::Foundation::Size>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::Foundation::Size>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x28);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
