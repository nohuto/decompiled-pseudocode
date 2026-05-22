/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009B7BC
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_InputSiteHierarchyManager::InputSiteHierarchyEntry_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__InputSiteHierarchyManager::InputSiteHierarchyEntry____0___::_Try_emplace_unsigned___int64_const_&__::_1_::dtor$0 @ 0x1801C898A (_std--_Hash_std--_Umap_traits_unsigned___int64_InputSiteHierarchyManager--InputSiteHierarchyEntr.c)
 * Callees:
 *     ??1InputSiteHierarchyEntry@InputSiteHierarchyManager@@QEAA@XZ @ 0x180063758 (--1InputSiteHierarchyEntry@InputSiteHierarchyManager@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    InputSiteHierarchyManager::InputSiteHierarchyEntry::~InputSiteHierarchyEntry((InputSiteHierarchyManager::InputSiteHierarchyEntry *)(v2 + 24));
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>(a1);
}
