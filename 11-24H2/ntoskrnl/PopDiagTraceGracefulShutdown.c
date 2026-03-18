/*
 * XREFs of PopDiagTraceGracefulShutdown @ 0x140B5FC14
 * Callers:
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 *     SshSessionManagerTraceSystemStop @ 0x140767208 (SshSessionManagerTraceSystemStop.c)
 *     PopCurrentPowerState @ 0x140A2C1F8 (PopCurrentPowerState.c)
 */

__int64 PopDiagTraceGracefulShutdown()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  PopCurrentPowerState(&v1);
  return SshSessionManagerTraceSystemStop(
           SHIDWORD(v1),
           SDWORD2(v1),
           PopLidOpened != 0,
           PopConsoleExternalDisplayConnected != 0);
}
