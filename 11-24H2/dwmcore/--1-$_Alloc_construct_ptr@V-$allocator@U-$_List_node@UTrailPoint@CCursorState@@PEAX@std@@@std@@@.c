/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802B18DC
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802B1900 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(
        __int64 a1)
{
  _QWORD *v1; // rcx

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x50uLL);
}
