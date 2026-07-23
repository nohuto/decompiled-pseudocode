/*
 * XREFs of KasaniTelemetryThread @ 0x1405A7E30
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KasaniReportTelemetry @ 0x1405A7140 (KasaniReportTelemetry.c)
 */

void __fastcall __noreturn KasaniTelemetryThread(PVOID StartContext)
{
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -50000000LL;
  while ( 1 )
  {
    KeDelayExecutionThread(0, 0, &Interval);
    KasaniReportTelemetry();
  }
}
