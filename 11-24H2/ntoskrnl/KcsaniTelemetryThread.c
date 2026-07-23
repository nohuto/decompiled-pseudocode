/*
 * XREFs of KcsaniTelemetryThread @ 0x1405AC380
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KcsanReportTelemetry @ 0x1405AB2D0 (KcsanReportTelemetry.c)
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
