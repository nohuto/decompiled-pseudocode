/*
 * XREFs of ?RetrieveBroadcastSession@DummyBroadcastProvider@@AEAAAEAUDummyBroadcastSession@@AEBU_GUID@@W4RBS_OPTION@1@@Z @ 0x1800F7E08
 * Callers:
 *     _lambda_a637cfb7c0d6f432862cea2c6b753eb0_::operator() @ 0x1800F6CD0 (_lambda_a637cfb7c0d6f432862cea2c6b753eb0_--operator().c)
 *     ?OnMulticastChildSessionDescriptorKeyChanged@DummyBroadcastProvider@@AEAAJPEBG@Z @ 0x1800F79F8 (-OnMulticastChildSessionDescriptorKeyChanged@DummyBroadcastProvider@@AEAAJPEBG@Z.c)
 *     ?OnRenderEndpointActivation@DummyBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800F7C50 (-OnRenderEndpointActivation@DummyBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1800DEECC (--0bad_alloc@std@@QEAA@XZ.c)
 *     ??1DummyBroadcastSession@@QEAA@XZ @ 0x1800DF714 (--1DummyBroadcastSession@@QEAA@XZ.c)
 *     ?push_back@?$vector@UDummyBroadcastSession@@V?$allocator@UDummyBroadcastSession@@@std@@@std@@QEAAX$$QEAUDummyBroadcastSession@@@Z @ 0x1800E3BF0 (-push_back@-$vector@UDummyBroadcastSession@@V-$allocator@UDummyBroadcastSession@@@std@@@std@@QEA.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall DummyBroadcastProvider::RetrieveBroadcastSession(__int64 a1, _QWORD *a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  _QWORD *i; // rbx
  __int64 v8; // rbx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+20h] [rbp-58h] BYREF
  _OWORD pExceptionObject[3]; // [rsp+28h] [rbp-50h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v10 = v6;
  for ( i = *(_QWORD **)(a1 + 64); i != *(_QWORD **)(a1 + 72) && (*i != *a2 || i[1] != a2[1]); i += 6 )
    ;
  if ( i == *(_QWORD **)(a1 + 72) )
  {
    if ( a3 != 1 )
    {
      std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
      throw (std::bad_alloc *)pExceptionObject;
    }
    memset(&pExceptionObject[1], 0, 32);
    pExceptionObject[0] = *(_OWORD *)a2;
    std::vector<DummyBroadcastSession>::push_back((__int64 *)(a1 + 64), (__int64)pExceptionObject);
    v8 = *(_QWORD *)(a1 + 72);
    DummyBroadcastSession::~DummyBroadcastSession((void **)pExceptionObject);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
    return (_QWORD *)(v8 - 48);
  }
  else
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
    return i;
  }
}
