/*
 * XREFs of AudioServerGetDevicePeriod @ 0x180082430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180016214 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18002CFEC (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E710 (-GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003B110 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180045084 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180059D68 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerGetDevicePeriod(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6)
{
  void *v8; // r14
  struct _FILETIME pftDueTime; // rbx
  __int64 v10; // rax
  void *v11; // r14
  struct _FILETIME v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  int ConnectorFormatForProcessingMode; // ebx
  int EndpointCharacteristicsDescriptor; // eax
  struct tWAVEFORMATEX *v17; // rdx
  __int64 v18; // rdx
  int v19; // eax
  struct _GUID v20; // xmm6
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  int SharedModeEnginePeriodicity; // eax
  unsigned __int16 *v25; // [rsp+88h] [rbp-80h] BYREF
  int v26; // [rsp+90h] [rbp-78h] BYREF
  EffectPack *v27[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-60h]
  struct _GUID v29; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int16 **v32; // [rsp+D8h] [rbp-30h] BYREF
  struct tWAVEFORMATEX *v33; // [rsp+E0h] [rbp-28h] BYREF
  char v34; // [rsp+E8h] [rbp-20h]
  IID v35; // [rsp+F0h] [rbp-18h]
  IID v36; // [rsp+100h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v35 = *(IID *)a3;
  v36 = v35;
  EtwEventActivityIdControl(4LL, &v36);
  v31 = 0LL;
  v30 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      pftDueTime = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v10 = CWatchdogTimer<1>::CWatchdogTimer<1>(v8, pftDueTime);
    }
    else
    {
      v10 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v31, v10);
  }
  else
  {
    v11 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v11 )
    {
      v12 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v13 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v11, v12);
    }
    else
    {
      v13 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v30, v13);
  }
  v14 = ValidateVadServerSettings((IID *)a3);
  ConnectorFormatForProcessingMode = v14;
  if ( v14 >= 0 )
  {
    v28 = 0LL;
    *(_OWORD *)v27 = 0LL;
    EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                          a2,
                                          0,
                                          (struct EndpointCharacteristicsDescriptor *)v27);
    ConnectorFormatForProcessingMode = EndpointCharacteristicsDescriptor;
    if ( EndpointCharacteristicsDescriptor < 0 )
    {
      v18 = 4004LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
LABEL_15:
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v27);
      goto LABEL_29;
    }
    if ( a5 )
    {
      v29 = 0LL;
      v19 = (*(__int64 (__fastcall **)(EffectPack *))(*(_QWORD *)v27[0] + 56LL))(v27[0]);
      EndpointCharacteristicsDescriptor = DeriveAudioProcessingModeConfiguration(
                                            *(_DWORD *)(a3 + 48),
                                            *(_DWORD *)(a3 + 56),
                                            *(_DWORD *)(a3 + 128),
                                            v27,
                                            v19 == 1,
                                            0,
                                            eHostProcessConnector,
                                            0LL,
                                            0,
                                            0,
                                            0LL,
                                            &v29,
                                            0LL,
                                            0LL,
                                            0LL,
                                            0LL);
      ConnectorFormatForProcessingMode = EndpointCharacteristicsDescriptor;
      if ( EndpointCharacteristicsDescriptor < 0 )
      {
        v18 = 4028LL;
        goto LABEL_14;
      }
      v20 = v29;
      v32 = &v25;
      v25 = 0LL;
      v33 = 0LL;
      v34 = 1;
      ConnectorFormatForProcessingMode = EffectPack::GetConnectorFormatForProcessingMode(
                                           (CEndpointCharacteristics **)v27[1],
                                           eHostProcessConnector,
                                           &v29,
                                           &v33);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v32);
      if ( ConnectorFormatForProcessingMode < 0 )
      {
        v21 = (unsigned int)ConnectorFormatForProcessingMode;
        v22 = 4032LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)v21);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v25,
          0LL);
        goto LABEL_15;
      }
      v26 = 0;
      v29 = v20;
      SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                      (_QWORD *)v27[1],
                                      0LL,
                                      v25,
                                      &v29,
                                      0,
                                      &v26,
                                      0LL,
                                      0LL,
                                      0LL);
      ConnectorFormatForProcessingMode = SharedModeEnginePeriodicity;
      if ( SharedModeEnginePeriodicity < 0 )
      {
        v21 = (unsigned int)SharedModeEnginePeriodicity;
        v22 = 4036LL;
        goto LABEL_21;
      }
      *a5 = (unsigned int)(int)((double)v26 * 10000000.0 / (double)*((int *)v25 + 1) + 0.5);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v25,
        0LL);
    }
    if ( !a6
      || (EndpointCharacteristicsDescriptor = EffectPack::GetMinProcessingPeriodForExclusiveMode(v27[1], v17, a6),
          ConnectorFormatForProcessingMode = EndpointCharacteristicsDescriptor,
          EndpointCharacteristicsDescriptor >= 0) )
    {
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v27);
      ConnectorFormatForProcessingMode = 0;
      goto LABEL_29;
    }
    v18 = 4044LL;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFA1,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v14);
LABEL_29:
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v30);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v31);
  EtwEventActivityIdControl(4LL, &v36);
  return (unsigned int)ConnectorFormatForProcessingMode;
}
