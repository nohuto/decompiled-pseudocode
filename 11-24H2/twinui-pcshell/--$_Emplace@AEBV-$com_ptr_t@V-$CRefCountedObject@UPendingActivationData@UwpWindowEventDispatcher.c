/*
 * XREFs of ??$_Emplace@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@?$list@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@1@QEAU21@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18029BB80
 * Callers:
 *     ?v_ShutdownServices@UwpWindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1801D0D70 (-v_ShutdownServices@UwpWindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180429504 (-QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPrope.c)
 *     ?QueuePendingActivationForDestruction@UwpWindowEventDispatcher@@AEAAX_K@Z @ 0x1804298D0 (-QueuePendingActivationForDestruction@UwpWindowEventDispatcher@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18029BC1C (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::_Emplace<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy> const &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx

  if ( *(_QWORD *)(a1 + 8) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list too long");
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
    v6 + 2,
    a3);
  ++*(_QWORD *)(a1 + 8);
  v7 = *(_QWORD **)(a2 + 8);
  *v6 = a2;
  v6[1] = v7;
  *(_QWORD *)(a2 + 8) = v6;
  *v7 = v6;
  return v6;
}
