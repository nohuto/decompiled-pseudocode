/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x140982C20
 * Callers:
 *     SeDeleteObjectAuditAlarm @ 0x140982C00 (SeDeleteObjectAuditAlarm.c)
 *     NtMakeTemporaryObject @ 0x1409AF230 (NtMakeTemporaryObject.c)
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409847B8 (SepAdtDeleteObjectAuditAlarm.c)
 */

void __stdcall SeDeleteObjectAuditAlarmWithTransaction(PVOID Object, HANDLE Handle, GUID *TransactionId)
{
  int v3; // ebx
  int v5; // esi
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  v3 = (int)Object;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v5 = (int)Handle;
  SeCaptureSubjectContext(&SubjectContext);
  SepAdtDeleteObjectAuditAlarm(
    (unsigned int)&SeSubsystemName,
    v5,
    (unsigned int)&SubjectContext,
    v3,
    (__int64)TransactionId,
    1);
  SeReleaseSubjectContext(&SubjectContext);
}
