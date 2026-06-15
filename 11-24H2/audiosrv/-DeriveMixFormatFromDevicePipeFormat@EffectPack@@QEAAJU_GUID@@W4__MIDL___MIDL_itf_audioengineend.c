/*
 * XREFs of ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180071BF8
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002D3E0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18002E8AC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800357B0 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180110120 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002FF38 (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180033CA0 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180059B18 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x180066690 (-IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x18006D6EC (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x18009E07C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     ?CheckForPreferredFormat@EffectPack@@QEAAJPEAUIAudioProcessingObject@@PEAUIAudioMediaType@@PEAPEAU3@@Z @ 0x180132F4C (-CheckForPreferredFormat@EffectPack@@QEAAJPEAUIAudioProcessingObject@@PEAUIAudioMediaType@@PEAPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall EffectPack::DeriveMixFormatFromDevicePipeFormat(
        EffectPack *this,
        struct _GUID *a2,
        unsigned int a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5,
        struct IAudioMediaType **a6)
{
  struct IAudioMediaType *v10; // r12
  struct IAudioMediaType *v11; // rsi
  int ModeEffect; // eax
  unsigned int v13; // ebx
  struct IAudioProcessingObject *v14; // rbx
  HRESULT (__stdcall *IsInputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 *v18; // rcx
  HRESULT (__stdcall *IsOutputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  int v20; // eax
  HRESULT (__stdcall *v21)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  __int64 v22; // rdx
  HRESULT (__stdcall *v23)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  __int64 v24; // rdx
  struct IAudioMediaType *v25; // rdi
  int v26; // eax
  __int64 v28; // [rsp+48h] [rbp-29h] BYREF
  struct IAudioMediaType *v29; // [rsp+50h] [rbp-21h] BYREF
  __int64 v30; // [rsp+58h] [rbp-19h] BYREF
  struct IAudioProcessingObject *v31; // [rsp+60h] [rbp-11h] BYREF
  struct IAudioMediaType *v32; // [rsp+68h] [rbp-9h] BYREF
  int v33; // [rsp+70h] [rbp-1h] BYREF
  __int64 v34[2]; // [rsp+78h] [rbp+7h] BYREF
  struct _GUID v35; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+4Fh]

  v29 = 0LL;
  v10 = 0LL;
  v34[0] = 0LL;
  v11 = 0LL;
  v32 = 0LL;
  if ( !(unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v29, (__int64)a4);
    v25 = v29;
    goto LABEL_41;
  }
  v31 = 0LL;
  v35 = *a2;
  ModeEffect = EffectPack::GetModeEffect((unsigned __int64)this, &v35, 0, a3, 0LL, &v31, 0LL);
  v13 = ModeEffect;
  if ( ModeEffect >= 0 )
  {
    v14 = v31;
    if ( !v31 )
    {
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v29, (__int64)a4);
      v25 = v29;
      goto LABEL_36;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 198) + 56LL))(*((_QWORD *)this + 198)) )
    {
      v28 = 0LL;
      wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
        &v35,
        a4);
      IsInputFormatSupported = v14->lpVtbl->IsInputFormatSupported;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v28);
      if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))IsInputFormatSupported)(
             v14,
             a4,
             *(_QWORD *)&v35.Data1,
             &v28) < 0 )
      {
        v16 = 7871LL;
LABEL_10:
        v13 = -2004287480;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x88890008LL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
        v17 = &v28;
LABEL_32:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v17);
LABEL_38:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
LABEL_47:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v34);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
        return v13;
      }
      v33 = 0;
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 24LL))(v28, &v33) < 0 )
      {
        v16 = 7874LL;
        goto LABEL_10;
      }
      if ( v33 )
      {
        v16 = 7875LL;
        goto LABEL_10;
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v29, v28);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
      v18 = &v28;
      goto LABEL_34;
    }
    v30 = 0LL;
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
      &v28,
      a4);
    IsOutputFormatSupported = v14->lpVtbl->IsOutputFormatSupported;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v30);
    v20 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, __int64, __int64 *))IsOutputFormatSupported)(
            v14,
            a4,
            v28,
            &v30);
    if ( v20 == -2005073917 )
    {
      if ( IsFixedFormatApo(v14) )
      {
        *(_QWORD *)&v35.Data1 = 0LL;
        v21 = v14->lpVtbl->IsInputFormatSupported;
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v35);
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IAudioMediaType *, struct _GUID *))v21)(
               v14,
               0LL,
               a4,
               &v35) < 0 )
        {
          v22 = 7897LL;
LABEL_20:
          v13 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v22,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x88890008LL);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
LABEL_31:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
          v17 = &v30;
          goto LABEL_32;
        }
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v28, *(__int64 *)&v35.Data1);
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v30);
        v23 = v14->lpVtbl->IsOutputFormatSupported;
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v30);
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, __int64, __int64 *))v23)(
               v14,
               *(_QWORD *)&v35.Data1,
               v28,
               &v30) < 0 )
        {
          v22 = 7902LL;
          goto LABEL_20;
        }
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(v34, *(__int64 *)&v35.Data1);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
        v10 = (struct IAudioMediaType *)v34[0];
        goto LABEL_24;
      }
    }
    else if ( v20 >= 0 )
    {
LABEL_24:
      v33 = 0;
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v30 + 24LL))(v30, &v33) >= 0 )
      {
        if ( !v33 )
        {
          wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v29, v30);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
          v18 = &v30;
LABEL_34:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v18);
          wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v32);
          v25 = v29;
          EffectPack::CheckForPreferredFormat(this, v14, v29, &v32);
          v11 = v32;
LABEL_36:
          v26 = ValidateAPOInputFormat(v25);
          v13 = v26;
          if ( v26 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1EF4,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v26);
            goto LABEL_38;
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
LABEL_41:
          if ( v11 )
          {
            v32 = 0LL;
          }
          else
          {
            v29 = 0LL;
            v11 = v25;
          }
          *a5 = v11;
          if ( a6 )
          {
            v34[0] = 0LL;
            *a6 = v10;
          }
          v13 = 0;
          goto LABEL_47;
        }
        v24 = 7912LL;
      }
      else
      {
        v24 = 7911LL;
      }
      goto LABEL_30;
    }
    v24 = 7907LL;
LABEL_30:
    v13 = -2004287480;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x88890008LL);
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EB6,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)ModeEffect);
  if ( v31 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v31->lpVtbl->Release)(v31);
  return v13;
}
