/*
 * XREFs of PopSuspendServices @ 0x140753F1C
 * Callers:
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x1409B9D64 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140B6675C (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopSuspendServices(__int64 a1)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES);
  PopCheckpointSystemSleep(4LL);
  *(_DWORD *)(a1 + 32) = 3;
  PopDispatchStateCallout(a1, &v3);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES_END);
  return PopCheckpointSystemSleep(5LL);
}
