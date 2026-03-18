/*
 * XREFs of MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14033FF28
 * Callers:
 *     ?RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z @ 0x1403363A0 (-RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z.c)
 *     ?SetFontAsUnreliable@UmfdReliabilityManager@@YAXUUMFD_RELIABILITY_KEY@@@Z @ 0x14033EA0C (-SetFontAsUnreliable@UmfdReliabilityManager@@YAXUUMFD_RELIABILITY_KEY@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1401FDA0C (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredMsgKM(__int64 a1)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  MicrosoftTelemetryAssertTriggeredWorker(retaddr, 0, 0LL, -1, -1, a1);
}
