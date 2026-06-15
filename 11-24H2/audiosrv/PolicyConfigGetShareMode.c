/*
 * XREFs of PolicyConfigGetShareMode @ 0x180107E80
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

__int64 __fastcall PolicyConfigGetShareMode(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TP_TIMER **v3; // rbx
  struct _TP_TIMER **v6; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v8; // edi
  struct AudioSrvTelemetryProvider *v9; // rax
  struct _TP_TIMER **v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // edi
  struct AudioSrvTelemetryProvider *v13; // rax
  unsigned int v14; // ebx
  void *v16[5]; // [rsp+30h] [rbp-28h] BYREF
  void *v17; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v16[0] = 0LL;
  v17 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v6 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v6 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v8 = g_AudioSrvWatchDogTimerInMs;
      v9 = AudioSrvTelemetryProvider::Instance();
      v3 = CWatchdogTimer<1>::CWatchdogTimer<1>(
             v6,
             *((struct _TP_TIMER **)v9 + 1),
             v8,
             (struct _TP_TIMER *)L"PolicyConfigGetShareMode",
             pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(v16, v3);
  }
  else
  {
    v10 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
    {
      v11 = (__int64)g_AudioHealthMonitor;
      v12 = g_AudioSrvWatchDogTimerInMs;
      v13 = AudioSrvTelemetryProvider::Instance();
      v3 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
             v10,
             *((struct _TP_TIMER **)v13 + 1),
             v12,
             (struct _TP_TIMER *)L"PolicyConfigGetShareMode",
             v11);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v17, v3);
  }
  v14 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, __int64))(*(_QWORD *)g_PolicyConfig + 72LL))(
          g_PolicyConfig,
          a2,
          a3);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v17);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(v16);
  return v14;
}
