/*
 * XREFs of s_afxCloseAudioEffectsWatcher @ 0x1800B3DB0
 * Callers:
 *     HAUDIOEFFECTSWATCHER_rundown @ 0x1800B3D90 (HAUDIOEFFECTSWATCHER_rundown.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?attach@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIVolumeStrip@@@Z @ 0x1800A22C8 (-attach@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIVolumeStrip@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 */

__int64 __fastcall s_afxCloseAudioEffectsWatcher(unsigned __int64 *a1)
{
  struct _TP_TIMER **v2; // rax
  struct _TP_TIMER **v3; // rbp
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  struct AudioSrvTelemetryProvider *v6; // rax
  struct _TP_TIMER **v7; // rax
  struct _TP_TIMER **v8; // rbp
  __int64 v9; // rbx
  unsigned int v10; // edi
  struct AudioSrvTelemetryProvider *v11; // rax
  unsigned __int64 v12; // rax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  void *v15; // [rsp+58h] [rbp+10h] BYREF
  void *v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v2 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v3 = v2;
    if ( v2 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v5 = g_AudioSrvWatchDogTimerInMs;
      v6 = AudioSrvTelemetryProvider::Instance();
      v2 = CWatchdogTimer<1>::CWatchdogTimer<1>(
             v3,
             *((struct _TP_TIMER **)v6 + 1),
             v5,
             (struct _TP_TIMER *)L"s_afxCloseAudioEffectsWatcher",
             pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v16, v2);
  }
  else
  {
    v7 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    if ( v7 )
    {
      v9 = (__int64)g_AudioHealthMonitor;
      v10 = g_AudioSrvWatchDogTimerInMs;
      v11 = AudioSrvTelemetryProvider::Instance();
      v7 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
             v8,
             *((struct _TP_TIMER **)v11 + 1),
             v10,
             (struct _TP_TIMER *)L"s_afxCloseAudioEffectsWatcher",
             v9);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v15, v7);
  }
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    v12 = *a1;
    v14 = 0LL;
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::attach(
      &v14,
      (v12 + 8) & ((unsigned __int128)-(__int128)v12 >> 64));
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
    CoUninitialize();
  }
  *a1 = 0LL;
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v15);
  return std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v16);
}
