/*
 * XREFs of AudioServerGetCurrentSharedModeEnginePeriod @ 0x180110120
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18000DC00 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180016214 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180016BF4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029ADC (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002DFA0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18002E8AC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180037D2C (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003B110 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     MIDL_user_allocate @ 0x18003F650 (MIDL_user_allocate.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180040830 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180045084 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180059D68 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180071BF8 (-DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x1800A6D74 (CreateAudioMediaType.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 *     _lambda_8758ae7f98e4e08b9091e4a99aebcd74_::operator() @ 0x18010B964 (_lambda_8758ae7f98e4e08b9091e4a99aebcd74_--operator().c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x18010EEA0 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 *     ?DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18013365C (-DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerGetCurrentSharedModeEnginePeriod(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        _QWORD *a4,
        int *a5)
{
  struct _TP_TIMER **v8; // r14
  __int64 pftDueTime; // rbx
  unsigned int v10; // edi
  struct AudioSrvTelemetryProvider *v11; // rax
  struct _TP_TIMER **v12; // rax
  struct _TP_TIMER **v13; // r14
  __int64 v14; // rbx
  unsigned int v15; // edi
  struct AudioSrvTelemetryProvider *v16; // rax
  struct _TP_TIMER **v17; // rax
  int v18; // eax
  int MixFormat; // ebx
  int EndpointCharacteristicsDescriptor; // eax
  __int64 v21; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v22; // ebx
  __int64 v23; // rax
  int v24; // eax
  CEndpointStoreCache *v25; // rcx
  int EndpointStore; // eax
  struct CEndpointStore *v27; // rbx
  int v28; // eax
  struct _GUID v29; // xmm6
  __int64 *v30; // rdi
  __int64 *v31; // rbx
  struct _GUID v32; // xmm7
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v33; // edx
  HRESULT AudioMediaType; // eax
  EffectPack *v35; // rbx
  struct _GUID v36; // xmm8
  int SharedModeEnginePeriodicity; // eax
  __int64 v38; // rdx
  unsigned __int64 v39; // r9
  const struct tWAVEFORMATEX *v40; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v41; // edx
  __int64 v42; // rdx
  __int64 v43; // rax
  const struct tWAVEFORMATEX *v44; // rax
  __int64 v45; // rdx
  HRESULT v46; // eax
  EffectPack *v47; // rbx
  struct _GUID v48; // xmm6
  unsigned int v49; // r8d
  int v50; // eax
  EffectPack *v51; // rbx
  unsigned int v52; // r8d
  int v53; // eax
  EffectPack *v54; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v55; // r8d
  int v56; // eax
  unsigned __int64 v57; // r9
  __int64 v58; // rdx
  const struct tWAVEFORMATEX *v59; // rax
  __int64 v60; // rbx
  double v61; // xmm6_8
  unsigned __int16 *v62; // r9
  int v63; // r8d
  DWORD nSamplesPerSec; // edx
  void *v65; // rax
  int v67; // [rsp+38h] [rbp-D0h]
  __int128 v68; // [rsp+88h] [rbp-80h] BYREF
  __int64 v69; // [rsp+98h] [rbp-70h]
  WAVEFORMATEX *v70; // [rsp+A0h] [rbp-68h] BYREF
  IAudioMediaType *v71; // [rsp+A8h] [rbp-60h] BYREF
  void *Src; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v73; // [rsp+B8h] [rbp-50h] BYREF
  struct CEndpointStore *v74; // [rsp+C0h] [rbp-48h] BYREF
  WAVEFORMATEX *pAudioFormat; // [rsp+C8h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v76; // [rsp+D0h] [rbp-38h] BYREF
  IAudioMediaType *ppIAudioMediaType[2]; // [rsp+D8h] [rbp-30h] BYREF
  EffectPack *v78[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v79; // [rsp+F8h] [rbp-10h]
  struct _GUID v80; // [rsp+108h] [rbp+0h] BYREF
  struct _GUID v81; // [rsp+118h] [rbp+10h] BYREF
  __int64 **v82; // [rsp+128h] [rbp+20h]
  struct tWAVEFORMATEX *v83[2]; // [rsp+138h] [rbp+30h] BYREF
  __int64 **v84; // [rsp+148h] [rbp+40h]
  struct _GUID v85; // [rsp+158h] [rbp+50h] BYREF
  void *v86; // [rsp+168h] [rbp+60h] BYREF
  void *v87; // [rsp+170h] [rbp+68h] BYREF
  IID v88; // [rsp+178h] [rbp+70h]
  IID v89; // [rsp+188h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v88 = *(IID *)a3;
  v89 = v88;
  EtwEventActivityIdControl(4LL, &v89);
  v87 = 0LL;
  v86 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v8 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v10 = g_AudioSrvWatchDogTimerInMs;
      v11 = AudioSrvTelemetryProvider::Instance();
      v12 = CWatchdogTimer<1>::CWatchdogTimer<1>(
              v8,
              *((struct _TP_TIMER **)v11 + 1),
              v10,
              (struct _TP_TIMER *)L"AudioServerGetCurrentSharedModeEnginePeriod",
              pftDueTime);
    }
    else
    {
      v12 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v87, v12);
  }
  else
  {
    v13 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v13 )
    {
      v14 = (__int64)g_AudioHealthMonitor;
      v15 = g_AudioSrvWatchDogTimerInMs;
      v16 = AudioSrvTelemetryProvider::Instance();
      v17 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v13,
              *((struct _TP_TIMER **)v16 + 1),
              v15,
              (struct _TP_TIMER *)L"AudioServerGetCurrentSharedModeEnginePeriod",
              v14);
    }
    else
    {
      v17 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v86, v17);
  }
  v18 = ValidateVadServerSettings((IID *)a3);
  MixFormat = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x103E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_71;
  }
  v79 = 0LL;
  *(_OWORD *)v78 = 0LL;
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        a2,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)v78);
  MixFormat = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor < 0 )
  {
    v21 = 4164LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
LABEL_15:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v78);
    goto LABEL_71;
  }
  v22 = *(_DWORD *)(a3 + 52);
  v80 = 0LL;
  v23 = *(_QWORD *)v78[0];
  v85 = 0LL;
  *(_OWORD *)ppIAudioMediaType = 0LL;
  v24 = (*(__int64 (__fastcall **)(EffectPack *))(v23 + 56))(v78[0]);
  EndpointCharacteristicsDescriptor = DeriveAudioProcessingModeConfiguration(
                                        *(_DWORD *)(a3 + 48),
                                        *(_DWORD *)(a3 + 56),
                                        *(_DWORD *)(a3 + 128),
                                        v78,
                                        v24 == 1,
                                        0,
                                        v22,
                                        0LL,
                                        0,
                                        0,
                                        0LL,
                                        &v80,
                                        &v85,
                                        (struct _GUID *)ppIAudioMediaType,
                                        0LL,
                                        0LL);
  MixFormat = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor < 0 )
  {
    v21 = 4186LL;
    goto LABEL_14;
  }
  v74 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v25, a2, &v74);
  MixFormat = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1060,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)EndpointStore);
LABEL_20:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v74);
    goto LABEL_15;
  }
  v27 = v74;
  (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v74 + 13) + 128LL))(
    *((_QWORD *)v74 + 13),
    &v76);
  v73 = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  v28 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v27 + 13) + 96LL))(*((_QWORD *)v27 + 13), &v68);
  v29 = v80;
  if ( v28 >= 0 )
  {
    v30 = (__int64 *)*((_QWORD *)&v68 + 1);
    v31 = (__int64 *)v68;
    v82 = &v73;
    v84 = &v73;
    *(struct _GUID *)v83 = v80;
    while ( v31 != v30 )
      lambda_8758ae7f98e4e08b9091e4a99aebcd74_::operator()(v83, v31++);
  }
  Src = 0LL;
  v70 = 0LL;
  if ( v73 )
  {
    v83[1] = 0LL;
    v83[0] = (struct tWAVEFORMATEX *)&v70;
    v43 = *v73;
    LOBYTE(v84) = 1;
    v44 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64 *))(v43 + 48))(v73);
    MixFormat = CloneWaveFormat(v44, &v83[1]);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)v83);
    if ( MixFormat < 0 )
    {
      v45 = 4217LL;
LABEL_45:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v45,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)MixFormat);
      goto LABEL_46;
    }
    v71 = 0LL;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v71);
    v46 = CreateAudioMediaType(v70, v70->cbSize + 18, &v71);
    MixFormat = v46;
    if ( v46 >= 0 )
    {
      v47 = v78[1];
      *(_QWORD *)&v80.Data1 = 0LL;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v80);
      v48 = v85;
      v49 = *(_DWORD *)(a3 + 52);
      v81 = v85;
      v50 = EffectPack::DeriveDevicePipeFormatFromConnectorFormat(v47, &v81, v49, v71, (struct IAudioMediaType **)&v80);
      MixFormat = v50;
      if ( v50 >= 0 )
      {
        v51 = v78[1];
        ppIAudioMediaType[0] = 0LL;
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)ppIAudioMediaType);
        v52 = *(_DWORD *)(a3 + 52);
        v81 = v48;
        v53 = EffectPack::DeriveMixFormatFromDevicePipeFormat(
                v51,
                &v81,
                v52,
                *(struct IAudioMediaType **)&v80.Data1,
                ppIAudioMediaType,
                0LL);
        MixFormat = v53;
        if ( v53 >= 0 )
        {
          v54 = v78[1];
          pAudioFormat = 0LL;
          wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&pAudioFormat);
          v55 = *(_DWORD *)(a3 + 52);
          v81 = v48;
          v56 = EffectPack::DeriveStreamFormatFromMixFormat(
                  v54,
                  &v81,
                  v55,
                  ppIAudioMediaType[0],
                  (struct IAudioMediaType **)&pAudioFormat);
          MixFormat = v56;
          if ( v56 >= 0 )
          {
            v83[0] = (struct tWAVEFORMATEX *)&Src;
            v83[1] = 0LL;
            LOBYTE(v84) = 1;
            v59 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(WAVEFORMATEX *))(*(_QWORD *)&pAudioFormat->wFormatTag
                                                                                          + 40LL))(pAudioFormat);
            MixFormat = CloneWaveFormat(v59, &v83[1]);
            wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)v83);
            if ( MixFormat >= 0 )
            {
              v60 = (__int64)v73;
              v61 = (double)*(int *)(((__int64 (__fastcall *)(IAudioMediaType *))v71->lpVtbl->GetAudioFormat)(v71) + 4);
              *a5 = (int)((double)(*(int (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60) * v61 / 10000000.0 + 0.5);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pAudioFormat);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v80);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v71);
              goto LABEL_64;
            }
            v57 = (unsigned int)MixFormat;
            v58 = 4235LL;
          }
          else
          {
            v57 = (unsigned int)v56;
            v58 = 4233LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v58,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)v57);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pAudioFormat);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1086,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v53);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1083,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v50);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v80);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x107E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v46);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v71);
    goto LABEL_46;
  }
  v32 = *(struct _GUID *)ppIAudioMediaType;
  v33 = *(_DWORD *)(a3 + 52);
  *(_QWORD *)&v81.Data1 = &pAudioFormat;
  v80 = *(struct _GUID *)ppIAudioMediaType;
  pAudioFormat = 0LL;
  *(_QWORD *)v81.Data4 = 0LL;
  LOBYTE(v82) = 1;
  MixFormat = EffectPack::GetMixFormat(v78[1], v33, &v80, (struct tWAVEFORMATEX **)v81.Data4);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v81);
  if ( MixFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1094,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MixFormat);
LABEL_28:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&pAudioFormat,
      0LL);
LABEL_46:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v70,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &Src,
      0LL);
    if ( (_QWORD)v68 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v68, *((__int64 *)&v68 + 1));
      std::_Deallocate<16,0>((char *)v68, (const struct std::nothrow_t *)((v69 - v68) & 0xFFFFFFFFFFFFFFF8uLL));
      v69 = 0LL;
      v68 = 0LL;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v73);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v76);
    goto LABEL_20;
  }
  ppIAudioMediaType[0] = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)ppIAudioMediaType);
  AudioMediaType = CreateAudioMediaType(pAudioFormat, pAudioFormat->cbSize + 18, ppIAudioMediaType);
  MixFormat = AudioMediaType;
  if ( AudioMediaType < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1097,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)AudioMediaType);
LABEL_31:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
    goto LABEL_28;
  }
  v35 = v78[1];
  v71 = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v71);
  v36 = v85;
  SharedModeEnginePeriodicity = EffectPack::DeriveStreamFormatFromMixFormat(
                                  v35,
                                  &v85,
                                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
                                  ppIAudioMediaType[0],
                                  &v71);
  MixFormat = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v38 = 4250LL;
LABEL_34:
    v39 = (unsigned int)SharedModeEnginePeriodicity;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v38,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v39);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v71);
    goto LABEL_31;
  }
  *(_QWORD *)&v81.Data1 = &Src;
  *(_QWORD *)v81.Data4 = 0LL;
  LOBYTE(v82) = 1;
  v40 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))v71->lpVtbl->GetAudioFormat)(v71);
  MixFormat = CloneWaveFormat(v40, (struct tWAVEFORMATEX **)v81.Data4);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v81);
  if ( MixFormat < 0 )
  {
    v39 = (unsigned int)MixFormat;
    v38 = 4252LL;
    goto LABEL_35;
  }
  v41 = *(_DWORD *)(a3 + 52);
  v83[0] = (struct tWAVEFORMATEX *)&v70;
  v67 = *(_DWORD *)(a3 + 68);
  v83[1] = 0LL;
  LOBYTE(v84) = 1;
  v85 = v29;
  v80 = v36;
  v81 = v32;
  MixFormat = DeriveConnectorFormatFromStreamFormat(
                v78,
                v41,
                (IAudioMediaType *)pAudioFormat,
                &v81,
                &v80,
                &v85,
                v67,
                &v83[1]);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)v83);
  if ( MixFormat < 0 )
  {
    v39 = (unsigned int)MixFormat;
    v38 = 4263LL;
    goto LABEL_35;
  }
  v42 = *(unsigned int *)(a3 + 52);
  v81 = v29;
  SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                  (_QWORD *)v78[1],
                                  v42,
                                  &v70->wFormatTag,
                                  &v81,
                                  0,
                                  a5,
                                  0LL,
                                  0LL,
                                  0LL);
  MixFormat = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v38 = 4265LL;
    goto LABEL_34;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v71);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&pAudioFormat,
    0LL);
LABEL_64:
  v62 = (unsigned __int16 *)Src;
  v63 = *((_DWORD *)Src + 1);
  nSamplesPerSec = v70->nSamplesPerSec;
  if ( v63 != nSamplesPerSec )
    *a5 = TranslateFrameCountBetweenSamplingRates(*a5, nSamplesPerSec, v63);
  v65 = MIDL_user_allocate(v62[8] + 18LL);
  *a4 = v65;
  if ( !v65 )
  {
    MixFormat = -2147024882;
    v45 = 4280LL;
    goto LABEL_45;
  }
  memcpy_0(v65, Src, *((unsigned __int16 *)Src + 8) + 18LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v70,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &Src,
    0LL);
  if ( (_QWORD)v68 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v68, *((__int64 *)&v68 + 1));
    std::_Deallocate<16,0>((char *)v68, (const struct std::nothrow_t *)((v69 - v68) & 0xFFFFFFFFFFFFFFF8uLL));
    v69 = 0LL;
    v68 = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v73);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v76);
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v74);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v78);
  MixFormat = 0;
LABEL_71:
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v86);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v87);
  EtwEventActivityIdControl(4LL, &v89);
  return (unsigned int)MixFormat;
}
