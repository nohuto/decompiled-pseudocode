/*
 * XREFs of AudioSessionMeterGetChannelsPeakValues @ 0x1800C4560
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
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

__int64 __fastcall AudioSessionMeterGetChannelsPeakValues(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r14
  struct _TP_TIMER **v6; // rax
  struct _TP_TIMER **v7; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v9; // edi
  struct AudioSrvTelemetryProvider *v10; // rax
  struct _TP_TIMER **v11; // rax
  struct _TP_TIMER **v12; // rsi
  __int64 v13; // rbx
  unsigned int v14; // edi
  struct AudioSrvTelemetryProvider *v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  void *v19; // [rsp+60h] [rbp+8h] BYREF
  void *v20; // [rsp+78h] [rbp+20h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v5 = *a1;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v6 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( v6 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v9 = g_AudioSrvWatchDogTimerInMs;
      v10 = AudioSrvTelemetryProvider::Instance();
      v6 = CWatchdogTimer<1>::CWatchdogTimer<1>(
             v7,
             *((struct _TP_TIMER **)v10 + 1),
             v9,
             (struct _TP_TIMER *)L"AudioSessionMeterGetChannelsPeakValues",
             pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v20, v6);
  }
  else
  {
    v11 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      v13 = (__int64)g_AudioHealthMonitor;
      v14 = g_AudioSrvWatchDogTimerInMs;
      v15 = AudioSrvTelemetryProvider::Instance();
      v11 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v12,
              *((struct _TP_TIMER **)v15 + 1),
              v14,
              (struct _TP_TIMER *)L"AudioSessionMeterGetChannelsPeakValues",
              v13);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v19, v11);
  }
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v5 + 248LL))(v5, a2, a3);
  v17 = v16;
  if ( v16 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionMeterGetChannelsPeakValues", 2394, v16);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v19);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v20);
  return v17;
}
