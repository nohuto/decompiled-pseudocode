/*
 * XREFs of PopDirectedDripsDiagGetOrCreateDeviceDiagnostic @ 0x1406F961C
 * Callers:
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x140A7820C (PopDirectedDripsDiagBroadcastTreeBegin.c)
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x140A7B90C (PopDirectedDripsDiagTraceMarkDevice.c)
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x140AAD7EC (PopDirectedDripsDiagTraceBroadcastVisit.c)
 * Callees:
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x140763C84 (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 */

__int64 __fastcall PopDirectedDripsDiagGetOrCreateDeviceDiagnostic(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 776);
  if ( !result )
    return PopDirectedDripsDiagCreateDeviceDiagnostic();
  return result;
}
