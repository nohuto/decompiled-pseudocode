/*
 * XREFs of ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@1@@Z @ 0x1805BD630
 * Callers:
 *     ??$?0U?$pair@IH@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@$$QEAU?$pair@IH@1@@Z @ 0x1805BCCF8 (--$-0U-$pair@IH@std@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBII@std@@PEAX@std@.c)
 *     ??$_Emplace@U?$pair@II@std@@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@_N@1@$$QEAU?$pair@II@1@@Z @ 0x1805BCE68 (--$_Emplace@U-$pair@II@std@@@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801EF7E4 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *>>>(
        _QWORD *a1,
        __int64 a2)
{
  size_t size_of; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  a1[1] = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  return a1;
}
