/*
 * XREFs of ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18003E7C8
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032190 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18003366C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003ED58 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180109760 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180031680 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180033F1C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x180034C78 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180034CF8 (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180037BF8 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180043970 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x1800661B8 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18007EC48 (-GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x18007FADC (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     CreateAudioMediaType @ 0x1800AAA84 (CreateAudioMediaType.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall EffectPack::DeriveDevicePipeFormatFromConnectorFormat(
        EffectPack *this,
        struct _GUID *a2,
        unsigned int a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  const struct tWAVEFORMATEX *v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  int EndpointEffect; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  struct IAudioProcessingObject *v15; // rbx
  HRESULT (__stdcall *IsOutputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  __int64 *v17; // rcx
  __int64 v18; // rax
  HRESULT v19; // eax
  HRESULT v20; // edi
  const struct tWAVEFORMATEX *v21; // rax
  int v22; // edi
  HRESULT v23; // eax
  bool v24; // zf
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  HRESULT (__stdcall *IsInputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  __int64 v27; // rdx
  HRESULT (__stdcall *v28)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  struct IAudioMediaType *v29; // rdi
  int v30; // eax
  __int64 v31; // r9
  __int64 v32; // rdx
  const struct tWAVEFORMATEX *v33; // rax
  __int64 v34; // rbx
  struct IAudioProcessingObject **v35; // [rsp+20h] [rbp-81h]
  IAudioMediaType *v36; // [rsp+30h] [rbp-71h] BYREF
  IAudioMediaType *ppIAudioMediaType; // [rsp+38h] [rbp-69h] BYREF
  __int64 v38; // [rsp+40h] [rbp-61h] BYREF
  struct IAudioMediaType *v39; // [rsp+48h] [rbp-59h] BYREF
  int v40; // [rsp+50h] [rbp-51h] BYREF
  WAVEFORMATEX *v41; // [rsp+58h] [rbp-49h] BYREF
  struct IAudioProcessingObject *v42; // [rsp+60h] [rbp-41h] BYREF
  __int64 v43; // [rsp+68h] [rbp-39h] BYREF
  WAVEFORMATEX **v44; // [rsp+70h] [rbp-31h] BYREF
  struct tWAVEFORMATEX *v45; // [rsp+78h] [rbp-29h] BYREF
  char v46; // [rsp+80h] [rbp-21h]
  WAVEFORMATEX pAudioFormat; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v48[22]; // [rsp+9Ah] [rbp-7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v8 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *, struct _GUID *))a4->lpVtbl->GetAudioFormat)(
                                       a4,
                                       a2);
  v9 = ValidateUncompressedWaveFormatEx(v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DF2,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  v42 = 0LL;
  if ( (unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    v42 = 0LL;
    EndpointEffect = EffectPack::GetEndpointEffect(this, 0LL, a3, 0LL, &v42, 0LL);
    v13 = EndpointEffect;
    if ( EndpointEffect < 0 )
    {
      v14 = 7676LL;
      goto LABEL_8;
    }
LABEL_9:
    ppIAudioMediaType = 0LL;
    v36 = 0LL;
    v15 = v42;
    if ( v10 == 1 )
    {
      *(_OWORD *)&pAudioFormat.nChannels = 0LL;
      memset(v48, 0, sizeof(v48));
      if ( !v42 )
      {
        v13 = -2004287480;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E07,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x88890008LL);
LABEL_12:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v36);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
        goto LABEL_51;
      }
      v43 = 0LL;
      IsOutputFormatSupported = v42->lpVtbl->IsOutputFormatSupported;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v43);
      if ( ((unsigned int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IAudioMediaType *, __int64 *))IsOutputFormatSupported)(
             v15,
             0LL,
             a4,
             &v43) )
      {
        v13 = -2004287480;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E0B,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x88890008LL);
        v17 = &v43;
LABEL_15:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v17);
        goto LABEL_12;
      }
      *(_DWORD *)&pAudioFormat.wFormatTag = 196606;
      pAudioFormat.nSamplesPerSec = *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4)
                                              + 4);
      pAudioFormat.nBlockAlign = 4 * pAudioFormat.nChannels;
      v18 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4);
      pAudioFormat.nAvgBytesPerSec = *(_DWORD *)(v18 + 4) * pAudioFormat.nBlockAlign;
      *(_DWORD *)&pAudioFormat.wBitsPerSample = 1441824;
      strcpy(v48, " ");
      *(_DWORD *)&v48[2] = 3;
      *(GUID *)&v48[6] = GUID_00000003_0000_0010_8000_00aa00389b71;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&ppIAudioMediaType);
      v19 = CreateAudioMediaType(&pAudioFormat, 0x28u, &ppIAudioMediaType);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E1C,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v19);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
LABEL_18:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v36);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
        v13 = v20;
        goto LABEL_51;
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v36, a4);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
    }
    else
    {
      v41 = 0LL;
      v44 = &v41;
      v45 = 0LL;
      v46 = 1;
      v21 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4);
      v22 = CloneWaveFormat(v21, &v45);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v44);
      if ( v22 < 0 )
      {
        v13 = -2004287480;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E24,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x88890008LL);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v41,
          0LL);
        goto LABEL_12;
      }
      ConvertPCMWfxToIEEEFloat(v41);
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v36);
      v23 = CreateAudioMediaType(v41, v41->cbSize + 18, &v36);
      v20 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E29,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v23);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v41,
          0LL);
        goto LABEL_18;
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&ppIAudioMediaType, v36);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v41,
        0LL);
    }
    v39 = 0LL;
    if ( v15 )
    {
      v40 = 0;
      v38 = 0LL;
      v24 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 198) + 56LL))(*((_QWORD *)this + 198)) == 0;
      lpVtbl = v15->lpVtbl;
      if ( v24 )
      {
        IsInputFormatSupported = lpVtbl->IsInputFormatSupported;
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v38);
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, __int64 *))IsInputFormatSupported)(
               v15,
               v36,
               ppIAudioMediaType,
               &v38) < 0 )
        {
          v27 = 7736LL;
LABEL_29:
          v13 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v27,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x88890008LL);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
LABEL_30:
          v17 = (__int64 *)&v39;
          goto LABEL_15;
        }
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v38 + 24LL))(v38, &v40) < 0 )
        {
          v27 = 7737LL;
          goto LABEL_29;
        }
        if ( v40 )
        {
          v27 = 7738LL;
          goto LABEL_29;
        }
      }
      else
      {
        v28 = lpVtbl->IsOutputFormatSupported;
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v38);
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, __int64 *))v28)(
               v15,
               v36,
               ppIAudioMediaType,
               &v38) < 0 )
        {
          v27 = 7743LL;
          goto LABEL_29;
        }
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v38 + 24LL))(v38, &v40) < 0 )
        {
          v27 = 7745LL;
          goto LABEL_29;
        }
        if ( v40 )
        {
          v27 = 7746LL;
          goto LABEL_29;
        }
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v39, v38);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
    }
    else
    {
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v39, ppIAudioMediaType);
    }
    v29 = v39;
    v30 = ValidateAPOInputFormat(v39);
    v13 = v30;
    if ( v30 >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 198) + 56LL))(*((_QWORD *)this + 198))
        || (v33 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))v36->lpVtbl->GetAudioFormat)(v36),
            IsCompressedSpatialFormat(v33))
        || (v34 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->GetAudioFormat)(v29),
            *(_DWORD *)(v34 + 4) == *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4)
                                              + 4)) )
      {
        v39 = 0LL;
        *a5 = v29;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v36);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
        v13 = 0;
        goto LABEL_51;
      }
      v13 = -2004287480;
      v31 = 2290679816LL;
      v32 = 7763LL;
    }
    else
    {
      v31 = (unsigned int)v30;
      v32 = 7756LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v31);
    goto LABEL_30;
  }
  v42 = 0LL;
  EndpointEffect = EffectPack::GetGfx(
                     this,
                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                     0LL,
                     &v42,
                     (struct IAudioSystemEffects2 **)v35);
  v13 = EndpointEffect;
  if ( EndpointEffect >= 0 )
    goto LABEL_9;
  v14 = 7672LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)EndpointEffect);
LABEL_51:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
  return v13;
}
