/*
 * XREFs of PopDiagTraceGracefulShutdown @ 0x140B4FAD4
 * Callers:
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 *     Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline @ 0x1405CF8A4 (Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline.c)
 *     SshSessionManagerTraceSystemStop @ 0x1407577A8 (SshSessionManagerTraceSystemStop.c)
 *     SshSessionManagerTraceSystemStopV1 @ 0x140757844 (SshSessionManagerTraceSystemStopV1.c)
 *     PopCurrentPowerState @ 0x140A22CB0 (PopCurrentPowerState.c)
 */

__int64 PopDiagTraceGracefulShutdown()
{
  char v0; // bl
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  PopCurrentPowerState(&v2);
  v0 = PopLidOpened != 0;
  if ( (unsigned int)Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline() )
    return SshSessionManagerTraceSystemStopV1(SHIDWORD(v2), SDWORD2(v2), v0, PopConsoleExternalDisplayConnected != 0);
  else
    return SshSessionManagerTraceSystemStop(SHIDWORD(v2), SDWORD2(v2), v0);
}
