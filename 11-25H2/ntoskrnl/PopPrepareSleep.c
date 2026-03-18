/*
 * XREFs of PopPrepareSleep @ 0x1404BD9CC
 * Callers:
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTracePrepareSleepEnd @ 0x1406EFF5C (PopDiagTracePrepareSleepEnd.c)
 *     PopDispatchStateCallout @ 0x140A2C7C0 (PopDispatchStateCallout.c)
 *     PopDiagTracePrepareSleep @ 0x140ABBB78 (PopDiagTracePrepareSleep.c)
 *     PopCheckpointSystemSleep @ 0x140B5692C (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopPrepareSleep(__int64 a1)
{
  PopDiagTracePrepareSleep();
  PopCheckpointSystemSleep(54LL);
  *(_DWORD *)(a1 + 32) = 13;
  PopDispatchStateCallout(a1, 0LL);
  PopDiagTracePrepareSleepEnd();
  return PopCheckpointSystemSleep(55LL);
}
