/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@PEAU01@@Z @ 0x18012EB1C
 * Callers:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@PEAU01@@Z @ 0x180092EE8 (--$_Free_non_head@V-$allocator@U-$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@-$.c)
 * Callees:
 *     ??1CallbackData@CallOnThreadExit@@QEAA@XZ @ 0x18012EB78 (--1CallbackData@CallOnThreadExit@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<CallOnThreadExit::CallbackData,void *>::_Freenode<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>(
        __int64 a1,
        char *a2)
{
  CallOnThreadExit::CallbackData::~CallbackData((CallOnThreadExit::CallbackData *)(a2 + 16));
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x70);
}
