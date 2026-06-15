/*
 * XREFs of ?ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x180100080
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18003366C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x180100668 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescrip.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18004E288 (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180050D34 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180076600 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ??1?$out_param_ptr_t@PEAPEAXV?$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800799C4 (--1-$out_param_ptr_t@PEAPEAXV-$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@de.c)
 *     ??1?$out_param_t@V?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800A5BE8 (--1-$out_param_t@V-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTa.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??1?$out_param_ptr_t@PEAPEAXV?$com_ptr_t@UIMMDeviceEnumerator@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180100010 (--1-$out_param_ptr_t@PEAPEAXV-$com_ptr_t@UIMMDeviceEnumerator@@Uerr_returncode_policy@wil@@@wil@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall ConnectorSupportsFormat(
        struct EndpointCharacteristicsDescriptor *a1,
        __int64 a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4)
{
  int v5; // r14d
  __int64 result; // rax
  _QWORD *v7; // rbx
  HRESULT Instance; // ebx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 (__fastcall *v13)(__int64, const struct _tagpropertykey *, PROPVARIANT *); // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, PROPVARIANT, __int64 **); // rdi
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 *v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // eax
  __int64 *v32; // [rsp+50h] [rbp-79h] BYREF
  __int64 *v33; // [rsp+58h] [rbp-71h] BYREF
  __int64 v34; // [rsp+60h] [rbp-69h] BYREF
  __int64 *v35; // [rsp+68h] [rbp-61h] BYREF
  __int64 *v36; // [rsp+70h] [rbp-59h] BYREF
  __int64 v37; // [rsp+78h] [rbp-51h] BYREF
  __int64 v38; // [rsp+80h] [rbp-49h] BYREF
  PROPVARIANT v39[2]; // [rsp+88h] [rbp-41h] BYREF
  __int64 v40; // [rsp+98h] [rbp-31h]
  PROPVARIANT pvar[2]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-19h]
  int v43; // [rsp+B8h] [rbp-11h] BYREF
  int v44; // [rsp+BCh] [rbp-Dh] BYREF
  __int64 v45[2]; // [rsp+C0h] [rbp-9h] BYREF
  GUID v46; // [rsp+D0h] [rbp+7h] BYREF
  __int64 *v47; // [rsp+E0h] [rbp+17h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *ppv; // [rsp+E8h] [rbp+1Fh] BYREF
  int v49; // [rsp+F0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v5 = a2;
  if ( (((_DWORD)a2 - 1) & 0xFFFFFFFD) == 0 )
  {
    v45[0] = 0LL;
    v7 = *(_QWORD **)a1;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v45);
    wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>(v7 + 5, v45);
    *(_QWORD *)&v46.Data1 = 0LL;
    v47 = (__int64 *)&v46;
    ppv = 0LL;
    LOBYTE(v49) = 1;
    Instance = CreateKSFormatFromWFXFormat(a3, &ppv);
    wil::details::out_param_t<wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v47);
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B4,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_51;
    }
    v32 = 0LL;
    v9 = *(_QWORD *)v45[0];
    v32 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(v9 + 32))(v45[0], 0LL, &v32);
    Instance = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v10);
LABEL_8:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
      goto LABEL_51;
    }
    *(_OWORD *)pvar = 0LL;
    v42 = 0LL;
    v11 = *v32;
    v47 = (__int64 *)0x4C7D1B2C233164C8LL;
    ppv = (struct KSDATAFORMAT_WAVEFORMATEX *)0x67257A6871B668BCLL;
    v49 = 1;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 **, PROPVARIANT *))(v11 + 40))(v32, &v47, pvar);
    Instance = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BA,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v12);
LABEL_11:
      PropVariantClear(pvar);
      goto LABEL_8;
    }
    *(_OWORD *)v39 = 0LL;
    v40 = 0LL;
    v13 = *(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*v32 + 40);
    if ( v5 == 3 )
    {
      v14 = v13((__int64)v32, &PKEY_Endpoint_KeywordDetector_ConnectorId, v39);
      Instance = v14;
      if ( v14 < 0 )
      {
        v15 = 447LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v14);
LABEL_16:
        PropVariantClear(v39);
        goto LABEL_11;
      }
    }
    else
    {
      v14 = v13((__int64)v32, &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId, v39);
      Instance = v14;
      if ( v14 < 0 )
      {
        v15 = 451LL;
        goto LABEL_15;
      }
    }
    v34 = 0LL;
    v47 = &v34;
    ppv = 0LL;
    LOBYTE(v49) = 1;
    Instance = CoCreateInstance(
                 &CLSID_MMDeviceEnumerator,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 (LPVOID *)&ppv);
    wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IMMDeviceEnumerator,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IMMDeviceEnumerator,wil::err_returncode_policy>>(&v47);
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)Instance);
LABEL_21:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
      goto LABEL_16;
    }
    v33 = 0LL;
    v16 = v34;
    v17 = *(__int64 (__fastcall **)(__int64, PROPVARIANT, __int64 **))(*(_QWORD *)v34 + 40LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v33);
    v18 = v17(v16, pvar[1], &v33);
    Instance = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CA,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v18);
LABEL_24:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
      goto LABEL_21;
    }
    v36 = 0LL;
    v19 = *v33;
    v47 = (__int64 *)&v36;
    ppv = 0LL;
    LOBYTE(v49) = 1;
    Instance = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v19 + 24))(
                 v33,
                 &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                 23LL);
    wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>(&v47);
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CD,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)Instance);
LABEL_27:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v36);
      goto LABEL_24;
    }
    v35 = 0LL;
    v20 = *v36;
    v35 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v20 + 56))(v36, LODWORD(v39[1]), &v35);
    Instance = v21;
    if ( v21 < 0 )
    {
      v22 = (unsigned int)v21;
      v23 = 464LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v22);
LABEL_31:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
      goto LABEL_27;
    }
    v24 = v35;
    if ( !v35 )
    {
      Instance = -2147023728;
      v22 = 2147943568LL;
      v23 = 465LL;
      goto LABEL_30;
    }
    if ( v5 == 1 )
    {
      v37 = 0LL;
      v25 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))*v35)(
              v35,
              &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
              &v37);
      Instance = v25;
      if ( v25 < 0 )
      {
        v26 = 470LL;
LABEL_37:
        v27 = (unsigned int)v25;
LABEL_38:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)v27);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v37);
        goto LABEL_31;
      }
      v43 = 0;
      v25 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 24LL))(v37, &v43);
      Instance = v25;
      if ( v25 < 0 )
      {
        v26 = 474LL;
        goto LABEL_37;
      }
      if ( v43 != 3 )
      {
        Instance = -2147418113;
        v27 = 2147549183LL;
        v26 = 475LL;
        goto LABEL_38;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v37);
      v24 = v35;
    }
    v38 = 0LL;
    v28 = *v24;
    v47 = &v38;
    ppv = 0LL;
    LOBYTE(v49) = 1;
    Instance = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, struct KSDATAFORMAT_WAVEFORMATEX **))(v28 + 104))(
                 v24,
                 1LL,
                 &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                 &ppv);
    wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>(&v47);
    if ( Instance >= 0 )
    {
      v44 = 0;
      v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v38 + 24LL))(
              v38,
              *(_QWORD *)&v46.Data1,
              **(unsigned int **)&v46.Data1,
              &v44);
      Instance = v31;
      if ( v31 >= 0 )
      {
        if ( v44 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v36);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
          PropVariantClear(v39);
          PropVariantClear(pvar);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v46,
            0LL);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v45);
          return 0LL;
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v36);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
        PropVariantClear(v39);
        PropVariantClear(pvar);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
        Instance = -2004287480;
LABEL_51:
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v46,
          0LL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v45);
        return (unsigned int)Instance;
      }
      v29 = (unsigned int)v31;
      v30 = 482LL;
    }
    else
    {
      v29 = (unsigned int)Instance;
      v30 = 479LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v29);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
    goto LABEL_31;
  }
  v46 = *a4;
  result = EffectPack::GetSharedModeEnginePeriodicity(
             *((_QWORD **)a1 + 1),
             a2,
             &a3->wFormatTag,
             &v46,
             0,
             0LL,
             0LL,
             0LL,
             0LL);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
