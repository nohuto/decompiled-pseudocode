/*
 * XREFs of SeCloseObjectAuditAlarm @ 0x140985BD0
 * Callers:
 *     <none>
 * Callees:
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140985C34 (SepAdtCloseObjectAuditAlarm.c)
 */

void __fastcall SeCloseObjectAuditAlarm(int a1, int a2, char a3)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  if ( a3 )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    SepAdtCloseObjectAuditAlarm((unsigned int)&SeSubsystemName, a2, (unsigned int)&SubjectContext, a1, 1);
    SeReleaseSubjectContext(&SubjectContext);
  }
}
