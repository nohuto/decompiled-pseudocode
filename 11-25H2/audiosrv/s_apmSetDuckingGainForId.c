/*
 * XREFs of s_apmSetDuckingGainForId @ 0x1800FEF60
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall s_apmSetDuckingGainForId(__int64 a1, __int64 a2)
{
  __int64 pftDueTime; // rbx
  unsigned int v4; // edi
  unsigned int v6; // esi
  struct AudioSrvTelemetryProvider *v7; // rax
  void (__fastcall *v8)(struct IAudioPolicyManager *, _QWORD, __int64); // rbx
  unsigned int v9; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+B8h] [rbp+20h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v6 = 0;
  v7 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v7 + 1),
    v4,
    (struct _TP_TIMER *)L"s_apmSetDuckingGainForId",
    pftDueTime);
  if ( (unsigned int)IsApmDuckingGainForIdSupported() )
  {
    v12 = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &v12) >= 0 )
    {
      v8 = *(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(*(_QWORD *)g_PolicyManager + 136LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
      v8(g_PolicyManager, v9, a2);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(*(_QWORD *)g_PolicyManager + 136LL))(
           g_PolicyManager,
           0LL,
           a2);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v6;
}
