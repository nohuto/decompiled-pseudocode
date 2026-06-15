/*
 * XREFs of s_apmSetPersistedDefaultAudioEndpoint @ 0x1800FCB00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800A1FF8 (--1-$out_param_t@V-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTa.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A206C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
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

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_apmSetPersistedDefaultAudioEndpoint(
        RPC_BINDING_HANDLE Binding,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  struct _TP_TIMER **v9; // rax
  struct _TP_TIMER **v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // edi
  struct AudioSrvTelemetryProvider *v13; // rax
  struct _TP_TIMER **v14; // rax
  struct _TP_TIMER **v15; // rsi
  __int64 v16; // rbx
  unsigned int v17; // edi
  struct AudioSrvTelemetryProvider *v18; // rax
  unsigned int v19; // eax
  int v20; // ebx
  bool v21; // dl
  char v22; // al
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // eax
  int v28; // edi
  int MMDeviceFromInterfaceId; // eax
  __int64 v30; // rax
  HRESULT v31; // eax
  unsigned __int64 i; // rbx
  int v33; // eax
  __int64 v35; // rdx
  __int64 *v36; // [rsp+38h] [rbp-31h] BYREF
  __int64 v37; // [rsp+40h] [rbp-29h] BYREF
  unsigned int Pid; // [rsp+48h] [rbp-21h] BYREF
  unsigned int *v39; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-11h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-9h] BYREF
  void *v42; // [rsp+68h] [rbp-1h] BYREF
  void *v43; // [rsp+70h] [rbp+7h] BYREF
  unsigned int **v44; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v45; // [rsp+80h] [rbp+17h] BYREF
  char v46; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+57h]

  v43 = 0LL;
  v42 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v9 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      v11 = (__int64)g_AudioHealthMonitor;
      v12 = g_AudioSrvWatchDogTimerInMs;
      v13 = AudioSrvTelemetryProvider::Instance();
      v9 = CWatchdogTimer<1>::CWatchdogTimer<1>(
             v10,
             *((struct _TP_TIMER **)v13 + 1),
             v12,
             (struct _TP_TIMER *)L"s_apmSetPersistedDefaultAudioEndpoint",
             v11);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v43, v9);
  }
  else
  {
    v14 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( v14 )
    {
      v16 = (__int64)g_AudioHealthMonitor;
      v17 = g_AudioSrvWatchDogTimerInMs;
      v18 = AudioSrvTelemetryProvider::Instance();
      v14 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v15,
              *((struct _TP_TIMER **)v18 + 1),
              v17,
              (struct _TP_TIMER *)L"s_apmSetPersistedDefaultAudioEndpoint",
              v16);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v42, v14);
  }
  Pid = 0;
  v19 = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  if ( !v19 )
  {
    v21 = Pid == GetCurrentProcessId();
    if ( !g_ADGProcess || (v22 = 1, Pid != LODWORD(g_ADGProcess[2].OwningThread)) )
      v22 = 0;
    if ( v21 || v22 )
    {
      v35 = 88LL;
    }
    else
    {
      if ( a4 <= 2 )
      {
        v23 = *(_QWORD *)g_PolicyManager;
        v36 = 0LL;
        v24 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 **))(v23 + 40))(
                g_PolicyManager,
                a2,
                &v36);
        v20 = v24;
        if ( v24 < 0 )
        {
          v25 = (unsigned int)v24;
          v26 = 98LL;
LABEL_18:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v26,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
            (const char *)v25);
LABEL_19:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v36);
          goto LABEL_44;
        }
        if ( !v36 )
        {
          v20 = -2147024809;
          v25 = 2147942487LL;
          v26 = 99LL;
          goto LABEL_18;
        }
        v27 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(*v36 + 24))(v36, a3, a4, a5);
        v28 = v27;
        if ( v27 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x65,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
            (const char *)(unsigned int)v27);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v36);
          v20 = v28;
          goto LABEL_44;
        }
        v37 = 0LL;
        if ( a5 )
        {
          wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v37);
          MMDeviceFromInterfaceId = mmdDevGetMMDeviceFromInterfaceId(a5, &v37);
          v20 = MMDeviceFromInterfaceId;
          if ( MMDeviceFromInterfaceId < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x6C,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
              (const char *)(unsigned int)MMDeviceFromInterfaceId);
LABEL_27:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v37);
            goto LABEL_19;
          }
          v40 = 0LL;
          v39 = 0LL;
          v30 = *v36;
          v44 = &v39;
          v45 = 0LL;
          v46 = 1;
          v20 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *, __int64 *))(v30 + 56))(v36, &v40, &v45);
          wil::details::out_param_t<wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v44);
          if ( v20 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x72,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
              (const char *)(unsigned int)v20);
LABEL_30:
            wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              (void **)&v39,
              0LL);
            goto LABEL_27;
          }
          if ( v40 )
          {
            ppv = 0LL;
            v31 = CoCreateInstance(
                    &GUID_06cca63e_9941_441b_b004_39f999ada412,
                    0LL,
                    0x17u,
                    &GUID_6ca19947_8747_46ab_879e_349c4dbb88fb,
                    &ppv);
            v20 = v31;
            if ( v31 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x78,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
                (const char *)(unsigned int)v31);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
              goto LABEL_30;
            }
            for ( i = 0LL; i < v40; ++i )
            {
              v33 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)ppv + 88LL))(
                      ppv,
                      v37,
                      a4,
                      v39[i]);
              if ( v33 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  124LL,
                  (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
                  (const char *)(unsigned int)v33);
            }
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
          }
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v39,
            0LL);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v37);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v36);
        std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v42);
        std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v43);
        return 0LL;
      }
      v35 = 93LL;
    }
    v20 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
      (const char *)0x80070057LL);
    goto LABEL_44;
  }
  v20 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)0x54,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)v19);
LABEL_44:
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v42);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v43);
  return (unsigned int)v20;
}
