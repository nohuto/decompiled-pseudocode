/*
 * XREFs of FreeIndex @ 0x1C0131DA4
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0134430 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

PVOID __fastcall FreeIndex(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID result; // rax

  if ( *(_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4) != gServiceSessionId || gServiceSessionId )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2139);
  PsTlsFree(*((unsigned int *)gpxsGlobals + 8));
  result = gpxsGlobals;
  *((_DWORD *)gpxsGlobals + 8) = 0;
  return result;
}
