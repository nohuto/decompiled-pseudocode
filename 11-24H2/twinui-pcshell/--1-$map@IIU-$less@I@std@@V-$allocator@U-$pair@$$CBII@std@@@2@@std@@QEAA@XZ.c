/*
 * XREFs of ??1?$map@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@QEAA@XZ @ 0x1805AD3D0
 * Callers:
 *     _SnapAccessibilityHelpers::MonitorIDFinder::MonitorIDFinder_::_1_::dtor$1 @ 0x1806F9153 (_SnapAccessibilityHelpers--MonitorIDFinder--MonitorIDFinder_--_1_--dtor$1.c)
 *     _SnapAccessibilityHelpers::MonitorIDFinder::BuildMonitorIndex_::_1_::dtor$2 @ 0x1806F917B (_SnapAccessibilityHelpers--MonitorIDFinder--BuildMonitorIndex_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall std::map<unsigned int,unsigned int>::~map<unsigned int,unsigned int>(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,unsigned int>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *>>>(
    a1,
    (__int64)a1);
}
