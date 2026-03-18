/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x1404296F0
 * Callers:
 *     PiSwQueuedCreateInfoCreate @ 0x140730E8C (PiSwQueuedCreateInfoCreate.c)
 *     PoShutdownBugCheck @ 0x140753440 (PoShutdownBugCheck.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD42C (EtwpRegisterPrivateSession.c)
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 *     EtwpNotifyGuid @ 0x140836EE4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     CmpCreateKeyBody @ 0x14083E100 (CmpCreateKeyBody.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     PiUEventHandleRegistration @ 0x14085BCBC (PiUEventHandleRegistration.c)
 *     SeAuditHandleCreation @ 0x1408F0F70 (SeAuditHandleCreation.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409F6160 (EtwpNotifyDisallowedGuidChange.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F8A64 (PiSwIrpStartCreateWorker.c)
 *     PiDqTraceQueryCreate @ 0x1409F9FD4 (PiDqTraceQueryCreate.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
