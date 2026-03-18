/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x140A98130
 * Callers:
 *     NtDeleteKey @ 0x1408697B0 (NtDeleteKey.c)
 *     NtMakeTemporaryObject @ 0x140A682C0 (NtMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarm @ 0x140A98110 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408F07FC (SepAdtDeleteObjectAuditAlarm.c)
 */

void __stdcall SeDeleteObjectAuditAlarmWithTransaction(PVOID Object, HANDLE Handle, GUID *TransactionId)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SepAdtDeleteObjectAuditAlarm(
    (unsigned __int16 *)&SeSubsystemName,
    (unsigned __int64)Handle,
    (__int64 *)&SubjectContext,
    (__int64)Object,
    (__int128 *)TransactionId,
    1);
  SeReleaseSubjectContext(&SubjectContext);
}
