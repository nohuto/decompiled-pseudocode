/*
 * XREFs of ?DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18012B53C
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180109760 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180034CF8 (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180034D94 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x1800661B8 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18007E0A0 (-GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x18007FADC (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800A1B1C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EffectPack::DeriveStreamFormatFromMixFormat(
        EffectPack *this,
        struct _GUID *a2,
        unsigned int a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  int Lfx; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  struct IAudioProcessingObject *v12; // rbx
  bool v13; // zf
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  HRESULT (__stdcall *IsInputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  __int64 v16; // rdx
  HRESULT (__stdcall *IsOutputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  struct IAudioMediaType *v18; // rbx
  int v19; // eax
  unsigned int v20; // edi
  int v22; // [rsp+40h] [rbp-30h] BYREF
  int v23; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  struct _GUID v25; // [rsp+50h] [rbp-20h] BYREF
  struct IAudioProcessingObject *v26; // [rsp+60h] [rbp-10h] BYREF
  struct IAudioMediaType *v27; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v27 = 0LL;
  v26 = 0LL;
  if ( !(unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    v26 = 0LL;
    Lfx = EffectPack::GetLfx(this, a3, 0LL, &v26);
    v10 = Lfx;
    if ( Lfx < 0 )
    {
      v11 = 7879LL;
      goto LABEL_6;
    }
LABEL_7:
    v12 = v26;
    if ( v26 )
    {
      wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
        &v25,
        (__int64)a4);
      v24 = 0LL;
      v13 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 198) + 56LL))(*((_QWORD *)this + 198)) == 0;
      lpVtbl = v12->lpVtbl;
      if ( v13 )
      {
        IsInputFormatSupported = lpVtbl->IsInputFormatSupported;
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v24);
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))IsInputFormatSupported)(
               v12,
               a4,
               *(_QWORD *)&v25.Data1,
               &v24) < 0 )
        {
          v16 = 7890LL;
LABEL_11:
          v10 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x88890008LL);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
          goto LABEL_27;
        }
        v22 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 24LL))(v24, &v22) < 0 )
        {
          v16 = 7893LL;
          goto LABEL_11;
        }
        if ( v22 )
        {
          v16 = 7894LL;
          goto LABEL_11;
        }
      }
      else
      {
        IsOutputFormatSupported = lpVtbl->IsOutputFormatSupported;
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v24);
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))IsOutputFormatSupported)(
               v12,
               a4,
               *(_QWORD *)&v25.Data1,
               &v24) < 0 )
        {
          v16 = 7899LL;
          goto LABEL_11;
        }
        v23 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 24LL))(v24, &v23) < 0 )
        {
          v16 = 7903LL;
          goto LABEL_11;
        }
        if ( v23 )
        {
          v16 = 7904LL;
          goto LABEL_11;
        }
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v27, v24);
      v18 = v27;
      v19 = ValidateAPOInputFormat(v27);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1EE5,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v19);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
        v10 = v20;
        goto LABEL_27;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
    }
    else
    {
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v27, (__int64)a4);
      v18 = v27;
    }
    v27 = 0LL;
    *a5 = v18;
    v10 = 0;
    goto LABEL_27;
  }
  v26 = 0LL;
  v25 = *a2;
  Lfx = EffectPack::GetStreamEffect((unsigned __int64)this, &v25, 0, a3, 0LL, &v26, 0LL);
  v10 = Lfx;
  if ( Lfx >= 0 )
    goto LABEL_7;
  v11 = 7875LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)Lfx);
LABEL_27:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
  return v10;
}
