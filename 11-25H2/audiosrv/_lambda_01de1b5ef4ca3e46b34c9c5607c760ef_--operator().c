/*
 * XREFs of _lambda_01de1b5ef4ca3e46b34c9c5607c760ef_::operator() @ 0x1800DF920
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_01de1b5ef4ca3e46b34c9c5607c760ef__void_::_Do_call @ 0x1800E2FB0 (std--_Func_impl_no_alloc__lambda_01de1b5ef4ca3e46b34c9c5607c760ef__void_--_Do_call.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddEndpointToCompatibleList@BluetoothBroadcastProvider@@AEAAJPEBGPEA_N@Z @ 0x1800E08C0 (-AddEndpointToCompatibleList@BluetoothBroadcastProvider@@AEAAJPEBGPEA_N@Z.c)
 *     ?GetEndpointProperties@BluetoothBroadcastProvider@@AEAAJPEBGPEAPEAUIPropertyStore@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E0EF4 (-GetEndpointProperties@BluetoothBroadcastProvider@@AEAAJPEBGPEAPEAUIPropertyStore@@PEAW4__MIDL__.c)
 *     ?NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ @ 0x1800E1774 (-NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ.c)
 *     ?OnBluetoothRenderEndpointActivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800E1824 (-OnBluetoothRenderEndpointActivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PE.c)
 *     ?OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800E19B8 (-OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@.c)
 *     ?RemoveEndpointFromCompatibleList@BluetoothBroadcastProvider@@AEAAJPEBGPEA_N@Z @ 0x1800E2574 (-RemoveEndpointFromCompatibleList@BluetoothBroadcastProvider@@AEAAJPEBGPEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_01de1b5ef4ca3e46b34c9c5607c760ef_::operator()(__int64 a1)
{
  const unsigned __int16 *v2; // rax
  BluetoothBroadcastProvider *v3; // rcx
  int EndpointProperties; // eax
  unsigned int v5; // ebx
  const unsigned __int16 *v6; // rax
  struct IPropertyStore *v7; // r8
  BluetoothBroadcastProvider *v8; // rcx
  int v9; // eax
  char v10; // r15
  __int64 v11; // rbx
  HRESULT v12; // eax
  HRESULT v13; // r14d
  int v14; // eax
  const unsigned __int16 *v15; // rax
  BluetoothBroadcastProvider *v16; // rcx
  bool v18; // [rsp+20h] [rbp-50h] BYREF
  struct IPropertyStore *v19; // [rsp+28h] [rbp-48h] BYREF
  __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v20; // [rsp+30h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h]
  GUID pclsid; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v18 = 0;
  v20 = eRender;
  v19 = 0LL;
  v2 = (const unsigned __int16 *)std::wstring::c_str(*(_QWORD *)(a1 + 8));
  EndpointProperties = BluetoothBroadcastProvider::GetEndpointProperties(v3, v2, &v19, &v20);
  v5 = EndpointProperties;
  if ( EndpointProperties < 0 )
  {
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      (const char *)(unsigned int)EndpointProperties);
    goto LABEL_26;
  }
  if ( v20 )
  {
    v5 = 0;
LABEL_26:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
    return v5;
  }
  *(_OWORD *)pvar = 0LL;
  v22 = 0LL;
  ((void (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))v19->lpVtbl->GetValue)(
    v19,
    &PKEY_Endpoint_IsBluetooth,
    pvar);
  if ( LOWORD(pvar[0]) == 11 && LOWORD(pvar[1]) == 0xFFFF )
  {
    PropVariantClear(pvar);
    v6 = (const unsigned __int16 *)std::wstring::c_str(*(_QWORD *)(a1 + 8));
    v8 = *(BluetoothBroadcastProvider **)(a1 + 32);
    if ( *(_BYTE *)(a1 + 24) )
    {
      v9 = BluetoothBroadcastProvider::OnBluetoothRenderEndpointActivation(v8, v6, v19, &v18);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          272LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
          (const char *)(unsigned int)v9);
      v10 = 0;
      *(_OWORD *)pvar = 0LL;
      v22 = 0LL;
      ((void (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))v19->lpVtbl->GetValue)(
        v19,
        &PKEY_Multicast_CompatibleProviders,
        pvar);
      if ( LOWORD(pvar[0]) == 4127 )
      {
        v11 = 0LL;
        if ( LODWORD(pvar[1]) )
        {
          while ( 1 )
          {
            pclsid = 0LL;
            v12 = CLSIDFromString(*(LPCOLESTR *)(v22 + 8 * v11), &pclsid);
            v13 = v12;
            if ( v12 < 0 )
              break;
            if ( *(_QWORD *)&pclsid.Data1 == (_QWORD)BLUETOOTH_AUDIO_BROADCAST_PROVIDER
              && *(_QWORD *)pclsid.Data4 == _mm_srli_si128((__m128i)BLUETOOTH_AUDIO_BROADCAST_PROVIDER, 8).m128i_u64[0] )
            {
              v10 = 1;
              goto LABEL_15;
            }
            v11 = (unsigned int)(v11 + 1);
            if ( (unsigned int)v11 >= LODWORD(pvar[1]) )
              goto LABEL_15;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x110,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
            (const char *)(unsigned int)v12);
          PropVariantClear(pvar);
          v5 = v13;
          goto LABEL_26;
        }
      }
LABEL_15:
      PropVariantClear(pvar);
    }
    else
    {
      v14 = BluetoothBroadcastProvider::OnBluetoothRenderEndpointInactivation(v8, v6, v7, &v18);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          272LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
          (const char *)(unsigned int)v14);
      v10 = 0;
    }
    v15 = (const unsigned __int16 *)std::wstring::c_str(*(_QWORD *)(a1 + 8));
    v16 = *(BluetoothBroadcastProvider **)a1;
    if ( v10 )
      EndpointProperties = BluetoothBroadcastProvider::AddEndpointToCompatibleList(v16, v15, &v18);
    else
      EndpointProperties = BluetoothBroadcastProvider::RemoveEndpointFromCompatibleList(v16, v15, &v18);
    v5 = EndpointProperties;
    if ( EndpointProperties < 0 )
      goto LABEL_25;
    if ( v18 )
      BluetoothBroadcastProvider::NotifyMulticastManager(*(BluetoothBroadcastProvider **)a1);
  }
  else
  {
    PropVariantClear(pvar);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
  return 0LL;
}
