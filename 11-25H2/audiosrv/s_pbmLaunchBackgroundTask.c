/*
 * XREFs of s_pbmLaunchBackgroundTask @ 0x1800FF750
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall s_pbmLaunchBackgroundTask(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v6; // edi
  int v10; // esi
  struct AudioSrvTelemetryProvider *v11; // rax
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-50h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v10 = 0;
  v11 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v11 + 1),
    v6,
    (struct _TP_TIMER *)L"s_pbmLaunchBackgroundTask",
    pftDueTime);
  if ( (unsigned int)IsPbmLaunchBackgroundTaskSupported() )
  {
    v10 = PbmLaunchBackgroundTask(a1, a2, a3, a4);
  }
  else if ( g_PolicyManager )
  {
    v13 = 0LL;
    v10 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
            g_PolicyManager,
            a1,
            &v13);
    if ( v10 >= 0 )
      v10 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64, __int64, __int64))(*(_QWORD *)g_PolicyManager + 120LL))(
              g_PolicyManager,
              v13,
              a2,
              a3,
              a4);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v10;
}
