/*
 * XREFs of s_afxOpenAudioEffectsWatcher @ 0x1800B3EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z @ 0x180066CB4 (-DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800B3388 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_afxOpenAudioEffectsWatcher(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        _OWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  _QWORD *v10; // rdi
  struct _TP_TIMER **v11; // rax
  struct _TP_TIMER **v12; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v14; // edi
  struct AudioSrvTelemetryProvider *v15; // rax
  struct _TP_TIMER **v16; // rax
  struct _TP_TIMER **v17; // rsi
  __int64 v18; // rbx
  unsigned int v19; // edi
  struct AudioSrvTelemetryProvider *v20; // rax
  HRESULT v21; // eax
  unsigned int v22; // ebx
  int v23; // eax
  int Watcher; // eax
  _QWORD *v25; // rbx
  unsigned int v27; // [rsp+30h] [rbp-40h] BYREF
  void *v28; // [rsp+38h] [rbp-38h] BYREF
  void *v29; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v30; // [rsp+48h] [rbp-28h]
  int v31[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v10 = a6;
  *(_QWORD *)v31 = a6;
  v30 = a7;
  v29 = 0LL;
  v28 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v11 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v14 = g_AudioSrvWatchDogTimerInMs;
      v15 = AudioSrvTelemetryProvider::Instance();
      v11 = CWatchdogTimer<1>::CWatchdogTimer<1>(
              v12,
              *((struct _TP_TIMER **)v15 + 1),
              v14,
              (struct _TP_TIMER *)L"s_afxOpenAudioEffectsWatcher",
              pftDueTime);
      v10 = *(_QWORD **)v31;
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v29, v11);
  }
  else
  {
    v16 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v17 = v16;
    if ( v16 )
    {
      v18 = (__int64)g_AudioHealthMonitor;
      v19 = g_AudioSrvWatchDogTimerInMs;
      v20 = AudioSrvTelemetryProvider::Instance();
      v16 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v17,
              *((struct _TP_TIMER **)v20 + 1),
              v19,
              (struct _TP_TIMER *)L"s_afxOpenAudioEffectsWatcher",
              v18);
      v10 = *(_QWORD **)v31;
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v28, v16);
  }
  v21 = CoInitializeEx(0LL, 0);
  v22 = v21;
  if ( v21 >= 0 )
  {
    v27 = 0;
    v23 = DeriveAudioServerStreamCategory(a3, 0, &v27);
    v22 = v23;
    if ( v23 >= 0 )
    {
      *(_QWORD *)v31 = 0LL;
      Watcher = AudioEffectsWatcherFactory::GetWatcher(a2, v27, a4, 7, (struct IUnknown **)v31);
      v22 = Watcher;
      if ( Watcher >= 0 )
      {
        v25 = *(_QWORD **)v31;
        *a5 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v31 + 32LL))(*(_QWORD *)v31, v31);
        *v10 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, int *))(*v25 + 40LL))(v25, v31);
        *(_QWORD *)v31 = 0LL;
        *v30 = v25;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v31);
        CoUninitialize();
        v22 = 0;
        goto LABEL_16;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
        (const char *)(unsigned int)Watcher);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v31);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B3,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
        (const char *)(unsigned int)v23);
    }
    CoUninitialize();
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AF,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)v21);
  }
LABEL_16:
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v28);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v29);
  return v22;
}
