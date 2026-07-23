/*
 * XREFs of PopDiagTraceGracefulShutdown @ 0x140B61C94
 * Callers:
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x1405CA3E4 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     SshSessionManagerTraceSystemStop @ 0x140766C3C (SshSessionManagerTraceSystemStop.c)
 *     PopCurrentPowerState @ 0x140A20120 (PopCurrentPowerState.c)
 */

__int64 PopDiagTraceGracefulShutdown()
{
  char v0; // bl
  char v1; // si
  char v2; // di
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0LL;
  v0 = 0;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  PopCurrentPowerState(&v4);
  v1 = PopLidOpened != 0;
  v2 = PopConsoleExternalDisplayConnected != 0;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v2 )
    {
      v0 = PopUsb4DisplayPresent != 0 ? 3 : 1;
    }
    else if ( PopUsb4DisplayPresent )
    {
      v2 = 1;
      v0 = 2;
    }
  }
  return SshSessionManagerTraceSystemStop(SHIDWORD(v4), SDWORD2(v4), v1, v2, v0);
}
