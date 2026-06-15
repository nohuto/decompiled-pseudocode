/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1801099A8
 * Callers:
 *     ??1CCaptureNotifier@@QEAA@XZ @ 0x1801099FC (--1CCaptureNotifier@@QEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@@Z @ 0x180109688 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@s.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>(
        char **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,APPLICATION_REF_DATA>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((char **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
