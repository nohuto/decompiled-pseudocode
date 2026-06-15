/*
 * XREFs of AudioServerSetChannelVolume @ 0x180111B10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
 *     ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x18010E090 (-SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z.c)
 */

__int64 __fastcall AudioServerSetChannelVolume(struct _RTL_CRITICAL_SECTION *this, unsigned int a2, float a3, int *a4)
{
  struct _TP_TIMER **v7; // rax
  struct _TP_TIMER **v8; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v10; // edi
  struct AudioSrvTelemetryProvider *v11; // rax
  struct _TP_TIMER **v12; // rax
  struct _TP_TIMER **v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // edi
  struct AudioSrvTelemetryProvider *v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  void *v20; // [rsp+30h] [rbp-78h] BYREF
  void *v21; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v23[16]; // [rsp+50h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v22, this);
  v21 = 0LL;
  v20 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v7 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    if ( v7 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v10 = g_AudioSrvWatchDogTimerInMs;
      v11 = AudioSrvTelemetryProvider::Instance();
      v7 = CWatchdogTimer<1>::CWatchdogTimer<1>(
             v8,
             *((struct _TP_TIMER **)v11 + 1),
             v10,
             (struct _TP_TIMER *)L"AudioServerSetChannelVolume",
             pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v21, v7);
  }
  else
  {
    v12 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      v14 = (__int64)g_AudioHealthMonitor;
      v15 = g_AudioSrvWatchDogTimerInMs;
      v16 = AudioSrvTelemetryProvider::Instance();
      v12 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v13,
              *((struct _TP_TIMER **)v16 + 1),
              v15,
              (struct _TP_TIMER *)L"AudioServerSetChannelVolume",
              v14);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v20, v12);
  }
  v17 = CVADServer::SetChannelVolume(this, a2, a3, a4);
  v18 = v17;
  if ( v17 >= 0 )
    v18 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v17);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v20);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v21);
  EtwEventActivityIdControl(4LL, v23);
  return v18;
}
