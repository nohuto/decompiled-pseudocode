/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801C2854
 * Callers:
 *     ??$_Emplace@AEBV?$shared_ptr@UHotKeyInfo@@@std@@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@UHotKeyInfo@@@1@@Z @ 0x1801C1D70 (--$_Emplace@AEBV-$shared_ptr@UHotKeyInfo@@@std@@@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allo.c)
 * Callees:
 *     ??_G?$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z @ 0x1801C3184 (--_G-$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'(v2 + 16);
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>,void *>>>(a1);
}
