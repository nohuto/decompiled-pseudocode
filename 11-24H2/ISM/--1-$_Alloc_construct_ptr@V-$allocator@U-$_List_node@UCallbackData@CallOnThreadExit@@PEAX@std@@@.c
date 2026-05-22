/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009BC34
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180130C6C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@.c)
 *     _std::list_CallOnThreadExit::CallbackData_std::allocator_CallOnThreadExit::CallbackData___::_Emplace___::_1_::dtor$1 @ 0x1801D7188 (_std--list_CallOnThreadExit--CallbackData_std--allocator_CallOnThreadExit--CallbackData___--_Emp.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>(
        __int64 a1)
{
  char *v1; // rcx

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x78);
}
