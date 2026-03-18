/*
 * XREFs of PopDirectedDripsDiagGetOrCreateDeviceDiagnostic @ 0x1406FB9DC
 * Callers:
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x140A7EA5C (PopDirectedDripsDiagBroadcastTreeBegin.c)
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x140A80EAC (PopDirectedDripsDiagTraceMarkDevice.c)
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x140AB287C (PopDirectedDripsDiagTraceBroadcastVisit.c)
 * Callees:
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x1407642B4 (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 */

__int64 __fastcall PopDirectedDripsDiagGetOrCreateDeviceDiagnostic(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 776);
  if ( !result )
    return PopDirectedDripsDiagCreateDeviceDiagnostic();
  return result;
}
