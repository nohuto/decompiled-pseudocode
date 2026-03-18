/*
 * XREFs of SeCloseObjectAuditAlarm @ 0x140A76530
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtCloseObjectAuditAlarm @ 0x14084D5BC (SepAdtCloseObjectAuditAlarm.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 */

void __fastcall SeCloseObjectAuditAlarm(int a1, __int64 a2, char a3)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  if ( a3 )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    SepAdtCloseObjectAuditAlarm(&SeSubsystemName, a2, (__int64 *)&SubjectContext, a1, 1);
    SeReleaseSubjectContext(&SubjectContext);
  }
}
