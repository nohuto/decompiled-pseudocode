/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1400340F0
 * Callers:
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x1400333F0 (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140033CF8 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14004ED20 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001D1E8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140026BA8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027A18 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x140037890 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@UAPO_REG_PROPERTIES@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x14003DC14 (--1-$out_param_t@V-$unique_ptr@UAPO_REG_PROPERTIES@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall FillAPOInitSystemEffectsStructure(
        struct IMMDevice *a1,
        struct _GUID *a2,
        struct _GUID *a3,
        BOOL a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct APOInitSystemEffects2 *a6)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v11; // eax
  int v12; // ebx
  struct IMMDeviceVtbl *v13; // rax
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  bool v20; // bl
  const PROPERTYKEY *v21; // rax
  unsigned int v22; // r14d
  HRESULT v23; // eax
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rdx
  struct IMMDeviceVtbl *v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 (__fastcall *v32)(__int64, unsigned int *, _QWORD, __int64, int *, IMMDeviceCollection **, UINT *, UINT *); // rsi
  __int64 v33; // rcx
  IPropertyStore *v34; // rax
  IPropertyStore *v35; // rax
  IMMDeviceCollection *v36; // rax
  int *ppv; // [rsp+28h] [rbp-E0h]
  __int64 *v39; // [rsp+58h] [rbp-B0h] BYREF
  IPropertyStore *v40; // [rsp+60h] [rbp-A8h] BYREF
  IMMDeviceCollection *v41; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int *v42; // [rsp+70h] [rbp-98h] BYREF
  void *v43; // [rsp+78h] [rbp-90h] BYREF
  LPVOID v44; // [rsp+80h] [rbp-88h] BYREF
  IPropertyStore *v45; // [rsp+88h] [rbp-80h] BYREF
  UINT v46; // [rsp+90h] [rbp-78h] BYREF
  UINT v47; // [rsp+94h] [rbp-74h] BYREF
  struct tWAVEFORMATEX *v48; // [rsp+98h] [rbp-70h] BYREF
  PROPVARIANT v49[2]; // [rsp+A0h] [rbp-68h] BYREF
  struct tWAVEFORMATEX *Src; // [rsp+B0h] [rbp-58h]
  struct tWAVEFORMATEX **v51; // [rsp+B8h] [rbp-50h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *v52; // [rsp+C0h] [rbp-48h] BYREF
  char v53; // [rsp+C8h] [rbp-40h]
  int v54[2]; // [rsp+D0h] [rbp-38h] BYREF
  char v55; // [rsp+D8h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v57; // [rsp+F0h] [rbp-18h]
  PROPVARIANT *v58; // [rsp+F8h] [rbp-10h]
  char v59; // [rsp+100h] [rbp-8h]
  GUID fmtid; // [rsp+108h] [rbp+0h] BYREF
  DWORD pid; // [rsp+118h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  memset_0(a6, 0, sizeof(struct APOInitSystemEffects2));
  lpVtbl = a1->lpVtbl;
  v45 = 0LL;
  v11 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))lpVtbl->OpenPropertyStore)(
          a1,
          0LL,
          &v45);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = a1->lpVtbl;
    v39 = 0LL;
    v14 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 **))v13->QueryInterface)(
            a1,
            &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
            &v39);
    v12 = v14;
    if ( v14 < 0 )
    {
      v15 = (unsigned int)v14;
      v16 = 49LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
        (const char *)v15);
LABEL_6:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v39);
      goto LABEL_50;
    }
    if ( !v39 )
    {
      v12 = -2147418113;
      v15 = 2147549183LL;
      v16 = 50LL;
      goto LABEL_5;
    }
    v40 = 0LL;
    v17 = *v39;
    v40 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, IPropertyStore **))(v17 + 40))(v39, 0LL, &v40);
    v12 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
        (const char *)(unsigned int)v18);
LABEL_11:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v40);
      goto LABEL_6;
    }
    *(_OWORD *)pvar = 0LL;
    v57 = 0LL;
    *(_QWORD *)v54 = pvar;
    v55 = 1;
    v19 = ((__int64 (__fastcall *)(IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))v45->lpVtbl->GetValue)(
            v45,
            &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
            pvar);
    v12 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
        (const char *)(unsigned int)v19);
      PropVariantClear(pvar);
      goto LABEL_11;
    }
    v20 = LOWORD(pvar[0]) == 72;
    PropVariantClear(pvar);
    v41 = 0LL;
    v46 = 0;
    v47 = 0;
    v21 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    v22 = 3;
    if ( a5 != eKeywordDetectorConnector )
      v21 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v21->fmtid;
    pid = v21->pid;
    if ( (*(unsigned int (__fastcall **)(__int64 *))(*v39 + 48))(v39) || v20 )
      goto LABEL_49;
    *(_OWORD *)v49 = 0LL;
    Src = 0LL;
    v58 = v49;
    v59 = 1;
    v42 = 0LL;
    if ( a5 != eKeywordDetectorConnector )
      v22 = 0;
    if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v45->lpVtbl->GetValue)(v45, &fmtid, v49) >= 0
      && LOWORD(v49[0]) == 65 )
    {
      v51 = (struct tWAVEFORMATEX **)&v42;
      v52 = 0LL;
      v53 = 1;
      if ( LODWORD(v49[1]) < 0x12uLL || LODWORD(v49[1]) < (unsigned __int64)Src->cbSize + 18 )
        v12 = -2147024809;
      else
        v12 = CreateKSFormatFromWFXFormat(Src, &v52);
      wil::details::out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v51);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5D,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
          (const char *)(unsigned int)v12);
LABEL_28:
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v42,
          0LL);
        PropVariantClear(v49);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v41);
        goto LABEL_11;
      }
      goto LABEL_41;
    }
    v44 = 0LL;
    v23 = CoCreateInstance(
            &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
            0LL,
            0x17u,
            &GUID_4495581a_01b9_4a8f_b05c_741a6c983d28,
            &v44);
    v12 = v23;
    if ( v23 >= 0 )
    {
      v43 = 0LL;
      GetId = a1->lpVtbl->GetId;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &v43,
        0LL);
      v25 = ((__int64 (__fastcall *)(struct IMMDevice *, void **))GetId)(a1, &v43);
      v12 = v25;
      if ( v25 >= 0 )
      {
        v48 = 0LL;
        v26 = *(_QWORD *)v44;
        v51 = &v48;
        v52 = 0LL;
        v53 = 1;
        v12 = (*(__int64 (__fastcall **)(LPVOID, void *, _QWORD, _QWORD, struct KSDATAFORMAT_WAVEFORMATEX **))(v26 + 296))(
                v44,
                v43,
                v22,
                0LL,
                &v52);
        wil::details::out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v51);
        if ( v12 >= 0 )
        {
          v51 = (struct tWAVEFORMATEX **)&v42;
          v52 = 0LL;
          v53 = 1;
          v12 = CreateKSFormatFromWFXFormat(v48, &v52);
          wil::details::out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v51);
          if ( v12 >= 0 )
          {
            wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              (void **)&v48,
              0LL);
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v43);
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v44);
LABEL_41:
            v28 = a1->lpVtbl;
            *(_QWORD *)v54 = 0LL;
            ppv = v54;
            v29 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v28->Activate)(
                    a1,
                    &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
                    23LL);
            v12 = v29;
            if ( v29 < 0 )
            {
              v30 = 112LL;
LABEL_43:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v30,
                (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
                (const char *)(unsigned int)v29);
              ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v54);
              goto LABEL_28;
            }
            v31 = *(_QWORD *)v54;
            v32 = *(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, __int64, int *, IMMDeviceCollection **, UINT *, UINT *))(**(_QWORD **)v54 + 120LL);
            v33 = (__int64)v41;
            v41 = 0LL;
            if ( v33 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
            LODWORD(ppv) = v22;
            v29 = v32(v31, v42, *v42, 1LL, ppv, &v41, &v46, &v47);
            v12 = v29;
            if ( v29 < 0 )
            {
              v30 = 115LL;
              goto LABEL_43;
            }
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v54);
            wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              (void **)&v42,
              0LL);
            PropVariantClear(v49);
LABEL_49:
            a6->APOInit.cbSize = 88;
            a6->APOInit.clsid = *a2;
            v34 = v45;
            v45 = 0LL;
            a6->pAPOEndpointProperties = v34;
            v35 = v40;
            v40 = 0LL;
            a6->pAPOSystemEffectsProperties = v35;
            a6->pReserved = 0LL;
            v36 = v41;
            v41 = 0LL;
            a6->pDeviceCollection = v36;
            a6->nSoftwareIoDeviceInCollection = v46;
            a6->nSoftwareIoConnectorIndex = v47;
            a6->AudioProcessingMode = *a3;
            a6->InitializeForDiscoveryOnly = a4;
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v41);
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v40);
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v39);
            v12 = 0;
            goto LABEL_50;
          }
          v27 = 107LL;
        }
        else
        {
          v27 = 105LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
          (const char *)(unsigned int)v12);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v48,
          0LL);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x65,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
          (const char *)(unsigned int)v25);
      }
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v43);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
        (const char *)(unsigned int)v23);
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v44);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
    (const char *)(unsigned int)v11);
LABEL_50:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v45);
  return (unsigned int)v12;
}
