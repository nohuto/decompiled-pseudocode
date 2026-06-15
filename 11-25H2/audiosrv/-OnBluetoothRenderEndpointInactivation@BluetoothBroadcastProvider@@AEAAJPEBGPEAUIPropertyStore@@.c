/*
 * XREFs of ?OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800E19B8
 * Callers:
 *     _lambda_01de1b5ef4ca3e46b34c9c5607c760ef_::operator() @ 0x1800DF920 (_lambda_01de1b5ef4ca3e46b34c9c5607c760ef_--operator().c)
 *     _lambda_5376a2af323ddc5a5b83ae59d60facbc_::operator() @ 0x1800F68B0 (_lambda_5376a2af323ddc5a5b83ae59d60facbc_--operator().c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??4BluetoothBroadcastSession@@QEAAAEAU0@$$QEAU0@@Z @ 0x1800DF8A8 (--4BluetoothBroadcastSession@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     _lambda_09327c36c45800bc73179388c0fcba92_::operator() @ 0x1800DFBB0 (_lambda_09327c36c45800bc73179388c0fcba92_--operator().c)
 *     ?erase@?$vector@UDummyBroadcastSession@@V?$allocator@UDummyBroadcastSession@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDummyBroadcastSession@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDummyBroadcastSession@@@std@@@std@@@2@0@Z @ 0x1800E32D4 (-erase@-$vector@UDummyBroadcastSession@@V-$allocator@UDummyBroadcastSession@@@std@@@std@@QEAA-AV.c)
 */

__int64 __fastcall BluetoothBroadcastProvider::OnBluetoothRenderEndpointInactivation(
        BluetoothBroadcastProvider *this,
        unsigned __int16 *a2,
        struct IPropertyStore *a3,
        bool *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 i; // rdi
  const unsigned __int16 *v12; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+10h] BYREF
  struct IPropertyStore *v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v8 = *((_QWORD *)this + 9);
  v13 = v4;
  v9 = *((_QWORD *)this + 8);
  v12 = a2;
  v14 = (struct IPropertyStore *)a2;
  while ( v9 != v8 && !lambda_09327c36c45800bc73179388c0fcba92_::operator()((__int64)&v14, v9) )
    v9 += 48LL;
  if ( v9 != v8 )
  {
    for ( i = v9 + 48; i != v8; i += 48LL )
    {
      if ( !lambda_09327c36c45800bc73179388c0fcba92_::operator()((__int64)&v12, i) )
      {
        BluetoothBroadcastSession::operator=(v9, i);
        v9 += 48LL;
      }
    }
  }
  if ( v9 != *((_QWORD *)this + 9) )
  {
    std::vector<DummyBroadcastSession>::erase((char *)this + 64, &v14, v9);
    *a4 = 1;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
  return 0LL;
}
