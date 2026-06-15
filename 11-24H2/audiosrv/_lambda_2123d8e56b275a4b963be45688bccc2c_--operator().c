/*
 * XREFs of _lambda_2123d8e56b275a4b963be45688bccc2c_::operator() @ 0x1800E4324
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_2123d8e56b275a4b963be45688bccc2c__void_::_Do_call @ 0x1800E7A10 (std--_Func_impl_no_alloc__lambda_2123d8e56b275a4b963be45688bccc2c__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddEndpointToCompatibleList@BluetoothBroadcastProvider@@AEAAJPEBGPEA_N@Z @ 0x1800E52B0 (-AddEndpointToCompatibleList@BluetoothBroadcastProvider@@AEAAJPEBGPEA_N@Z.c)
 *     ?GetEndpointProperties@BluetoothBroadcastProvider@@AEAAJPEBGPEAPEAUIPropertyStore@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E5954 (-GetEndpointProperties@BluetoothBroadcastProvider@@AEAAJPEBGPEAPEAUIPropertyStore@@PEAW4__MIDL__.c)
 *     ?NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ @ 0x1800E61D4 (-NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ.c)
 *     ?OnBluetoothRenderEndpointActivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800E6284 (-OnBluetoothRenderEndpointActivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PE.c)
 *     ?OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800E6418 (-OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@.c)
 *     ?RemoveEndpointFromCompatibleList@BluetoothBroadcastProvider@@AEAAJPEBGPEA_N@Z @ 0x1800E6FD4 (-RemoveEndpointFromCompatibleList@BluetoothBroadcastProvider@@AEAAJPEBGPEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_2123d8e56b275a4b963be45688bccc2c_::operator()(__int64 a1, __int64 a2)
{
  const unsigned __int16 *v3; // rax
  BluetoothBroadcastProvider *v4; // rcx
  int EndpointProperties; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  const unsigned __int16 *v8; // rax
  struct IPropertyStore *v9; // r8
  BluetoothBroadcastProvider *v10; // rcx
  int v11; // eax
  char v12; // r15
  __int64 v13; // rbx
  HRESULT v14; // eax
  HRESULT v15; // r14d
  __int64 v16; // rdx
  int v17; // eax
  BluetoothBroadcastProvider *v18; // rbx
  const unsigned __int16 *v19; // rax
  int v20; // eax
  int v21; // esi
  bool v23; // [rsp+20h] [rbp-50h] BYREF
  struct IPropertyStore *v24; // [rsp+28h] [rbp-48h] BYREF
  __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v25; // [rsp+30h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h]
  GUID pclsid; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v23 = 0;
  v25 = eRender;
  v24 = 0LL;
  v3 = (const unsigned __int16 *)std::wstring::c_str(*(_QWORD *)(a1 + 8), a2);
  EndpointProperties = BluetoothBroadcastProvider::GetEndpointProperties(v4, v3, &v24, &v25);
  v6 = EndpointProperties;
  if ( EndpointProperties < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      (const char *)(unsigned int)EndpointProperties);
LABEL_27:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
    return v6;
  }
  if ( v25 )
  {
    v6 = 0;
    goto LABEL_27;
  }
  *(_OWORD *)pvar = 0LL;
  v27 = 0LL;
  ((void (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))v24->lpVtbl->GetValue)(
    v24,
    &PKEY_Endpoint_IsBluetooth,
    pvar);
  if ( LOWORD(pvar[0]) == 11 && LOWORD(pvar[1]) == 0xFFFF )
  {
    PropVariantClear(pvar);
    v8 = (const unsigned __int16 *)std::wstring::c_str(*(_QWORD *)(a1 + 8), v7);
    v10 = *(BluetoothBroadcastProvider **)(a1 + 32);
    if ( *(_BYTE *)(a1 + 24) )
    {
      v11 = BluetoothBroadcastProvider::OnBluetoothRenderEndpointActivation(v10, v8, v24, &v23);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          272LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
          (const char *)(unsigned int)v11);
      v12 = 0;
      *(_OWORD *)pvar = 0LL;
      v27 = 0LL;
      ((void (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))v24->lpVtbl->GetValue)(
        v24,
        &PKEY_Multicast_CompatibleProviders,
        pvar);
      if ( LOWORD(pvar[0]) == 4127 )
      {
        v13 = 0LL;
        if ( LODWORD(pvar[1]) )
        {
          while ( 1 )
          {
            pclsid = 0LL;
            v14 = CLSIDFromString(*(LPCOLESTR *)(v27 + 8 * v13), &pclsid);
            v15 = v14;
            if ( v14 < 0 )
              break;
            if ( *(_QWORD *)&pclsid.Data1 == (_QWORD)BLUETOOTH_AUDIO_BROADCAST_PROVIDER
              && *(_QWORD *)pclsid.Data4 == _mm_srli_si128((__m128i)BLUETOOTH_AUDIO_BROADCAST_PROVIDER, 8).m128i_u64[0] )
            {
              v12 = 1;
              goto LABEL_16;
            }
            v13 = (unsigned int)(v13 + 1);
            if ( (unsigned int)v13 >= LODWORD(pvar[1]) )
              goto LABEL_16;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x110,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
            (const char *)(unsigned int)v14);
          PropVariantClear(pvar);
          v6 = v15;
          goto LABEL_27;
        }
      }
LABEL_16:
      PropVariantClear(pvar);
    }
    else
    {
      v17 = BluetoothBroadcastProvider::OnBluetoothRenderEndpointInactivation(v10, v8, v9, &v23);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          272LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
          (const char *)(unsigned int)v17);
      v12 = 0;
    }
    v18 = *(BluetoothBroadcastProvider **)a1;
    v19 = (const unsigned __int16 *)std::wstring::c_str(*(_QWORD *)(a1 + 8), v16);
    if ( v12 )
      v20 = BluetoothBroadcastProvider::AddEndpointToCompatibleList(v18, v19, &v23);
    else
      v20 = BluetoothBroadcastProvider::RemoveEndpointFromCompatibleList(v18, v19, &v23);
    v21 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x110,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)(unsigned int)v20);
      v6 = v21;
      goto LABEL_27;
    }
    if ( v23 )
    {
      if ( *((_BYTE *)v18 + 16) )
        BluetoothBroadcastProvider::NotifyMulticastManager(v18);
    }
  }
  else
  {
    PropVariantClear(pvar);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
  return 0LL;
}
