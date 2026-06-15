/*
 * XREFs of AudioServerGetSharedModeEnginePeriod @ 0x180082E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180016214 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18002E8AC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003B110 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180045084 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180059D68 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     AudioServerIsFormatSupported @ 0x180083480 (AudioServerIsFormatSupported.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x18010EEA0 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerGetSharedModeEnginePeriod(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        int a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned int *a8,
        unsigned int *a9)
{
  IID v9; // xmm0
  unsigned int *v11; // rdi
  void *v14; // rax
  void *v15; // r15
  struct _FILETIME pftDueTime; // rbx
  void *v17; // rax
  void *v18; // r15
  struct _FILETIME v19; // rbx
  int v20; // eax
  int IsFormatSupported; // ebx
  int EndpointCharacteristicsDescriptor; // eax
  __int64 v23; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v24; // ebx
  __int64 v25; // rax
  int v26; // eax
  struct _GUID v27; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v28; // edx
  unsigned __int64 v29; // r9
  __int64 v30; // rdx
  unsigned int *v31; // r12
  unsigned int *v32; // r15
  __int64 v33; // rdx
  int SharedModeEnginePeriodicity; // eax
  unsigned int nSamplesPerSec; // r8d
  unsigned int v36; // edx
  __int64 v37; // r9
  __int64 v38; // r9
  __int64 v39; // r9
  int v41; // [rsp+30h] [rbp-D0h]
  void *v42; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v43; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID v44; // [rsp+90h] [rbp-70h] BYREF
  struct _GUID v45; // [rsp+A0h] [rbp-60h] BYREF
  char v46; // [rsp+B0h] [rbp-50h]
  __int128 v47; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-30h]
  struct _GUID v49; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v50; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int *v52; // [rsp+100h] [rbp+0h]
  unsigned int *v53; // [rsp+108h] [rbp+8h]
  unsigned __int16 **v54; // [rsp+110h] [rbp+10h] BYREF
  struct tWAVEFORMATEX *v55; // [rsp+118h] [rbp+18h] BYREF
  char v56; // [rsp+120h] [rbp+20h]
  IID v57; // [rsp+128h] [rbp+28h]
  IID v58; // [rsp+138h] [rbp+38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v9 = *(IID *)a3;
  v11 = a7;
  *(_QWORD *)&v49.Data1 = a1;
  v52 = a9;
  *(_QWORD *)&v44.Data1 = a7;
  v53 = a8;
  v57 = v9;
  v58 = v9;
  EtwEventActivityIdControl(4LL, &v58);
  v51 = 0LL;
  v50 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v14 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( v14 )
    {
      pftDueTime = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v14 = (void *)CWatchdogTimer<1>::CWatchdogTimer<1>(v15, pftDueTime);
      v11 = *(unsigned int **)&v44.Data1;
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v51, v14);
  }
  else
  {
    v17 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v17;
    if ( v17 )
    {
      v19 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v17 = (void *)CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v18, v19);
      v11 = *(unsigned int **)&v44.Data1;
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v50, v17);
  }
  v20 = ValidateVadServerSettings((IID *)a3);
  IsFormatSupported = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFEA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_27;
  }
  *(_QWORD *)&v45.Data1 = &v42;
  v42 = 0LL;
  *(_QWORD *)v45.Data4 = 0LL;
  v46 = 1;
  IsFormatSupported = AudioServerIsFormatSupported(v49.Data1, (int)a2, 0, a3, a4, (struct tWAVEFORMATEX **)v45.Data4);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v45);
  if ( IsFormatSupported < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFEE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)IsFormatSupported);
LABEL_12:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v42,
      0LL);
    goto LABEL_27;
  }
  v48 = 0LL;
  v47 = 0LL;
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        a2,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)&v47);
  IsFormatSupported = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor < 0 )
  {
    v23 = 4081LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
LABEL_16:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v47);
    goto LABEL_12;
  }
  v24 = *(_DWORD *)(a3 + 52);
  v49 = 0LL;
  v25 = *(_QWORD *)v47;
  v44 = 0LL;
  v45 = 0LL;
  v26 = (*(__int64 (__fastcall **)(_QWORD))(v25 + 56))(v47);
  EndpointCharacteristicsDescriptor = DeriveAudioProcessingModeConfiguration(
                                        *(_DWORD *)(a3 + 48),
                                        *(_DWORD *)(a3 + 56),
                                        *(_DWORD *)(a3 + 128),
                                        (CEndpointCharacteristics **)&v47,
                                        v26 == 1,
                                        0,
                                        v24,
                                        0LL,
                                        0,
                                        0,
                                        0LL,
                                        &v49,
                                        &v44,
                                        &v45,
                                        0LL,
                                        0LL);
  IsFormatSupported = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor < 0 )
  {
    v23 = 4103LL;
    goto LABEL_15;
  }
  v27 = v49;
  v28 = *(_DWORD *)(a3 + 52);
  v54 = &v43;
  v41 = *(_DWORD *)(a3 + 68);
  v43 = 0LL;
  v55 = 0LL;
  v56 = 1;
  IsFormatSupported = DeriveConnectorFormatFromStreamFormat(
                        (EffectPack **)&v47,
                        v28,
                        (IAudioMediaType *)a4,
                        &v45,
                        &v44,
                        &v49,
                        v41,
                        &v55);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v54);
  if ( IsFormatSupported < 0 )
  {
    v29 = (unsigned int)IsFormatSupported;
    v30 = 4113LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v29);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v43,
      0LL);
    goto LABEL_16;
  }
  v31 = v52;
  v32 = v53;
  v33 = *(unsigned int *)(a3 + 52);
  v45 = v27;
  SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                  *((_QWORD **)&v47 + 1),
                                  v33,
                                  v43,
                                  &v45,
                                  a5 != 0,
                                  a6,
                                  v11,
                                  v53,
                                  v52);
  IsFormatSupported = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v29 = (unsigned int)SharedModeEnginePeriodicity;
    v30 = 4115LL;
    goto LABEL_21;
  }
  nSamplesPerSec = a4->nSamplesPerSec;
  v36 = *((_DWORD *)v43 + 1);
  if ( nSamplesPerSec != v36 )
  {
    *a6 = TranslateFrameCountBetweenSamplingRates(*a6, v36, nSamplesPerSec);
    *v11 = TranslateFrameCountBetweenSamplingRates(*v11, *(_DWORD *)(v37 + 4), a4->nSamplesPerSec);
    *v32 = TranslateFrameCountBetweenSamplingRates(*v32, *(_DWORD *)(v38 + 4), a4->nSamplesPerSec);
    *v31 = TranslateFrameCountBetweenSamplingRates(*v31, *(_DWORD *)(v39 + 4), a4->nSamplesPerSec);
  }
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v43,
    0LL);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v47);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v42,
    0LL);
  IsFormatSupported = 0;
LABEL_27:
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v50);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v51);
  EtwEventActivityIdControl(4LL, &v58);
  return (unsigned int)IsFormatSupported;
}
