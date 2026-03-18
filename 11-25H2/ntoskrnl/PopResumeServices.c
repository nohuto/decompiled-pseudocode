/*
 * XREFs of PopResumeServices @ 0x140A2C744
 * Callers:
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x140A2C7C0 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140B5692C (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopResumeServices(__int64 a1)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *(_DWORD *)(a1 + 32) = 6;
  qword_140F0B0C0 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES);
  PopCheckpointSystemSleep(39LL);
  PopDispatchStateCallout(a1, &v3);
  qword_140F0B0C8 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES_END);
  return PopCheckpointSystemSleep(40LL);
}
