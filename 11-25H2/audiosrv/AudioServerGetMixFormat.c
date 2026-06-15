/*
 * XREFs of AudioServerGetMixFormat @ 0x18008D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x180003F38 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x180012EB4 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180032D50 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180033F1C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800342A8 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180038CF4 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003A4AC (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18003B800 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     MIDL_user_allocate @ 0x180042530 (MIDL_user_allocate.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180043970 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18004E288 (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x180051810 (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18005190C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180058518 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMem.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005E3AC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180066408 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18006B8B4 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ??4?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800811E0 (--4-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wis.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerGetMixFormat(void *a1, wchar_t *a2, __int64 a3, _QWORD *a4)
{
  IID v4; // xmm0
  __int64 v7; // rbx
  unsigned int v8; // edi
  struct AudioSrvTelemetryProvider *v9; // rax
  __int64 v10; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v11; // r14
  __int64 v12; // rcx
  int EndpointCharacteristicsDescriptor; // edi
  __int64 v14; // r8
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v15; // ebx
  int v16; // eax
  struct _GUID v17; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v18; // edx
  unsigned __int8 v19; // r14
  WORD v20; // r8
  struct tWAVEFORMATEX *v21; // rax
  int v22; // r8d
  int (__fastcall *v23)(struct IAudioPolicyManager *, void *, __int64 *); // rbx
  __int64 v24; // rdx
  _DWORD *v25; // rcx
  int v26; // ecx
  __int64 v27; // r8
  __int64 v28; // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v29; // edx
  int OverridingMixFormat; // ebx
  void *v31; // rax
  int v32; // eax
  int pdwType; // [rsp+28h] [rbp-E0h]
  int pvData; // [rsp+88h] [rbp-80h] BYREF
  struct tWAVEFORMATEX *v36; // [rsp+90h] [rbp-78h] BYREF
  void *Src; // [rsp+98h] [rbp-70h] BYREF
  DWORD pcbData; // [rsp+A0h] [rbp-68h] BYREF
  void **p_Src; // [rsp+A8h] [rbp-60h] BYREF
  struct tWAVEFORMATEX *v40; // [rsp+B0h] [rbp-58h] BYREF
  char v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-48h] BYREF
  void *v43; // [rsp+C8h] [rbp-40h] BYREF
  void *v44; // [rsp+D0h] [rbp-38h] BYREF
  CEndpointCharacteristics *v45[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v46; // [rsp+E8h] [rbp-20h]
  _QWORD *v47; // [rsp+F0h] [rbp-18h]
  __int64 v48[2]; // [rsp+F8h] [rbp-10h] BYREF
  struct _GUID v49; // [rsp+108h] [rbp+0h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+118h] [rbp+10h] BYREF
  IID v51; // [rsp+150h] [rbp+48h]
  IID v52; // [rsp+160h] [rbp+58h] BYREF
  struct _GUID v53; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v4 = *(IID *)a3;
  v43 = a1;
  v47 = a4;
  v51 = v4;
  v52 = v4;
  EtwEventActivityIdControl(4LL, &v52);
  v7 = (__int64)g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v9 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v9 + 1),
    v8,
    (struct _TP_TIMER *)L"AudioServerGetMixFormat",
    v7);
  v11 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)(a3 + 52);
  Src = 0LL;
  *(_OWORD *)v45 = 0LL;
  v44 = 0LL;
  v49 = 0LL;
  v46 = 0LL;
  v53 = 0LL;
  v48[0] = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      v10,
      (int)&AudioSrv_GetMixFormat_Task_Start,
      a2,
      *(_DWORD *)(a3 + 48),
      *(_DWORD *)(a3 + 56),
      *(_DWORD *)(a3 + 68),
      *v11);
  *v47 = 0LL;
  EndpointCharacteristicsDescriptor = ValidateVadServerSettings((IID *)a3);
  if ( EndpointCharacteristicsDescriptor >= 0 )
  {
    EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                          a2,
                                          0,
                                          (struct EndpointCharacteristicsDescriptor *)v45);
    if ( EndpointCharacteristicsDescriptor >= 0 )
    {
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v45[0] + 5, v48);
      v15 = *v11;
      v16 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v45[0] + 56LL))(v45[0]);
      EndpointCharacteristicsDescriptor = DeriveAudioProcessingModeConfiguration(
                                            *(_DWORD *)(a3 + 48),
                                            *(_DWORD *)(a3 + 56),
                                            *(_DWORD *)(a3 + 128),
                                            v45,
                                            v16 == 1,
                                            0,
                                            v15,
                                            0LL,
                                            0,
                                            0,
                                            0LL,
                                            0LL,
                                            &v49,
                                            &v53,
                                            0LL,
                                            0LL);
      if ( EndpointCharacteristicsDescriptor >= 0 )
      {
        v17 = v53;
        v18 = *v11;
        p_Src = &Src;
        v40 = 0LL;
        v41 = 1;
        EndpointCharacteristicsDescriptor = EffectPack::GetMixFormat(v45[1], v18, &v53, &v40);
        wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_Src);
        if ( EndpointCharacteristicsDescriptor >= 0 )
        {
          if ( *(_DWORD *)(a3 + 140)
            && !(*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v45[0] + 56LL))(v45[0])
            && *v11 == eHostProcessConnector
            && *((_WORD *)Src + 1) == 2
            && !(unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)Src)
            && dword_1801856A0[*(unsigned int *)(a3 + 48)] )
          {
            if ( (unsigned int)CEndpointCharacteristics::GetVirtualSurroundEffectMode((struct IPropertyStore **)v45[0]) )
            {
              v19 = 1;
LABEL_16:
              p_Src = (void **)&v36;
              v36 = 0LL;
              v40 = 0LL;
              v41 = 1;
              EndpointCharacteristicsDescriptor = CloneWaveFormat((const struct tWAVEFORMATEX *)Src, &v40);
              wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_Src);
              if ( EndpointCharacteristicsDescriptor < 0 )
              {
                wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                  (void **)&v36,
                  0LL);
                goto LABEL_37;
              }
              v36->nChannels = 8;
              v20 = 8 * (v36->wBitsPerSample >> 3);
              v36->nBlockAlign = v20;
              v36->nAvgBytesPerSec = v36->nSamplesPerSec * v20;
              v21 = v36;
              if ( v36->wFormatTag == 0xFFFE )
              {
                *(_DWORD *)&v36[1].nChannels = 1599;
                v21 = v36;
              }
              v22 = *(_DWORD *)(a3 + 52);
              v53 = v49;
              if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(
                                    (struct EndpointCharacteristicsDescriptor *)v45,
                                    &v53,
                                    v22,
                                    (const struct tWAVEFORMATEX *)Src,
                                    v21,
                                    0LL) )
              {
                v42 = 0LL;
                v23 = *(int (__fastcall **)(struct IAudioPolicyManager *, void *, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                            + 32LL);
                wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v42);
                if ( v23(g_PolicyManager, v43, &v42) >= 0 )
                {
                  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v42 + 504LL))(v42) )
                  {
                    v43 = 0LL;
                    p_Src = &v43;
                    v40 = 0LL;
                    v41 = 1;
                    mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)v45[0] + 6), &v40);
                    wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(&p_Src);
                    v25 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
                    if ( *v25 > 4u && tlgKeywordOn((__int64)v25, 512LL) )
                    {
                      *(_QWORD *)&v49.Data1 = v43;
                      pcbData = *(_DWORD *)(a3 + 128);
                      pvData = v19;
                      *(_QWORD *)&v53.Data1 = 0x2000000LL;
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                        v26,
                        (int)&unk_1801A2AE8,
                        v27,
                        v28,
                        (__int64)&v53,
                        (__int64)&pvData,
                        (__int64)&pcbData,
                        (const WCHAR **)&v49);
                    }
                    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v43);
                  }
                  LOBYTE(v24) = 1;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 512LL))(v42, v24);
                  wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
                    &Src,
                    (void **)&v36);
                }
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
              }
              EndpointCharacteristicsDescriptor = 0;
              wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                (void **)&v36,
                0LL);
              goto LABEL_30;
            }
            pvData = 0;
            pcbData = 4;
            v19 = 0;
            RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
              L"DisableGetMixFormatChange",
              0x20000018u,
              0LL,
              &pvData,
              &pcbData);
            if ( !pvData )
              goto LABEL_16;
          }
LABEL_30:
          v29 = *(_DWORD *)(a3 + 52);
          p_Src = &v44;
          v40 = 0LL;
          v41 = 1;
          v53 = v17;
          OverridingMixFormat = CEndpointCharacteristics::TryGetOverridingMixFormat(v45[0], v29, &v53, &v40);
          wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_Src);
          if ( OverridingMixFormat >= 0 && v44 )
            wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
              &Src,
              &v44);
          v31 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
          v12 = (__int64)v47;
          *v47 = v31;
          if ( v31 )
          {
            memcpy_0(v31, Src, *((unsigned __int16 *)Src + 8) + 18LL);
            v53 = *(struct _GUID *)*((_QWORD *)v45[1] + 196);
            v32 = PublishApoTelemetry((CEndpointStoreCache *)a2, &v53);
            if ( v32 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xF02,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v32,
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
LABEL_37:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(v12, (__int64)&AudioSrv_GetMixFormat_Task_Stop, v14, 1, (__int64)&v53);
  if ( EndpointCharacteristicsDescriptor < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetMixFormat", 3846, EndpointCharacteristicsDescriptor);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v48);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v45);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v44,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &Src,
    0LL);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v52);
  return (unsigned int)EndpointCharacteristicsDescriptor;
}
