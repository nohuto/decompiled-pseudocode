/*
 * XREFs of PolicyConfigGetProcessingPeriod @ 0x180107D40
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

__int64 __fastcall PolicyConfigGetProcessingPeriod(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  struct _TP_TIMER **v5; // rbx
  struct _TP_TIMER **v9; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v11; // edi
  struct AudioSrvTelemetryProvider *v12; // rax
  struct _TP_TIMER **v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // edi
  struct AudioSrvTelemetryProvider *v16; // rax
  unsigned int v17; // ebx
  void *v19; // [rsp+30h] [rbp-28h] BYREF
  void *v20[4]; // [rsp+38h] [rbp-20h] BYREF

  v5 = 0LL;
  v20[0] = 0LL;
  v19 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v9 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v9 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v11 = g_AudioSrvWatchDogTimerInMs;
      v12 = AudioSrvTelemetryProvider::Instance();
      v5 = CWatchdogTimer<1>::CWatchdogTimer<1>(
             v9,
             *((struct _TP_TIMER **)v12 + 1),
             v11,
             (struct _TP_TIMER *)L"PolicyConfigGetProcessingPeriod",
             pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(v20, v5);
  }
  else
  {
    v13 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v13 )
    {
      v14 = (__int64)g_AudioHealthMonitor;
      v15 = g_AudioSrvWatchDogTimerInMs;
      v16 = AudioSrvTelemetryProvider::Instance();
      v5 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
             v13,
             *((struct _TP_TIMER **)v16 + 1),
             v15,
             (struct _TP_TIMER *)L"PolicyConfigGetProcessingPeriod",
             v14);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v19, v5);
  }
  v17 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, __int64, __int64))(*(_QWORD *)g_PolicyConfig + 56LL))(
          g_PolicyConfig,
          a2,
          a3,
          a4,
          a5);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v19);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(v20);
  return v17;
}
