/*
 * XREFs of ?CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z @ 0x140052A14
 * Callers:
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x140050D10 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MousePerfSummary::CalculateLatencyInMicroseconds(
        MousePerfSummary *this,
        __int64 a2,
        __int64 a3)
{
  if ( a3 && a2 )
    return (unsigned __int64)(1000000 * (a3 - a2)) / gliQpcFreq.QuadPart;
  else
    return 0LL;
}
