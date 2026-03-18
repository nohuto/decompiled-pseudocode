/*
 * XREFs of NtCloseObjectAuditAlarm @ 0x140A0BC10
 * Callers:
 *     <none>
 * Callees:
 *     SepAuditFailed @ 0x140854DA0 (SepAuditFailed.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     SepProbeAndCaptureString_U @ 0x14092D0E0 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x14092D41C (SeCheckAuditPrivilege.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140985C34 (SepAdtCloseObjectAuditAlarm.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  char PreviousMode; // si
  NTSTATUS v7; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !GenerateOnClose )
    return 0;
  SeCaptureSubjectContext(&SubjectContext);
  if ( SeCheckAuditPrivilege((__int64 *)&SubjectContext, PreviousMode) )
  {
    v7 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P);
    if ( v7 >= 0 )
      SepAdtCloseObjectAuditAlarm((unsigned __int16 *)P, (unsigned __int64)HandleId, &SubjectContext, 0LL, 0);
  }
  else
  {
    v7 = -1073741727;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v7 == -1073741670 )
    SepAuditFailed(-1073741670);
  return v7;
}
