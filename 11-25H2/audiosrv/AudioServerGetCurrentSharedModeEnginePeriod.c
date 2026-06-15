/*
 * XREFs of AudioServerGetCurrentSharedModeEnginePeriod @ 0x180109760
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180032D50 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18003366C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180038CF4 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003A4AC (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18003E7C8 (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     MIDL_user_allocate @ 0x180042530 (MIDL_user_allocate.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180043970 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x1800497EC (-DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180050D34 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180066408 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9___ @ 0x180085C34 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_I.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     CreateAudioMediaType @ 0x1800AAA84 (CreateAudioMediaType.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1801086E0 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 *     ?DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18012B53C (-DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerGetCurrentSharedModeEnginePeriod(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        _QWORD *a4,
        int *a5)
{
  __int64 pftDueTime; // rbx
  unsigned int v9; // edi
  struct AudioSrvTelemetryProvider *v10; // rax
  int v11; // eax
  int MixFormat; // ebx
  int EndpointCharacteristicsDescriptor; // eax
  __int64 v14; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v15; // ebx
  __int64 v16; // rax
  int v17; // eax
  CEndpointStoreCache *v18; // rcx
  int EndpointStore; // eax
  struct CEndpointStore *v20; // rbx
  int v21; // eax
  struct _GUID v22; // xmm6
  struct _GUID v23; // xmm7
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v24; // edx
  HRESULT AudioMediaType; // eax
  EffectPack *v26; // rbx
  struct _GUID v27; // xmm8
  int SharedModeEnginePeriodicity; // eax
  __int64 v29; // rdx
  unsigned __int64 v30; // r9
  const struct tWAVEFORMATEX *v31; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rax
  const struct tWAVEFORMATEX *v35; // rax
  __int64 v36; // rdx
  HRESULT v37; // eax
  EffectPack *v38; // rbx
  struct _GUID v39; // xmm6
  unsigned int v40; // r8d
  int v41; // eax
  EffectPack *v42; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v43; // r8d
  int v44; // eax
  EffectPack *v45; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v46; // r8d
  int v47; // eax
  unsigned __int64 v48; // r9
  __int64 v49; // rdx
  const struct tWAVEFORMATEX *v50; // rax
  __int64 v51; // rbx
  double v52; // xmm6_8
  unsigned __int16 *v53; // r9
  int v54; // r8d
  DWORD nSamplesPerSec; // edx
  void *v56; // rax
  int v58; // [rsp+38h] [rbp-D0h]
  __int128 v59; // [rsp+88h] [rbp-80h] BYREF
  __int64 v60; // [rsp+98h] [rbp-70h]
  WAVEFORMATEX *v61; // [rsp+A0h] [rbp-68h] BYREF
  IAudioMediaType *v62; // [rsp+A8h] [rbp-60h] BYREF
  void *Src; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v64; // [rsp+B8h] [rbp-50h] BYREF
  struct CEndpointStore *v65; // [rsp+C0h] [rbp-48h] BYREF
  WAVEFORMATEX *pAudioFormat; // [rsp+C8h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v67; // [rsp+D0h] [rbp-38h] BYREF
  IAudioMediaType *ppIAudioMediaType[2]; // [rsp+D8h] [rbp-30h] BYREF
  EffectPack *v69[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v70; // [rsp+F8h] [rbp-10h]
  struct _GUID v71; // [rsp+108h] [rbp+0h] BYREF
  __int64 **v72; // [rsp+118h] [rbp+10h]
  struct tWAVEFORMATEX *v73[2]; // [rsp+128h] [rbp+20h] BYREF
  __int64 **v74; // [rsp+138h] [rbp+30h]
  struct _GUID v75; // [rsp+148h] [rbp+40h] BYREF
  struct _GUID v76; // [rsp+168h] [rbp+60h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+178h] [rbp+70h] BYREF
  IID v78; // [rsp+1B0h] [rbp+A8h]
  IID v79; // [rsp+1C0h] [rbp+B8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v78 = *(IID *)a3;
  v79 = v78;
  EtwEventActivityIdControl(4LL, &v79);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v10 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v10 + 1),
    v9,
    (struct _TP_TIMER *)L"AudioServerGetCurrentSharedModeEnginePeriod",
    pftDueTime);
  v11 = ValidateVadServerSettings((IID *)a3);
  MixFormat = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_60;
  }
  v70 = 0LL;
  *(_OWORD *)v69 = 0LL;
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        a2,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)v69);
  MixFormat = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor < 0 )
  {
    v14 = 4300LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
LABEL_6:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v69);
    goto LABEL_60;
  }
  v15 = *(_DWORD *)(a3 + 52);
  v75 = 0LL;
  v16 = *(_QWORD *)v69[0];
  v76 = 0LL;
  *(_OWORD *)ppIAudioMediaType = 0LL;
  v17 = (*(__int64 (__fastcall **)(EffectPack *))(v16 + 56))(v69[0]);
  EndpointCharacteristicsDescriptor = DeriveAudioProcessingModeConfiguration(
                                        *(_DWORD *)(a3 + 48),
                                        *(_DWORD *)(a3 + 56),
                                        *(_DWORD *)(a3 + 128),
                                        v69,
                                        v17 == 1,
                                        0,
                                        v15,
                                        0LL,
                                        0,
                                        0,
                                        0LL,
                                        &v75,
                                        &v76,
                                        (struct _GUID *)ppIAudioMediaType,
                                        0LL,
                                        0LL);
  MixFormat = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor < 0 )
  {
    v14 = 4322LL;
    goto LABEL_5;
  }
  v65 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v18, a2, &v65);
  MixFormat = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10E8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)EndpointStore);
LABEL_11:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v65);
    goto LABEL_6;
  }
  v20 = v65;
  (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v65 + 13) + 128LL))(
    *((_QWORD *)v65 + 13),
    &v67);
  v64 = 0LL;
  v60 = 0LL;
  v59 = 0LL;
  v21 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v20 + 13) + 96LL))(*((_QWORD *)v20 + 13), &v59);
  v22 = v75;
  if ( v21 >= 0 )
  {
    v72 = &v64;
    v74 = &v64;
    *(struct _GUID *)v73 = v75;
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9___(
      (__int64)&v75,
      v59,
      *((__int64 *)&v59 + 1),
      (__int64)v73);
  }
  Src = 0LL;
  v61 = 0LL;
  if ( v64 )
  {
    v73[1] = 0LL;
    v73[0] = (struct tWAVEFORMATEX *)&v61;
    v34 = *v64;
    LOBYTE(v74) = 1;
    v35 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64 *))(v34 + 48))(v64);
    MixFormat = CloneWaveFormat(v35, &v73[1]);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)v73);
    if ( MixFormat < 0 )
    {
      v36 = 4353LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v36,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)MixFormat);
      goto LABEL_35;
    }
    v62 = 0LL;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v62);
    v37 = CreateAudioMediaType(v61, v61->cbSize + 18, &v62);
    MixFormat = v37;
    if ( v37 >= 0 )
    {
      v38 = v69[1];
      *(_QWORD *)&v75.Data1 = 0LL;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v75);
      v39 = v76;
      v40 = *(_DWORD *)(a3 + 52);
      v71 = v76;
      v41 = EffectPack::DeriveDevicePipeFormatFromConnectorFormat(v38, &v71, v40, v62, (struct IAudioMediaType **)&v75);
      MixFormat = v41;
      if ( v41 >= 0 )
      {
        v42 = v69[1];
        ppIAudioMediaType[0] = 0LL;
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)ppIAudioMediaType);
        v43 = *(_DWORD *)(a3 + 52);
        v71 = v39;
        v44 = EffectPack::DeriveMixFormatFromDevicePipeFormat(
                v42,
                &v71,
                v43,
                *(struct IAudioMediaType **)&v75.Data1,
                ppIAudioMediaType,
                0LL);
        MixFormat = v44;
        if ( v44 >= 0 )
        {
          v45 = v69[1];
          pAudioFormat = 0LL;
          wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&pAudioFormat);
          v46 = *(_DWORD *)(a3 + 52);
          v71 = v39;
          v47 = EffectPack::DeriveStreamFormatFromMixFormat(
                  v45,
                  &v71,
                  v46,
                  ppIAudioMediaType[0],
                  (struct IAudioMediaType **)&pAudioFormat);
          MixFormat = v47;
          if ( v47 >= 0 )
          {
            v73[0] = (struct tWAVEFORMATEX *)&Src;
            v73[1] = 0LL;
            LOBYTE(v74) = 1;
            v50 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(WAVEFORMATEX *))(*(_QWORD *)&pAudioFormat->wFormatTag
                                                                                          + 40LL))(pAudioFormat);
            MixFormat = CloneWaveFormat(v50, &v73[1]);
            wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)v73);
            if ( MixFormat >= 0 )
            {
              v51 = (__int64)v64;
              v52 = (double)*(int *)(((__int64 (__fastcall *)(IAudioMediaType *))v62->lpVtbl->GetAudioFormat)(v62) + 4);
              *a5 = (int)((double)(*(int (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51) * v52 / 10000000.0 + 0.5);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pAudioFormat);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v75);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v62);
              goto LABEL_53;
            }
            v48 = (unsigned int)MixFormat;
            v49 = 4371LL;
          }
          else
          {
            v48 = (unsigned int)v47;
            v49 = 4369LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v49,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)v48);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pAudioFormat);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x110E,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v44);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x110B,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v41);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v75);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1106,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v37);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v62);
    goto LABEL_35;
  }
  v23 = *(struct _GUID *)ppIAudioMediaType;
  v24 = *(_DWORD *)(a3 + 52);
  *(_QWORD *)&v71.Data1 = &pAudioFormat;
  v75 = *(struct _GUID *)ppIAudioMediaType;
  pAudioFormat = 0LL;
  *(_QWORD *)v71.Data4 = 0LL;
  LOBYTE(v72) = 1;
  MixFormat = EffectPack::GetMixFormat(v69[1], v24, &v75, (struct tWAVEFORMATEX **)v71.Data4);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v71);
  if ( MixFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x111C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MixFormat);
LABEL_17:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&pAudioFormat,
      0LL);
LABEL_35:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v61,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &Src,
      0LL);
    if ( (_QWORD)v59 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v59,
        *((__int64 **)&v59 + 1));
      std::_Deallocate<16,0>((char *)v59, (const struct std::nothrow_t *)((v60 - v59) & 0xFFFFFFFFFFFFFFF8uLL));
      v60 = 0LL;
      v59 = 0LL;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v64);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v67);
    goto LABEL_11;
  }
  ppIAudioMediaType[0] = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)ppIAudioMediaType);
  AudioMediaType = CreateAudioMediaType(pAudioFormat, pAudioFormat->cbSize + 18, ppIAudioMediaType);
  MixFormat = AudioMediaType;
  if ( AudioMediaType < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x111F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)AudioMediaType);
LABEL_20:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
    goto LABEL_17;
  }
  v26 = v69[1];
  v62 = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v62);
  v27 = v76;
  SharedModeEnginePeriodicity = EffectPack::DeriveStreamFormatFromMixFormat(
                                  v26,
                                  &v76,
                                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
                                  ppIAudioMediaType[0],
                                  &v62);
  MixFormat = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v29 = 4386LL;
LABEL_23:
    v30 = (unsigned int)SharedModeEnginePeriodicity;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v30);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v62);
    goto LABEL_20;
  }
  *(_QWORD *)&v71.Data1 = &Src;
  *(_QWORD *)v71.Data4 = 0LL;
  LOBYTE(v72) = 1;
  v31 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))v62->lpVtbl->GetAudioFormat)(v62);
  MixFormat = CloneWaveFormat(v31, (struct tWAVEFORMATEX **)v71.Data4);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v71);
  if ( MixFormat < 0 )
  {
    v30 = (unsigned int)MixFormat;
    v29 = 4388LL;
    goto LABEL_24;
  }
  v32 = *(_DWORD *)(a3 + 52);
  v73[0] = (struct tWAVEFORMATEX *)&v61;
  v58 = *(_DWORD *)(a3 + 68);
  v73[1] = 0LL;
  LOBYTE(v74) = 1;
  v76 = v22;
  v75 = v27;
  v71 = v23;
  MixFormat = DeriveConnectorFormatFromStreamFormat(
                v69,
                v32,
                (IAudioMediaType *)pAudioFormat,
                &v71,
                &v75,
                &v76,
                v58,
                &v73[1]);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)v73);
  if ( MixFormat < 0 )
  {
    v30 = (unsigned int)MixFormat;
    v29 = 4399LL;
    goto LABEL_24;
  }
  v33 = *(unsigned int *)(a3 + 52);
  v71 = v22;
  SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                  (_QWORD *)v69[1],
                                  v33,
                                  &v61->wFormatTag,
                                  &v71,
                                  0,
                                  a5,
                                  0LL,
                                  0LL,
                                  0LL);
  MixFormat = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v29 = 4401LL;
    goto LABEL_23;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v62);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&pAudioFormat,
    0LL);
LABEL_53:
  v53 = (unsigned __int16 *)Src;
  v54 = *((_DWORD *)Src + 1);
  nSamplesPerSec = v61->nSamplesPerSec;
  if ( v54 != nSamplesPerSec )
    *a5 = TranslateFrameCountBetweenSamplingRates(*a5, nSamplesPerSec, v54);
  v56 = MIDL_user_allocate(v53[8] + 18LL);
  *a4 = v56;
  if ( !v56 )
  {
    MixFormat = -2147024882;
    v36 = 4416LL;
    goto LABEL_34;
  }
  memcpy_0(v56, Src, *((unsigned __int16 *)Src + 8) + 18LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v61,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &Src,
    0LL);
  if ( (_QWORD)v59 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v59,
      *((__int64 **)&v59 + 1));
    std::_Deallocate<16,0>((char *)v59, (const struct std::nothrow_t *)((v60 - v59) & 0xFFFFFFFFFFFFFFF8uLL));
    v60 = 0LL;
    v59 = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v64);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v67);
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v65);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v69);
  MixFormat = 0;
LABEL_60:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v79);
  return (unsigned int)MixFormat;
}
