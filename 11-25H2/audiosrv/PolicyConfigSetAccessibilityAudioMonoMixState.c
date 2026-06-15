/*
 * XREFs of PolicyConfigSetAccessibilityAudioMonoMixState @ 0x180102610
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180022654 (-DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x180100854 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x180101938 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigSetAccessibilityAudioMonoMixState(__int64 a1, unsigned int a2)
{
  __int64 pftDueTime; // rbx
  unsigned int v4; // edi
  struct AudioSrvTelemetryProvider *v6; // rax
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdx
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v11; // r8d
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+90h] [rbp+18h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v6 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v6 + 1),
    v4,
    (struct _TP_TIMER *)L"PolicyConfigSetAccessibilityAudioMonoMixState",
    pftDueTime);
  v7 = (*(__int64 (__fastcall **)(CPolicyConfig *, _QWORD))(*(_QWORD *)g_PolicyConfig + 168LL))(g_PolicyConfig, a2);
  if ( v7 >= 0 )
  {
    CPolicyConfig::UpdateRenderingEndpointsSpatialSettings();
    v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 208LL))(g_PolicyManager);
    if ( v8 == 1 )
    {
      v14 = 0LL;
      if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
             g_PolicyManager,
             a1,
             &v14) >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
        AudioSessionManagerProvider::DisconnectSessionsForTsSession((AudioSessionManagerProvider *)v9, v10, v11);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
    }
    else if ( v8 == 2 )
    {
      CPolicyConfig::DisconnectAllRenderEndpoints();
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v7;
}
