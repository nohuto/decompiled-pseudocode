/*
 * XREFs of ??0CallbackData@CallOnThreadExit@@QEAA@XZ @ 0x180130C44
 * Callers:
 *     ??$construct@UCallbackData@CallOnThreadExit@@$$V@?$_Default_allocator_traits@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@QEAUCallbackData@CallOnThreadExit@@@Z @ 0x180130C08 (--$construct@UCallbackData@CallOnThreadExit@@$$V@-$_Default_allocator_traits@V-$allocator@U-$_Li.c)
 * Callees:
 *     ??0?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@QEAA@XZ @ 0x180130C34 (--0-$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall CallOnThreadExit::CallbackData::CallbackData(CallOnThreadExit::CallbackData *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  std::function<void (enum CallOnThreadExit::CallbackReason)>::function<void (enum CallOnThreadExit::CallbackReason)>((__int64)this);
  result = v1;
  v1[10] = 0LL;
  v1[11] = 0LL;
  v1[12] = 0LL;
  return result;
}
