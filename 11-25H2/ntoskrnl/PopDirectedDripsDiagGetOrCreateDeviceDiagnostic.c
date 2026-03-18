/*
 * XREFs of PopDirectedDripsDiagGetOrCreateDeviceDiagnostic @ 0x1406EFB6C
 * Callers:
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x140A7B76C (PopDirectedDripsDiagBroadcastTreeBegin.c)
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x140A7D834 (PopDirectedDripsDiagTraceMarkDevice.c)
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x140AAD7DC (PopDirectedDripsDiagTraceBroadcastVisit.c)
 * Callees:
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x1407547F4 (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 */

__int64 __fastcall PopDirectedDripsDiagGetOrCreateDeviceDiagnostic(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 776);
  if ( !result )
    return PopDirectedDripsDiagCreateDeviceDiagnostic();
  return result;
}
