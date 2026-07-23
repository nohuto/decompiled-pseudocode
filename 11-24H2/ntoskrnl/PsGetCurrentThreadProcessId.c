/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x14041D840
 * Callers:
 *     PiSwQueuedCreateInfoCreate @ 0x14072EE9C (PiSwQueuedCreateInfoCreate.c)
 *     PoShutdownBugCheck @ 0x140751760 (PoShutdownBugCheck.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD880 (EtwpRegisterPrivateSession.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1408332EC (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpNotifyGuid @ 0x140834644 (EtwpNotifyGuid.c)
 *     CmpCreateKeyBody @ 0x14083A700 (CmpCreateKeyBody.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     PiUEventHandleRegistration @ 0x140857A2C (PiUEventHandleRegistration.c)
 *     SeAuditHandleCreation @ 0x140862770 (SeAuditHandleCreation.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 *     PiDqTraceQueryCreate @ 0x1409F2944 (PiDqTraceQueryCreate.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
