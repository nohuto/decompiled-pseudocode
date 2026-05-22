/*
 * XREFs of CallOnThreadExit::_dynamic_atexit_destructor_for__s_callbacks__ @ 0x1801DA0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@PEAU01@@Z @ 0x180093124 (--$_Free_non_head@V-$allocator@U-$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@-$.c)
 */

void __fastcall CallOnThreadExit::_dynamic_atexit_destructor_for__s_callbacks__(__int64 a1)
{
  std::_List_node<CallOnThreadExit::CallbackData,void *>::_Free_non_head<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>(
    a1,
    qword_180250E50);
  std::_Deallocate<16,0>((char *)qword_180250E50, (const struct std::nothrow_t *)0x78);
}
