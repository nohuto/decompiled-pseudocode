/*
 * XREFs of s_pbmRegisterAsBackgroundTask @ 0x1800FF9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall s_pbmRegisterAsBackgroundTask(__int64 a1, __int128 *a2)
{
  __int64 pftDueTime; // rbx
  unsigned int v4; // edi
  int v6; // esi
  struct AudioSrvTelemetryProvider *v7; // rax
  __int64 v8; // rax
  __int128 v10; // [rsp+30h] [rbp-68h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v12; // [rsp+B0h] [rbp+18h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v6 = 0;
  v7 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v7 + 1),
    v4,
    (struct _TP_TIMER *)L"s_pbmRegisterAsBackgroundTask",
    pftDueTime);
  if ( g_PolicyManager )
  {
    v12 = 0LL;
    v6 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 **))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &v12);
    if ( v6 >= 0 )
    {
      v8 = *v12;
      v10 = *a2;
      (*(void (__fastcall **)(__int64 *, __int128 *))(v8 + 288))(v12, &v10);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v6;
}
