/*
 * XREFs of s_apmSetLayoutGainForId @ 0x180103BC0
 * Callers:
 *     <none>
 * Callees:
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

__int64 __fastcall s_apmSetLayoutGainForId(__int64 a1, unsigned int a2)
{
  struct _TP_TIMER **v3; // rax
  struct _TP_TIMER **v4; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v6; // edi
  struct AudioSrvTelemetryProvider *v7; // rax
  struct _TP_TIMER **v8; // rax
  struct _TP_TIMER **v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // edi
  struct AudioSrvTelemetryProvider *v12; // rax
  unsigned int v13; // ebx
  void *v15[2]; // [rsp+30h] [rbp-28h] BYREF
  void *v16; // [rsp+78h] [rbp+20h] BYREF

  v15[0] = 0LL;
  v16 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v3 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v4 = v3;
    if ( v3 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v6 = g_AudioSrvWatchDogTimerInMs;
      v7 = AudioSrvTelemetryProvider::Instance();
      v3 = CWatchdogTimer<1>::CWatchdogTimer<1>(
             v4,
             *((struct _TP_TIMER **)v7 + 1),
             v6,
             (struct _TP_TIMER *)L"s_apmSetLayoutGainForId",
             pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(v15, v3);
  }
  else
  {
    v8 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      v10 = (__int64)g_AudioHealthMonitor;
      v11 = g_AudioSrvWatchDogTimerInMs;
      v12 = AudioSrvTelemetryProvider::Instance();
      v8 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
             v9,
             *((struct _TP_TIMER **)v12 + 1),
             v11,
             (struct _TP_TIMER *)L"s_apmSetLayoutGainForId",
             v10);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v16, v8);
  }
  if ( (unsigned int)IsApmLayoutGainForIdSupported() )
    v13 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 144LL))(
            g_PolicyManager,
            a2);
  else
    v13 = -2147467263;
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v16);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(v15);
  return v13;
}
