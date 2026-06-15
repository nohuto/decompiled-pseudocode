/*
 * XREFs of s_mmeNotifyDeviceAdded @ 0x1800FF1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x1800629BC (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceAdded@@YAJPEBG@Z @ 0x180074B30 (-MmeOnDeviceAdded@@YAJPEBG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 */

__int64 __fastcall s_mmeNotifyDeviceAdded(__int64 a1, const unsigned __int16 *a2)
{
  DWORD LastError; // esi
  struct _TP_TIMER **v4; // rbp
  __int64 pftDueTime; // rbx
  unsigned int v6; // edi
  struct AudioSrvTelemetryProvider *v7; // rax
  struct _TP_TIMER **v8; // rax
  void *v9; // rdx
  void *v10; // rcx
  struct _TP_TIMER **v11; // rbp
  __int64 v12; // rbx
  unsigned int v13; // edi
  struct AudioSrvTelemetryProvider *v14; // rax
  struct _TP_TIMER **v15; // rax
  void *v17[5]; // [rsp+30h] [rbp-28h] BYREF
  int v18; // [rsp+70h] [rbp+18h] BYREF
  void *v19; // [rsp+78h] [rbp+20h] BYREF

  LastError = 0;
  v18 = 0;
  v17[0] = 0LL;
  v19 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v4 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v6 = g_AudioSrvWatchDogTimerInMs;
      v7 = AudioSrvTelemetryProvider::Instance();
      v8 = CWatchdogTimer<1>::CWatchdogTimer<1>(
             v4,
             *((struct _TP_TIMER **)v7 + 1),
             v6,
             (struct _TP_TIMER *)L"s_mmeNotifyDeviceAdded",
             pftDueTime);
    }
    else
    {
      v8 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(v17, v8);
  }
  else
  {
    v11 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v11 )
    {
      v12 = (__int64)g_AudioHealthMonitor;
      v13 = g_AudioSrvWatchDogTimerInMs;
      v14 = AudioSrvTelemetryProvider::Instance();
      v15 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v11,
              *((struct _TP_TIMER **)v14 + 1),
              v13,
              (struct _TP_TIMER *)L"s_mmeNotifyDeviceAdded",
              v12);
    }
    else
    {
      v15 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v19, v15);
  }
  if ( (unsigned int)CheckRpcClientTokenMembershipsDisjunctive(v10, v9, &v18) )
  {
    if ( !v18 || (MmeOnDeviceAdded(a2), !v18) )
      LastError = 5;
  }
  else
  {
    LastError = GetLastError();
  }
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v19);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(v17);
  return LastError;
}
