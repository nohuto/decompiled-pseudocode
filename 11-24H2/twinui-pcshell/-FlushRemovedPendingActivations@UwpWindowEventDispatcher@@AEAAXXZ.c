/*
 * XREFs of ?FlushRemovedPendingActivations@UwpWindowEventDispatcher@@AEAAXXZ @ 0x1801D0E60
 * Callers:
 *     ?v_ShutdownServices@UwpWindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1801D0D70 (-v_ShutdownServices@UwpWindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f97718575e1cd15cbb9f08738e16ff5___::Run @ 0x180429CC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6f97718575e1cd15cbb9f08738e16ff5___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x1802CC004 (--$_Freenode@V-$allocator@U-$_List_node@V-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData.c)
 *     ??$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x1804168DC (--$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UwpWindowEventDispatcher::FlushRemovedPendingActivations(RTL_SRWLOCK *this)
{
  __int64 v2; // rbx
  __int64 *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF
  PCWSTR StringRawBuffer; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  while ( this[71].Ptr )
  {
    wil::AcquireSRWLockExclusive(&v6, this + 61);
    v2 = *(_QWORD *)(*(_QWORD *)this[70].Ptr + 16LL);
    v8 = v2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *(__int64 **)this[70].Ptr;
    v4 = *v3;
    --this[71].Ptr;
    *(_QWORD *)v3[1] = v4;
    *(_QWORD *)(v4 + 8) = v3[1];
    std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>::_Freenode<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>();
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
    v5 = *(_QWORD *)(v2 + 24);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v2 + 16), 0LL);
    ViewManagerInteropTraceLogging::PendingActivationDelete<unsigned __int64 &,unsigned short const *>(
      v2 + 8,
      &StringRawBuffer);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  }
}
