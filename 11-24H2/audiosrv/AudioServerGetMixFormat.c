/*
 * XREFs of AudioServerGetMixFormat @ 0x1800827D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x180004214 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18000DA40 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180016214 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18001E6BC (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMem.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002DFA0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002F15C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18002F4E8 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18003AFEC (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003B110 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18003C464 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     MIDL_user_allocate @ 0x18003F650 (MIDL_user_allocate.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180040830 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x180046CC0 (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180046DBC (McGenEventWrite_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004FBEC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180059D68 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18005DAD0 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ??4?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006EA80 (--4-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wis.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerGetMixFormat(__int64 a1, wchar_t *a2, __int64 a3, _QWORD *a4)
{
  void *v8; // r14
  struct _FILETIME v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  void *v12; // r14
  struct _FILETIME v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  int EndpointCharacteristicsDescriptor; // edi
  __int64 v17; // r8
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v18; // ebx
  int v19; // eax
  struct _GUID v20; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v21; // edx
  unsigned __int8 v22; // r14
  WORD v23; // r8
  struct tWAVEFORMATEX *v24; // rax
  int v25; // r8d
  int (__fastcall *v26)(struct IAudioPolicyManager *, __int64, __int64 *); // rbx
  __int64 v27; // rdx
  _DWORD *v28; // rcx
  int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v32; // edx
  int OverridingMixFormat; // ebx
  void *v34; // rax
  int v35; // eax
  int pdwType; // [rsp+20h] [rbp-E0h]
  int pvData; // [rsp+80h] [rbp-80h] BYREF
  struct tWAVEFORMATEX *v39; // [rsp+88h] [rbp-78h] BYREF
  void *Src; // [rsp+90h] [rbp-70h] BYREF
  DWORD pcbData; // [rsp+98h] [rbp-68h] BYREF
  void **p_Src; // [rsp+A0h] [rbp-60h] BYREF
  struct tWAVEFORMATEX *v43; // [rsp+A8h] [rbp-58h] BYREF
  char v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h] BYREF
  void *v46; // [rsp+C0h] [rbp-40h] BYREF
  CEndpointCharacteristics *v47[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-28h]
  void *v49; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v50; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v52; // [rsp+F8h] [rbp-8h] BYREF
  struct _GUID v53; // [rsp+100h] [rbp+0h] BYREF
  IID v54; // [rsp+110h] [rbp+10h]
  IID v55; // [rsp+120h] [rbp+20h] BYREF
  struct _GUID v56; // [rsp+130h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v54 = *(IID *)a3;
  v55 = v54;
  EtwEventActivityIdControl(4LL, &v55);
  v52 = 0LL;
  v51 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      v9 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v10 = CWatchdogTimer<1>::CWatchdogTimer<1>(v8, v9);
    }
    else
    {
      v10 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v52, v10);
  }
  else
  {
    v12 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v12 )
    {
      v13 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v14 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v12, v13);
    }
    else
    {
      v14 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v51, v14);
  }
  Src = 0LL;
  *(_OWORD *)v47 = 0LL;
  v46 = 0LL;
  v53 = 0LL;
  v48 = 0LL;
  v56 = 0LL;
  v50 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      v11,
      (int)&AudioSrv_GetMixFormat_Task_Start,
      a2,
      *(_DWORD *)(a3 + 48),
      *(_DWORD *)(a3 + 56),
      *(_DWORD *)(a3 + 68),
      *(_DWORD *)(a3 + 52));
  *a4 = 0LL;
  EndpointCharacteristicsDescriptor = ValidateVadServerSettings((IID *)a3);
  if ( EndpointCharacteristicsDescriptor >= 0 )
  {
    EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                          a2,
                                          0,
                                          (struct EndpointCharacteristicsDescriptor *)v47);
    if ( EndpointCharacteristicsDescriptor >= 0 )
    {
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v47[0] + 5, &v50);
      v18 = *(_DWORD *)(a3 + 52);
      v19 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v47[0] + 56LL))(v47[0]);
      EndpointCharacteristicsDescriptor = DeriveAudioProcessingModeConfiguration(
                                            *(_DWORD *)(a3 + 48),
                                            *(_DWORD *)(a3 + 56),
                                            *(_DWORD *)(a3 + 128),
                                            v47,
                                            v19 == 1,
                                            0,
                                            v18,
                                            0LL,
                                            0,
                                            0,
                                            0LL,
                                            0LL,
                                            &v53,
                                            &v56,
                                            0LL,
                                            0LL);
      if ( EndpointCharacteristicsDescriptor >= 0 )
      {
        v20 = v56;
        v21 = *(_DWORD *)(a3 + 52);
        p_Src = &Src;
        v43 = 0LL;
        v44 = 1;
        EndpointCharacteristicsDescriptor = EffectPack::GetMixFormat(v47[1], v21, &v56, &v43);
        wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_Src);
        if ( EndpointCharacteristicsDescriptor >= 0 )
        {
          if ( *(_DWORD *)(a3 + 140)
            && !(*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v47[0] + 56LL))(v47[0])
            && !*(_DWORD *)(a3 + 52)
            && *((_WORD *)Src + 1) == 2
            && !(unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)Src)
            && dword_18018F880[*(unsigned int *)(a3 + 48)] )
          {
            if ( (unsigned int)CEndpointCharacteristics::GetVirtualSurroundEffectMode((struct IPropertyStore **)v47[0]) )
            {
              v22 = 1;
LABEL_25:
              p_Src = (void **)&v39;
              v39 = 0LL;
              v43 = 0LL;
              v44 = 1;
              EndpointCharacteristicsDescriptor = CloneWaveFormat((const struct tWAVEFORMATEX *)Src, &v43);
              wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_Src);
              if ( EndpointCharacteristicsDescriptor < 0 )
              {
                wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                  (void **)&v39,
                  0LL);
                goto LABEL_46;
              }
              v39->nChannels = 8;
              v23 = 8 * (v39->wBitsPerSample >> 3);
              v39->nBlockAlign = v23;
              v39->nAvgBytesPerSec = v39->nSamplesPerSec * v23;
              v24 = v39;
              if ( v39->wFormatTag == 0xFFFE )
              {
                *(_DWORD *)&v39[1].nChannels = 1599;
                v24 = v39;
              }
              v25 = *(_DWORD *)(a3 + 52);
              v56 = v53;
              if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(
                                    (struct EndpointCharacteristicsDescriptor *)v47,
                                    &v56,
                                    v25,
                                    (const struct tWAVEFORMATEX *)Src,
                                    v24,
                                    0LL) )
              {
                v45 = 0LL;
                v26 = *(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                             + 32LL);
                wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v45);
                if ( v26(g_PolicyManager, a1, &v45) >= 0 )
                {
                  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v45 + 504LL))(v45) )
                  {
                    v49 = 0LL;
                    p_Src = &v49;
                    v43 = 0LL;
                    v44 = 1;
                    mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)v47[0] + 6), &v43);
                    wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(&p_Src);
                    v28 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
                    if ( *v28 > 4u && tlgKeywordOn((__int64)v28, 512LL) )
                    {
                      *(_QWORD *)&v53.Data1 = v49;
                      pcbData = *(_DWORD *)(a3 + 128);
                      pvData = v22;
                      *(_QWORD *)&v56.Data1 = 0x2000000LL;
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                        v29,
                        (int)&unk_1801AD889,
                        v30,
                        v31,
                        (__int64)&v56,
                        (__int64)&pvData,
                        (__int64)&pcbData,
                        (const WCHAR **)&v53);
                    }
                    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v49);
                  }
                  LOBYTE(v27) = 1;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v45 + 512LL))(v45, v27);
                  wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
                    &Src,
                    (void **)&v39);
                }
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v45);
              }
              EndpointCharacteristicsDescriptor = 0;
              wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                (void **)&v39,
                0LL);
              goto LABEL_39;
            }
            pvData = 0;
            pcbData = 4;
            v22 = 0;
            RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
              L"DisableGetMixFormatChange",
              0x20000018u,
              0LL,
              &pvData,
              &pcbData);
            if ( !pvData )
              goto LABEL_25;
          }
LABEL_39:
          v32 = *(_DWORD *)(a3 + 52);
          p_Src = &v46;
          v43 = 0LL;
          v44 = 1;
          v56 = v20;
          OverridingMixFormat = CEndpointCharacteristics::TryGetOverridingMixFormat(v47[0], v32, &v56, &v43);
          wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_Src);
          if ( OverridingMixFormat >= 0 && v46 )
            wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
              &Src,
              &v46);
          v34 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
          *a4 = v34;
          if ( v34 )
          {
            memcpy_0(v34, Src, *((unsigned __int16 *)Src + 8) + 18LL);
            v56 = *(struct _GUID *)*((_QWORD *)v47[1] + 196);
            v35 = PublishApoTelemetry((CEndpointStoreCache *)a2, &v56);
            if ( v35 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xE7A,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v35,
                pdwType);
          }
          else
          {
            EndpointCharacteristicsDescriptor = -2147024882;
          }
        }
      }
    }
  }
LABEL_46:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(v15, (__int64)&AudioSrv_GetMixFormat_Task_Stop, v17, 1LL, (__int64)&v56);
  if ( EndpointCharacteristicsDescriptor < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetMixFormat", 3710, EndpointCharacteristicsDescriptor);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v50);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v47);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v46,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &Src,
    0LL);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v51);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v52);
  EtwEventActivityIdControl(4LL, &v55);
  return (unsigned int)EndpointCharacteristicsDescriptor;
}
