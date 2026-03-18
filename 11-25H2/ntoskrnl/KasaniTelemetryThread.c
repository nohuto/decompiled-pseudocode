/*
 * XREFs of KasaniTelemetryThread @ 0x1405A7530
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KasaniReportTelemetry @ 0x1405A6840 (KasaniReportTelemetry.c)
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
