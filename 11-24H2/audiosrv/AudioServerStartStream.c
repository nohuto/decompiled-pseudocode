/*
 * XREFs of AudioServerStartStream @ 0x180085260
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18005292C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180081320 (-StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 */

__int64 __fastcall AudioServerStartStream(_OWORD *a1, __int64 a2, int a3)
{
  unsigned int v6; // esi
  void *v7; // rbp
  struct _FILETIME pftDueTime; // rbx
  __int64 v9; // rax
  void *v10; // rbp
  struct _FILETIME v11; // rbx
  __int64 v12; // rax
  int started; // eax
  unsigned int v14; // ebx
  __int64 v16; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v19[16]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v18, a1);
  v6 = 0;
  v17 = 0LL;
  v16 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v7 )
    {
      pftDueTime = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v9 = CWatchdogTimer<1>::CWatchdogTimer<1>(v7, pftDueTime);
    }
    else
    {
      v9 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v17, v9);
  }
  else
  {
    v10 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
    {
      v11 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v12 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v10, v11);
    }
    else
    {
      v12 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v16, v12);
  }
  started = CVADServer::StartStream((__int64)a1, a2, a3);
  v14 = started;
  if ( started < 0 )
  {
    v6 = -2005139336;
    if ( started != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBDC,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)started);
      v6 = v14;
    }
  }
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v16);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v17);
  EtwEventActivityIdControl(4LL, v19);
  return v6;
}
