/*
 * XREFs of ??$_Emplace@$$V@?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAAPEAU?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@1@QEAU21@@Z @ 0x18012EA60
 * Callers:
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXXZ@std@@PEA_K@Z @ 0x18012EC04 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXXZ@std@@PEA_K@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18012EB48 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<CallOnThreadExit::CallbackData>::_Emplace<>(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rcx
  __int64 *v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  if ( qword_180246E90 == 0x249249249249249LL )
    std::_Xlength_error("list too long");
  v6 = &qword_180246E88;
  v7 = 0LL;
  v3 = operator new(0x70uLL);
  memset_0(v3 + 2, 0, 0x60uLL);
  v3[9] = 0LL;
  v3[12] = 0LL;
  v3[13] = 0LL;
  ++qword_180246E90;
  v4 = *(_QWORD **)(a2 + 8);
  *v3 = a2;
  v3[1] = v4;
  v7 = 0LL;
  *(_QWORD *)(a2 + 8) = v3;
  *v4 = v3;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>(&v6);
  return v3;
}
