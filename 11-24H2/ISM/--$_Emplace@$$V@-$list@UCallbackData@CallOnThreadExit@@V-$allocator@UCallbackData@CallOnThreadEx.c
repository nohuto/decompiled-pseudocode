/*
 * XREFs of ??$_Emplace@$$V@?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAAPEAU?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@1@QEAU21@@Z @ 0x180130B40
 * Callers:
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_K@Z @ 0x180131240 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ??$construct@UCallbackData@CallOnThreadExit@@$$V@?$_Default_allocator_traits@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@QEAUCallbackData@CallOnThreadExit@@@Z @ 0x180130C08 (--$construct@UCallbackData@CallOnThreadExit@@$$V@-$_Default_allocator_traits@V-$allocator@U-$_Li.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180130C6C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<CallOnThreadExit::CallbackData>::_Emplace<>(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  __int64 *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( qword_180250E58 == 0x222222222222222LL )
    std::_Xlength_error("list too long");
  v7 = &qword_180250E50;
  v8 = 0LL;
  v3 = operator new(0x78uLL);
  std::_Default_allocator_traits<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>::construct<CallOnThreadExit::CallbackData,>(
    v4,
    v3 + 2);
  ++qword_180250E58;
  v5 = *(_QWORD **)(a2 + 8);
  *v3 = a2;
  v3[1] = v5;
  v8 = 0LL;
  *(_QWORD *)(a2 + 8) = v3;
  *v5 = v3;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>(&v7);
  return v3;
}
