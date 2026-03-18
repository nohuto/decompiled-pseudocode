/*
 * XREFs of RIMAbConfigureDeviceArbitration @ 0x1401D9D38
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400D69F0 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMAbConfigureDeviceArbitration(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx

  v2 = *(_DWORD *)(W32GetUserSessionState(a1) + 332);
  if ( v2 < 4 )
    *(_DWORD *)(W32GetUserSessionState(v1) + 244) = v2;
  if ( *(_DWORD *)(W32GetUserSessionState(v1) + 244) >= 4u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1002);
}
