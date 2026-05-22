/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18012EB48
 * Callers:
 *     ??$_Emplace@$$V@?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAAPEAU?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@1@QEAU21@@Z @ 0x18012EA60 (--$_Emplace@$$V@-$list@UCallbackData@CallOnThreadExit@@V-$allocator@UCallbackData@CallOnThreadEx.c)
 * Callees:
 *     ??1CallbackData@CallOnThreadExit@@QEAA@XZ @ 0x18012EB78 (--1CallbackData@CallOnThreadExit@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    CallOnThreadExit::CallbackData::~CallbackData((CallOnThreadExit::CallbackData *)(v2 + 16));
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *>>>(a1);
}
