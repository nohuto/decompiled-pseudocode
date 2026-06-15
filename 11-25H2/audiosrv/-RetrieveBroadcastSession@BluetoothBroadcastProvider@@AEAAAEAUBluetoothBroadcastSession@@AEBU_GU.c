/*
 * XREFs of ?RetrieveBroadcastSession@BluetoothBroadcastProvider@@AEAAAEAUBluetoothBroadcastSession@@AEBU_GUID@@W4RBS_OPTION@1@@Z @ 0x1800E2710
 * Callers:
 *     ?OnBluetoothRenderEndpointActivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800E1824 (-OnBluetoothRenderEndpointActivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PE.c)
 *     ?OnMulticastChildSessionDescriptorKeyChanged@BluetoothBroadcastProvider@@AEAAJPEBG@Z @ 0x1800E1D08 (-OnMulticastChildSessionDescriptorKeyChanged@BluetoothBroadcastProvider@@AEAAJPEBG@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??1DummyBroadcastSession@@QEAA@XZ @ 0x1800DF714 (--1DummyBroadcastSession@@QEAA@XZ.c)
 *     ?push_back@?$vector@UDummyBroadcastSession@@V?$allocator@UDummyBroadcastSession@@@std@@@std@@QEAAX$$QEAUDummyBroadcastSession@@@Z @ 0x1800E3BF0 (-push_back@-$vector@UDummyBroadcastSession@@V-$allocator@UDummyBroadcastSession@@@std@@@std@@QEA.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall BluetoothBroadcastProvider::RetrieveBroadcastSession(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *i; // rbx
  __int64 v6; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v9[3]; // [rsp+28h] [rbp-40h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v8 = v4;
  for ( i = *(_QWORD **)(a1 + 64); i != *(_QWORD **)(a1 + 72) && (*i != *a2 || i[1] != a2[1]); i += 6 )
    ;
  if ( i == *(_QWORD **)(a1 + 72) )
  {
    memset(&v9[1], 0, 32);
    v9[0] = *(_OWORD *)a2;
    std::vector<DummyBroadcastSession>::push_back(a1 + 64, v9);
    v6 = *(_QWORD *)(a1 + 72);
    DummyBroadcastSession::~DummyBroadcastSession((void **)v9);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
    return (_QWORD *)(v6 - 48);
  }
  else
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
    return i;
  }
}
