/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x140431FB0
 * Callers:
 *     PiSwQueuedCreateInfoCreate @ 0x140724C70 (PiSwQueuedCreateInfoCreate.c)
 *     PoShutdownBugCheck @ 0x140747350 (PoShutdownBugCheck.c)
 *     EtwpRegisterPrivateSession @ 0x14079E05C (EtwpRegisterPrivateSession.c)
 *     PiDqTraceQueryCreate @ 0x140839A60 (PiDqTraceQueryCreate.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 *     EtwpNotifyGuid @ 0x140897964 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     CmpCreateKeyBody @ 0x14089EB50 (CmpCreateKeyBody.c)
 *     PiUEventHandleRegistration @ 0x14096747C (PiUEventHandleRegistration.c)
 *     SeAuditHandleCreation @ 0x140984F00 (SeAuditHandleCreation.c)
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409EED94 (EtwpNotifyDisallowedGuidChange.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
