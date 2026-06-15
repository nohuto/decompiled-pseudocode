/*
 * XREFs of s_pbmCastingAppStateChanged @ 0x180104410
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
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

__int64 __fastcall s_pbmCastingAppStateChanged(__int64 a1, unsigned int a2)
{
  int v2; // esi
  struct _TP_TIMER **v5; // rax
  struct _TP_TIMER **v6; // r14
  __int64 pftDueTime; // rbx
  unsigned int v8; // edi
  struct AudioSrvTelemetryProvider *v9; // rax
  struct _TP_TIMER **v10; // rax
  struct _TP_TIMER **v11; // r14
  __int64 v12; // rbx
  unsigned int v13; // edi
  struct AudioSrvTelemetryProvider *v14; // rax
  __int64 v15; // r8
  void *v17; // [rsp+30h] [rbp-10h] BYREF
  void *v18; // [rsp+38h] [rbp-8h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  v18 = 0LL;
  v17 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v5 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v8 = g_AudioSrvWatchDogTimerInMs;
      v9 = AudioSrvTelemetryProvider::Instance();
      v5 = CWatchdogTimer<1>::CWatchdogTimer<1>(
             v6,
             *((struct _TP_TIMER **)v9 + 1),
             v8,
             (struct _TP_TIMER *)L"s_pbmCastingAppStateChanged",
             pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v18, v5);
  }
  else
  {
    v10 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      v12 = (__int64)g_AudioHealthMonitor;
      v13 = g_AudioSrvWatchDogTimerInMs;
      v14 = AudioSrvTelemetryProvider::Instance();
      v10 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v11,
              *((struct _TP_TIMER **)v14 + 1),
              v13,
              (struct _TP_TIMER *)L"s_pbmCastingAppStateChanged",
              v12);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v17, v10);
  }
  if ( (unsigned int)IsPbmCastingAppStateChangedSupported() )
  {
    v2 = PbmCastingAppStateChanged(a1, a2);
  }
  else if ( g_PolicyManager )
  {
    v20 = 0LL;
    if ( (**(int (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))g_PolicyManager)(
           g_PolicyManager,
           &GUID_7cd77114_b031_4a63_bf09_9fd46c7629d0,
           &v20) >= 0 )
    {
      v19 = 0LL;
      v2 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                       + 32LL))(
             g_PolicyManager,
             a1,
             &v19);
      if ( v2 >= 0 )
      {
        LOBYTE(v15) = a2 == 0;
        v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v20 + 40LL))(v20, v19, v15);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
  }
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v17);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v18);
  return (unsigned int)v2;
}
