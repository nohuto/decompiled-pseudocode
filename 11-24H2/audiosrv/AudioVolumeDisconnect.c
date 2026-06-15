/*
 * XREFs of AudioVolumeDisconnect @ 0x1800882F0
 * Callers:
 *     <none>
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
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 */

__int64 __fastcall AudioVolumeDisconnect(_QWORD *a1)
{
  void *v2; // rax
  void *v3; // rbp
  struct _FILETIME pftDueTime; // rbx
  void *v5; // rax
  void *v6; // rbp
  struct _FILETIME v7; // rbx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v2 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v3 = v2;
    if ( v2 )
    {
      pftDueTime = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v2 = (void *)CWatchdogTimer<1>::CWatchdogTimer<1>(v3, pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v11, v2);
  }
  else
  {
    v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      v7 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v5 = (void *)CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v6, v7);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v10, v5);
  }
  v9 = 0LL;
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::attach(&v9, *a1);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_0bbc8e5536fd3ef960b697e18e744cbf_Traceguids, v9);
  }
  *a1 = 0LL;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v10);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v11);
  return 0LL;
}
