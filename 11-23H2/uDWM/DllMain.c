/*
 * XREFs of DllMain @ 0x18005F534
 * Callers:
 *     dllmain_dispatch @ 0x18005E48C (dllmain_dispatch.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18002001C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     McGenEventRegister_EtwEventRegister @ 0x180021F44 (McGenEventRegister_EtwEventRegister.c)
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@_E@Z @ 0x180021F84 (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@_E@Z.c)
 *     ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z @ 0x180021FB8 (-SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z.c)
 *     McGenEventUnregister_EtwEventUnregister @ 0x1800CC9F8 (McGenEventUnregister_EtwEventUnregister.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  __int64 v3; // rcx

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      g_hInstance = hinstDLL;
      DisableThreadLibraryCalls(hinstDLL);
      wil::SetResultTelemetryFallback();
      McGenEventRegister_EtwEventRegister();
      wil::SetResultLoggingCallback();
      TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_180147058);
    }
  }
  else
  {
    v3 = qword_180147078;
    qword_180147078 = 0LL;
    dword_180147058 = 0;
    EtwEventUnregister(v3, fdwReason, lpvReserved);
    McGenEventUnregister_EtwEventUnregister();
  }
  return 1;
}
