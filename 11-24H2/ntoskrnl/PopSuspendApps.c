/*
 * XREFs of PopSuspendApps @ 0x140753EC8
 * Callers:
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x1409B9D64 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140B6675C (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopSuspendApps(__int64 a1)
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS);
  PopCheckpointSystemSleep(2LL);
  *(_DWORD *)(a1 + 32) = 2;
  PopDispatchStateCallout(a1, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS_END);
  return PopCheckpointSystemSleep(3LL);
}
