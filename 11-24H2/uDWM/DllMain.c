/*
 * XREFs of DllMain @ 0x180076210
 * Callers:
 *     dllmain_dispatch @ 0x18009D3A8 (dllmain_dispatch.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180032C14 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180076380 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     McGenEventRegister_EtwEventRegister @ 0x180076440 (McGenEventRegister_EtwEventRegister.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 *     McGenEventUnregister_EtwEventUnregister @ 0x1800C9DC4 (McGenEventUnregister_EtwEventUnregister.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  const struct wil::FailureInfo *v4; // rdx
  const struct wil::FailureInfo *v5; // rdx
  __int64 v6; // rcx
  _BYTE v7[168]; // [rsp+20h] [rbp-A8h] BYREF

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      g_hInstance = hinstDLL;
      DisableThreadLibraryCalls(hinstDLL);
      if ( wil::details::g_pfnTelemetryCallback
        && (void (*)(bool, const struct wil::FailureInfo *))wil::details::g_pfnTelemetryCallback != WindowFrameLoggingTelemetry::FallbackTelemetryCallback )
      {
        memset_0(v7, 0, 0x98uLL);
        wil::details::WilFailFast((wil::details *)v7, v4);
      }
      wil::details::g_pfnTelemetryCallback = (__int64)WindowFrameLoggingTelemetry::FallbackTelemetryCallback;
      McGenEventRegister_EtwEventRegister();
      if ( wil::details::g_pfnLoggingCallback
        && (void (__fastcall *)(const struct wil::FailureInfo *))wil::details::g_pfnLoggingCallback != WilResultLoggingCallback_MaybeFailFast )
      {
        memset_0(v7, 0, 0x98uLL);
        wil::details::WilFailFast((wil::details *)v7, v5);
      }
      wil::details::g_pfnLoggingCallback = (__int64)WilResultLoggingCallback_MaybeFailFast;
      TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_180125130);
    }
  }
  else
  {
    v6 = qword_180125150;
    qword_180125150 = 0LL;
    dword_180125130 = 0;
    EtwEventUnregister(v6, fdwReason, lpvReserved);
    McGenEventUnregister_EtwEventUnregister();
  }
  return 1;
}
