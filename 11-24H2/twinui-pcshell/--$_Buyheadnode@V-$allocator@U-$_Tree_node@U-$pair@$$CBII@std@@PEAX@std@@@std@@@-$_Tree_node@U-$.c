/*
 * XREFs of ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@1@@Z @ 0x1805BCD6C
 * Callers:
 *     ??0MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ @ 0x1805BD670 (--0MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ.c)
 *     ?BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ @ 0x1805BD6C8 (-BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801EF7E4 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

_QWORD *std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *>>>()
{
  size_t size_of; // rax
  _QWORD *result; // rax

  size_of = std::_Get_size_of_n<40>(1uLL);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
