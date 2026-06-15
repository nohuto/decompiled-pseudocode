/*
 * XREFs of DllMain @ 0x1800D0F70
 * Callers:
 *     dllmain_dispatch @ 0x1800A3C18 (dllmain_dispatch.c)
 * Callees:
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800AA47C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  BOOL v3; // edi
  const struct wil::FailureInfo *v4; // rdx
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  _QWORD v8[2]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v9[160]; // [rsp+50h] [rbp-A8h] BYREF

  v3 = 1;
  if ( fdwReason == 1 )
  {
    DisableThreadLibraryCalls(hinstDLL);
    v8[1] = 0LL;
    hHeap = GetProcessHeap();
    v8[0] = &GUID_NULL;
    g_fEventTracingEnabled = ((__int64 (__fastcall *)(unsigned int (__fastcall *)(enum WMIDPREQUESTCODE, void *, unsigned int *, void *), _QWORD, void *, __int64, _QWORD *, _QWORD, _QWORD, __int64 *))EtwRegisterTraceGuidsW)(
                               AeWmiCallback,
                               0LL,
                               &AEWMIGUID,
                               1LL,
                               v8,
                               0LL,
                               0LL,
                               &qword_180175020) == 0;
    if ( wil::details::g_pfnTelemetryCallback
      && (char *)wil::details::g_pfnTelemetryCallback != (char *)AudioSrvTelemetryProvider::FallbackTelemetryCallback )
    {
      memset_0(v9, 0, 0x98uLL);
      wil::details::WilFailFast((wil::details *)v9, v4);
    }
    wil::details::g_pfnTelemetryCallback = (__int64 (__fastcall *)(_QWORD, _QWORD))AudioSrvTelemetryProvider::FallbackTelemetryCallback;
    dword_1801DBB28 = 1;
    if ( ATL::CAtlBaseModule::m_bInitFailed )
    {
      dword_1801DBB24 = 0;
      v3 = 0;
      dword_1801DBB28 = 0;
    }
    else
    {
      dword_1801DBB24 = 1;
    }
  }
  else if ( !fdwReason && !lpvReserved )
  {
    dword_1801DBB28 = 0;
    dword_1801DBB24 = 0;
    if ( g_fEventTracingEnabled )
    {
      EtwUnregisterTraceGuids(qword_180175020);
      qword_180175020 = 0LL;
      g_hAEWMITraceHandle = 0LL;
    }
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      while ( v5 )
      {
        v6 = v5[1];
        if ( v6 )
        {
          EtwUnregisterTraceGuids(v6);
          v5[1] = 0LL;
        }
        v5 = (_QWORD *)*v5;
      }
      WPP_GLOBAL_Control = &WPP_GLOBAL_Control;
    }
  }
  return v3;
}
