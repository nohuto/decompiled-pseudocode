/*
 * XREFs of ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAV?$unique_ptr@UVolumeControlData@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@Z @ 0x180112FB8
 * Callers:
 *     _lambda_ebe2282181f4e2159926b1d117e17408_::operator() @ 0x180112DA8 (_lambda_ebe2282181f4e2159926b1d117e17408_--operator().c)
 *     ?Initialize_old@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180113FEC (-Initialize_old@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     _lambda_4aaa46c46049f8f8ae12df03880025d1_::operator() @ 0x180112B68 (_lambda_4aaa46c46049f8f8ae12df03880025d1_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CVolumeHardware::FindVolumeControlForEndpoint(__int64 a1, __int64 *a2, void **a3)
{
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int *v11; // rdi
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-28h] BYREF
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-18h] BYREF
  _DWORD *v20; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 *v22; // [rsp+98h] [rbp+38h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+48h] BYREF

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, (__int64)&WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids, a1);
  }
  if ( !a2 )
    return 2147500035LL;
  v7 = *a2;
  v17 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v7 + 32))(a2, 0LL, &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x587,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v8);
LABEL_34:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
    return v9;
  }
  *(_OWORD *)pvar = 0LL;
  v20 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v17 + 40LL))(
          v17,
          &PKEY_Endpoint_HasHardwareVolume,
          pvar);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v10);
LABEL_33:
    PropVariantClear(pvar);
    goto LABEL_34;
  }
  if ( LOWORD(pvar[0]) == 65 && LODWORD(pvar[1]) == 524 && (v11 = v20) != 0LL && *v20 )
  {
    if ( a3 )
    {
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        a3,
        v20);
      *(_OWORD *)pvar = 0LL;
      v20 = 0LL;
    }
    v22 = 0LL;
    GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v22);
    v13 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, unsigned int *, __int64 **))GetDevice)(
            g_DeviceEnumerator,
            v11 + 1,
            &v22);
    v9 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v13);
LABEL_32:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
      goto LABEL_33;
    }
    v23 = 0LL;
    v14 = *v22;
    v23 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v14 + 24))(
            v22,
            &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
            23LL);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = 1442LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v15);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
      goto LABEL_32;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v23 + 56LL))(v23, *v11, a1 + 248);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = 1444LL;
      goto LABEL_31;
    }
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x22u,
        (__int64)&WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids,
        a1);
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, __int64))(**(_QWORD **)(a1 + 248) + 104LL))(
            *(_QWORD *)(a1 + 248),
            23LL,
            &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
            a1 + 256);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = 1450LL;
      goto LABEL_31;
    }
    v18[0] = &v22;
    v18[1] = a1;
    lambda_4aaa46c46049f8f8ae12df03880025d1_::operator()((__int64)v18);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
    PropVariantClear(pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
    return 0LL;
  }
  else
  {
    PropVariantClear(pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
    return 2147943568LL;
  }
}
