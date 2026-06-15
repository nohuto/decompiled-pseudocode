/*
 * XREFs of AudioVolumeStepDown @ 0x180089360
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
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

__int64 __fastcall AudioVolumeStepDown(_QWORD *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  void *v8; // rsi
  struct _FILETIME pftDueTime; // rbx
  void *v10; // rsi
  struct _FILETIME v11; // rbx
  unsigned int v12; // ebx
  __int64 v14; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+38h] [rbp-60h] BYREF
  __int128 v16; // [rsp+40h] [rbp-58h]
  __int128 v17; // [rsp+50h] [rbp-48h] BYREF

  v16 = *a2;
  v17 = v16;
  EtwEventActivityIdControl(4LL, &v17);
  v7 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      pftDueTime = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v7 = CWatchdogTimer<1>::CWatchdogTimer<1>(v8, pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v15, v7);
  }
  else
  {
    v10 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
    {
      v11 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v7 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v10, v11);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v14, v7);
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a1 + 136LL))(*a1, a3, a4);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v14);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v15);
  EtwEventActivityIdControl(4LL, &v17);
  return v12;
}
