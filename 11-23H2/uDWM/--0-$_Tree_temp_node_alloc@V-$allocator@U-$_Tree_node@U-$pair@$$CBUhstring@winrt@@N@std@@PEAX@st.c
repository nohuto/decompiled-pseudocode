/*
 * XREFs of ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@@Z @ 0x1800FC4C0
 * Callers:
 *     ??$?0AEBU?$pair@$$CBUhstring@winrt@@N@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBU?$pair@$$CBUhstring@winrt@@N@1@@Z @ 0x1800FB5D4 (--$-0AEBU-$pair@$$CBUhstring@winrt@@N@std@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair.c)
 *     ??$?0AEBUhstring@winrt@@AEBN@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@AEBN@Z @ 0x1800FB690 (--$-0AEBUhstring@winrt@@AEBN@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@w.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  a1[1] = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  return a1;
}
