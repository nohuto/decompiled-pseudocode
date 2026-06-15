/*
 * XREFs of ?OnMulticastChildSessionDescriptorKeyChanged@DummyBroadcastProvider@@AEAAJPEBG@Z @ 0x1800F79F8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_3ea45eb7d205feda3a4dede396fc4e77__void_::_Do_call @ 0x1800F8410 (std--_Func_impl_no_alloc__lambda_3ea45eb7d205feda3a4dede396fc4e77__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ @ 0x1800E1774 (-NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ.c)
 *     ?RemoveChildEndpointId@BluetoothBroadcastSession@@QEAA_NPEBG@Z @ 0x1800E24C4 (-RemoveChildEndpointId@BluetoothBroadcastSession@@QEAA_NPEBG@Z.c)
 *     ?AddChildEndpointIdIfNotPresent@DummyBroadcastSession@@QEAAJPEBGPEA_N@Z @ 0x1800F7230 (-AddChildEndpointIdIfNotPresent@DummyBroadcastSession@@QEAAJPEBGPEA_N@Z.c)
 *     ?GetEndpointProperties@DummyBroadcastProvider@@AEAAJPEBGPEAPEAUIPropertyStore@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800F7648 (-GetEndpointProperties@DummyBroadcastProvider@@AEAAJPEBGPEAPEAUIPropertyStore@@PEAW4__MIDL___MID.c)
 *     ?RetrieveBroadcastSession@DummyBroadcastProvider@@AEAAAEAUDummyBroadcastSession@@AEBU_GUID@@W4RBS_OPTION@1@@Z @ 0x1800F7E08 (-RetrieveBroadcastSession@DummyBroadcastProvider@@AEAAAEAUDummyBroadcastSession@@AEBU_GUID@@W4RB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DummyBroadcastProvider::OnMulticastChildSessionDescriptorKeyChanged(
        DummyBroadcastProvider *this,
        unsigned __int16 *a2)
{
  bool v4; // di
  int EndpointProperties; // eax
  unsigned int v6; // ebx
  const char *v7; // r9
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  DummyBroadcastSession *BroadcastSession; // rax
  const char *v13; // r9
  int v14; // eax
  unsigned int v15; // ebx
  BluetoothBroadcastSession *v16; // r12
  BluetoothBroadcastSession *i; // rbx
  bool v18; // [rsp+20h] [rbp-58h] BYREF
  int v19; // [rsp+24h] [rbp-54h] BYREF
  struct IPropertyStore *v20; // [rsp+28h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+30h] [rbp-48h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0LL;
  try
  {
    EndpointProperties = DummyBroadcastProvider::GetEndpointProperties(
                           this,
                           a2,
                           &v20,
                           (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *)&v19);
    v6 = EndpointProperties;
    if ( EndpointProperties < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
        (const char *)(unsigned int)EndpointProperties);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
      return v6;
    }
    *(_OWORD *)pvar = 0LL;
    v23 = 0LL;
    v9 = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))v20->lpVtbl->GetValue)(
           v20,
           &PKEY_Multicast_Child_SessionDescriptor,
           pvar);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21D,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
        (const char *)(unsigned int)v9);
      PropVariantClear(pvar);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
      return v10;
    }
    if ( LOWORD(pvar[0]) == 65 && LODWORD(pvar[1]) == 36 )
    {
      v11 = v23;
      if ( *(_QWORD *)(v23 + 4) != *(_QWORD *)&DUMMY_MULTICAST_PROVIDER.Data1
        || *(_QWORD *)(v23 + 12) != _mm_srli_si128((__m128i)DUMMY_MULTICAST_PROVIDER, 8).m128i_u64[0] )
      {
LABEL_20:
        PropVariantClear(pvar);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
        return 0LL;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
      v21 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
      BroadcastSession = (DummyBroadcastSession *)DummyBroadcastProvider::RetrieveBroadcastSession(this, v11 + 20, 1LL);
      v14 = DummyBroadcastSession::AddChildEndpointIdIfNotPresent(BroadcastSession, (char *)a2, &v18, v13);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x227,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
          (const char *)(unsigned int)v14);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
        PropVariantClear(pvar);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
        return v15;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
      v4 = v18;
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
      v21 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
      v16 = (BluetoothBroadcastSession *)*((_QWORD *)this + 9);
      for ( i = (BluetoothBroadcastSession *)*((_QWORD *)this + 8);
            i != v16;
            i = (BluetoothBroadcastSession *)((char *)i + 48) )
      {
        if ( BluetoothBroadcastSession::RemoveChildEndpointId(i, a2) )
          v4 = 1;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
    }
    if ( v4 )
      BluetoothBroadcastProvider::NotifyMulticastManager(this);
    goto LABEL_20;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x23E,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
                           v7);
  }
  return result;
}
