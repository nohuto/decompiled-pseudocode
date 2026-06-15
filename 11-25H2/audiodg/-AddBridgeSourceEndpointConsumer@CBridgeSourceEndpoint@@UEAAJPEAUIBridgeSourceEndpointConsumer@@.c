/*
 * XREFs of ?AddBridgeSourceEndpointConsumer@CBridgeSourceEndpoint@@UEAAJPEAUIBridgeSourceEndpointConsumer@@@Z @ 0x1400674A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140045A38 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x140067078 (--$_Emplace_reallocate@V-$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBridgeSourceEndpoint::AddBridgeSourceEndpointConsumer(
        CBridgeSourceEndpoint *this,
        struct IBridgeSourceEndpointConsumer *a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 *v5; // rdx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IBridgeSourceEndpointConsumer *v9; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+38h] [rbp+10h] BYREF

  v4 = (RTL_SRWLOCK *)((char *)this + 96);
  AcquireSRWLockExclusive((PSRWLOCK)this + 12);
  try
  {
    v10 = v4;
    v9 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IBridgeSourceEndpointConsumer *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = (__int64 *)*((_QWORD *)this + 14);
    if ( v5 == *((__int64 **)this + 15) )
    {
      std::vector<wil::com_ptr_t<IBridgeSourceEndpointConsumer,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IBridgeSourceEndpointConsumer,wil::err_returncode_policy>>(
        (__int64 **)this + 13,
        v5,
        (__int64 *)&v9);
    }
    else
    {
      v9 = 0LL;
      *v5 = (__int64)a2;
      *((_QWORD *)this + 14) += 8LL;
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v9);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x88,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgesourceendpoint.cpp",
                           v6);
  }
  return result;
}
