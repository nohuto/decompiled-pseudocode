/*
 * XREFs of KcsaniTelemetryThread @ 0x1405ABA80
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KcsanReportTelemetry @ 0x1405AA9D0 (KcsanReportTelemetry.c)
 */

void __fastcall __noreturn KcsaniTelemetryThread(PVOID StartContext)
{
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -100000000LL;
  while ( 1 )
  {
    KeDelayExecutionThread(0, 0, &Interval);
    KcsanReportTelemetry();
  }
}
