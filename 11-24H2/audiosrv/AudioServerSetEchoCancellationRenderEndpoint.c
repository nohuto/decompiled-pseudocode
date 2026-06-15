/*
 * XREFs of AudioServerSetEchoCancellationRenderEndpoint @ 0x180111E20
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
 *     ?SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z @ 0x18010E3C0 (-SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z.c)
 */

__int64 __fastcall AudioServerSetEchoCancellationRenderEndpoint(CVADServer *this, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v6; // esi
  struct _TP_TIMER **v7; // rbp
  __int64 pftDueTime; // rbx
  unsigned int v9; // edi
  struct AudioSrvTelemetryProvider *v10; // rax
  struct _TP_TIMER **v11; // rax
  struct _TP_TIMER **v12; // rbp
  __int64 v13; // rbx
  unsigned int v14; // edi
  struct AudioSrvTelemetryProvider *v15; // rax
  struct _TP_TIMER **v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  void *v20; // [rsp+30h] [rbp-68h] BYREF
  void *v21; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v23[16]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v22, this);
  v6 = 0;
  v21 = 0LL;
  v20 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v7 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v7 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v9 = g_AudioSrvWatchDogTimerInMs;
      v10 = AudioSrvTelemetryProvider::Instance();
      v11 = CWatchdogTimer<1>::CWatchdogTimer<1>(
              v7,
              *((struct _TP_TIMER **)v10 + 1),
              v9,
              (struct _TP_TIMER *)L"AudioServerSetEchoCancellationRenderEndpoint",
              pftDueTime);
    }
    else
    {
      v11 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v21, v11);
  }
  else
  {
    v12 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v12 )
    {
      v13 = (__int64)g_AudioHealthMonitor;
      v14 = g_AudioSrvWatchDogTimerInMs;
      v15 = AudioSrvTelemetryProvider::Instance();
      v16 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v12,
              *((struct _TP_TIMER **)v15 + 1),
              v14,
              (struct _TP_TIMER *)L"AudioServerSetEchoCancellationRenderEndpoint",
              v13);
    }
    else
    {
      v16 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v20, v16);
  }
  v17 = CVADServer::SetEchoCancellationRenderEndpoint(this, a2, a3);
  v18 = v17;
  if ( v17 < 0 )
  {
    v6 = -2005139336;
    if ( v17 != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x151A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v17);
      v6 = v18;
    }
  }
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v20);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v21);
  EtwEventActivityIdControl(4LL, v23);
  return v6;
}
