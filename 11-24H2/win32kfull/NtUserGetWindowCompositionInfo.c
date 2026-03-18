/*
 * XREFs of NtUserGetWindowCompositionInfo @ 0x140297BB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 NtUserGetWindowCompositionInfo()
{
  ULONG v0; // eax

  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 18872);
  v0 = RtlNtStatusToDosError(-1073741816);
  UserSetLastError(v0);
  return 0LL;
}
