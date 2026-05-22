/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180096B64
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009B7BC (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KUInputSiteHierarchyEntry@In.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009C1C8 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$array@G$0BE@@std@@@std@@P.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18014E2A0 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKUMessageInfo@ResizeProcessor.c)
 *     ??$_Emplace@AEBUDockInputIdentity@@AEA_K@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@AEA_K@Z @ 0x180183154 (--$_Emplace@AEBUDockInputIdentity@@AEA_K@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@_KU-$less@U.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180196E54 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBUtagMsgRoutingInfo@@V-$ComPtr.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801A9EBC (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@V-$list@UKeyEventData@Virtua.c)
 *     _std::map__GUID_std::list_VirtualHotKeyTracker::KeyEventData_std::allocator_VirtualHotKeyTracker::KeyEventData____VirtualHotKeyTracker::CompareGuids_std::allocator_std::pair__GUID_const__std::list_VirtualHotKeyTracker::KeyEventData_std::allocator_VirtualHotKeyTracker::KeyEventData_________::_Try_emplace__GUID_const_&__::_1_::dtor$2 @ 0x1801C899C (_std--map__GUID_std--list_VirtualHotKeyTracker--KeyEventData_std--allocator_VirtualHotKeyTracker.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_tagMsgRoutingInfo_const__IInputTarget____void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_tagMsgRoutingInfo_const__IInputTarget____void________std::piecewise_construct_t_const_&_std::tuple_tagMsgRoutingInfo_const_&__std::tuple_____::_1_::dtor$0 @ 0x1801CAB84 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_tagMsgRoutingInfo_const__I.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>(
        __int64 a1)
{
  char *v1; // rcx

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x40);
}
