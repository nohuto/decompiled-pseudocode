/*
 * XREFs of _lambda_5376a2af323ddc5a5b83ae59d60facbc_::operator() @ 0x1800F68B0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5376a2af323ddc5a5b83ae59d60facbc__void_::_Do_call @ 0x1800F8460 (std--_Func_impl_no_alloc__lambda_5376a2af323ddc5a5b83ae59d60facbc__void_--_Do_call.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ @ 0x1800E1774 (-NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ.c)
 *     ?OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800E19B8 (-OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@.c)
 *     ?AddEndpointToCompatibleList@DummyBroadcastProvider@@AEAAJPEBGPEA_N@Z @ 0x1800F7318 (-AddEndpointToCompatibleList@DummyBroadcastProvider@@AEAAJPEBGPEA_N@Z.c)
 *     ?GetEndpointProperties@DummyBroadcastProvider@@AEAAJPEBGPEAPEAUIPropertyStore@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800F7648 (-GetEndpointProperties@DummyBroadcastProvider@@AEAAJPEBGPEAPEAUIPropertyStore@@PEAW4__MIDL___MID.c)
 *     ?OnRenderEndpointActivation@DummyBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800F7C50 (-OnRenderEndpointActivation@DummyBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_5376a2af323ddc5a5b83ae59d60facbc_::operator()(__int64 a1)
{
  const unsigned __int16 *v2; // rax
  DummyBroadcastProvider *v3; // rcx
  int EndpointProperties; // eax
  unsigned int v5; // ebx
  unsigned __int16 *v6; // rax
  struct IPropertyStore *v7; // r8
  DummyBroadcastProvider *v8; // rcx
  int v9; // eax
  const unsigned __int16 *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  bool v13; // [rsp+40h] [rbp+20h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v14; // [rsp+48h] [rbp+28h] BYREF
  struct IPropertyStore *v15; // [rsp+50h] [rbp+30h] BYREF

  v13 = 0;
  v14 = eRender;
  v15 = 0LL;
  v2 = (const unsigned __int16 *)std::wstring::c_str(*(_QWORD *)(a1 + 8));
  EndpointProperties = DummyBroadcastProvider::GetEndpointProperties(v3, v2, &v15, &v14);
  v5 = EndpointProperties;
  if ( EndpointProperties >= 0 )
  {
    if ( v14 == eRender )
    {
      v6 = (unsigned __int16 *)std::wstring::c_str(*(_QWORD *)(a1 + 8));
      v8 = *(DummyBroadcastProvider **)(a1 + 32);
      if ( *(_BYTE *)(a1 + 24) )
        v9 = DummyBroadcastProvider::OnRenderEndpointActivation(v8, v6, v15, &v13);
      else
        v9 = BluetoothBroadcastProvider::OnBluetoothRenderEndpointInactivation(v8, v6, v7, &v13);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          210LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
          (const char *)(unsigned int)v9);
      v10 = (const unsigned __int16 *)std::wstring::c_str(*(_QWORD *)(a1 + 8));
      EndpointProperties = DummyBroadcastProvider::AddEndpointToCompatibleList(
                             *(DummyBroadcastProvider **)a1,
                             v10,
                             &v13);
      v5 = EndpointProperties;
      if ( EndpointProperties < 0 )
        goto LABEL_9;
      if ( v13 )
        BluetoothBroadcastProvider::NotifyMulticastManager(*(BluetoothBroadcastProvider **)a1);
    }
    v5 = 0;
    goto LABEL_13;
  }
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD2,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
    (const char *)(unsigned int)EndpointProperties);
LABEL_13:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
  return v5;
}
