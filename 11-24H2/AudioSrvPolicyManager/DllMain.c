/*
 * XREFs of DllMain @ 0x18001ACE0
 * Callers:
 *     dllmain_dispatch @ 0x180020028 (dllmain_dispatch.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18002681C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     McGenEventRegister_EventRegister @ 0x18002B3C4 (McGenEventRegister_EventRegister.c)
 *     McGenEventUnregister_EventUnregister @ 0x18002B404 (McGenEventUnregister_EventUnregister.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  ULONG64 *v4; // rbx
  const GUID **v5; // rsi
  const GUID *v6; // r8
  const struct wil::FailureInfo *v7; // rdx
  _QWORD *v8; // rbx
  TRACEHANDLE v9; // rcx
  struct _TRACE_GUID_REGISTRATION TraceGuidReg; // [rsp+40h] [rbp-B8h] BYREF
  _OWORD v12[9]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+E0h] [rbp-18h]

  if ( fdwReason == 1 )
  {
    qword_1800649C8 = 1LL;
    qword_1800649C0 = 0LL;
    v4 = (ULONG64 *)&WPP_MAIN_CB;
    WPP_MAIN_CB = 0LL;
    WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
    v5 = (const GUID **)&WPP_REGISTRATION_GUIDS;
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    do
    {
      v6 = *v5;
      TraceGuidReg.Guid = v6;
      ++v5;
      TraceGuidReg.RegHandle = 0LL;
      v4[4] = (ULONG64)v6;
      RegisterTraceGuidsW(WppControlCallback, v4, v6, 1u, &TraceGuidReg, 0LL, 0LL, v4 + 1);
      v4 = (ULONG64 *)*v4;
    }
    while ( v4 );
    DisableThreadLibraryCalls(hinstDLL);
    if ( wil::details::g_pfnTelemetryCallback
      && (void (__fastcall *)(bool, const struct wil::FailureInfo *))wil::details::g_pfnTelemetryCallback != AudioSrvPolicyManagerTelemetryProvider::FallbackTelemetryCallback )
    {
      memset(v12, 0, sizeof(v12));
      v13 = 0LL;
      wil::details::WilFailFast((wil::details *)v12, v7);
    }
    wil::details::g_pfnTelemetryCallback = (__int64)AudioSrvPolicyManagerTelemetryProvider::FallbackTelemetryCallback;
    McGenEventRegister_EventRegister();
  }
  else if ( !fdwReason )
  {
    if ( !lpvReserved )
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
      {
        if ( WPP_GLOBAL_Control )
        {
          do
          {
            v9 = v8[1];
            if ( v9 )
            {
              UnregisterTraceGuids(v9);
              v8[1] = 0LL;
            }
            v8 = (_QWORD *)*v8;
          }
          while ( v8 );
        }
        WPP_GLOBAL_Control = &WPP_GLOBAL_Control;
      }
    }
    McGenEventUnregister_EventUnregister();
  }
  return 1;
}
