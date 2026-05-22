/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@PEAU01@@Z @ 0x180093124
 * Callers:
 *     CallOnThreadExit::_dynamic_atexit_destructor_for__s_callbacks__ @ 0x1801DA0A0 (CallOnThreadExit--_dynamic_atexit_destructor_for__s_callbacks__.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@PEAU01@@Z @ 0x180130BDC (--$_Freenode@V-$allocator@U-$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@-$_List.c)
 */

_QWORD *__fastcall std::_List_node<CallOnThreadExit::CallbackData,void *>::_Free_non_head<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)std::_List_node<CallOnThreadExit::CallbackData,void *>::_Freenode<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
