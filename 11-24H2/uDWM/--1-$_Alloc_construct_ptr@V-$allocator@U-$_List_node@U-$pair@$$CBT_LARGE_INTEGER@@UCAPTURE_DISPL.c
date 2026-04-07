/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800ACDB0
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800ACEC4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DIS.c)
 *     _std::_Hash_std::_Umap_traits__LARGE_INTEGER_CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY_std::_Uhash_compare__LARGE_INTEGER_std::hash__LARGE_INTEGER__std::equal_to__LARGE_INTEGER____std::allocator_std::pair__LARGE_INTEGER_const__CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY____0___::emplace__LARGE_INTEGER_const_&_CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY__::_1_::dtor$1 @ 0x1800F82A9 (_std--_Hash_std--_Umap_traits__LARGE_INTEGER_CCaptureManager--CAPTURE_DISPLAY_MAP_E_ea_1800F82A9.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x50);
}
