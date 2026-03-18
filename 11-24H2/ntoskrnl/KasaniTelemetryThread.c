/*
 * XREFs of KasaniTelemetryThread @ 0x1405AAEC0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KasaniReportTelemetry @ 0x1405AA1D0 (KasaniReportTelemetry.c)
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
