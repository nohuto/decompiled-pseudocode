/*
 * XREFs of AudioServerSetStreamSampleRate @ 0x180112120
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18005292C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 *     ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x18010EA00 (-SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z.c)
 */

__int64 __fastcall AudioServerSetStreamSampleRate(CVADServer *this, __int64 a2, float a3)
{
  struct _TP_TIMER **v5; // rax
  struct _TP_TIMER **v6; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v8; // edi
  struct AudioSrvTelemetryProvider *v9; // rax
  struct _TP_TIMER **v10; // rax
  struct _TP_TIMER **v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // edi
  struct AudioSrvTelemetryProvider *v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  void *v18; // [rsp+30h] [rbp-78h] BYREF
  void *v19; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v20[16]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v21[16]; // [rsp+50h] [rbp-58h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v20, this);
  v19 = 0LL;
  v18 = 0LL;
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
             (struct _TP_TIMER *)L"AudioServerSetStreamSampleRate",
             pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v19, v5);
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
              (struct _TP_TIMER *)L"AudioServerSetStreamSampleRate",
              v12);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v18, v10);
  }
  v15 = CVADServer::SetStreamSampleRate(this, a2, a3);
  v16 = v15;
  if ( v15 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerSetStreamSampleRate", 3525, v15);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v18);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v19);
  EtwEventActivityIdControl(4LL, v21);
  return v16;
}
