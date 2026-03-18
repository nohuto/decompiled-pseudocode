/*
 * XREFs of ?DecCloakWindows@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1402D2228
 * Callers:
 *     ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x14002DDA0 (-DecVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x1400943FC (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall DecCloakWindows(struct tagPROCESSINFO *a1)
{
  if ( !*((_DWORD *)a1 + 255) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 35);
  --*((_DWORD *)a1 + 255);
}
