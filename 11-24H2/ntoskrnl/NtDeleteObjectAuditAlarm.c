/*
 * XREFs of NtDeleteObjectAuditAlarm @ 0x140792710
 * Callers:
 *     <none>
 * Callees:
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SepAuditFailed @ 0x140850F60 (SepAuditFailed.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408F07FC (SepAdtDeleteObjectAuditAlarm.c)
 *     SepProbeAndCaptureString_U @ 0x14091F8F0 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x14091FC2C (SeCheckAuditPrivilege.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtDeleteObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  int v3; // edi
  char PreviousMode; // bl
  __int64 v7; // rdx
  NTSTATUS v8; // ebx
  __int64 v9; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v3 = (int)HandleId;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !GenerateOnClose )
    return 0;
  SeCaptureSubjectContext(&SubjectContext);
  if ( SubjectContext.PrimaryToken )
  {
    LOBYTE(v7) = PreviousMode;
    if ( (unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v7) )
    {
      v8 = SepProbeAndCaptureString_U(SubsystemName, &P);
      if ( v8 >= 0 )
        SepAdtDeleteObjectAuditAlarm((_DWORD)P, v3, (unsigned int)&SubjectContext, 0, 0LL, 0);
    }
    else
    {
      v8 = -1073741727;
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( P )
      ExFreePoolWithTag(P, 0);
    v9 = 3221225626LL;
    if ( v8 != -1073741670 )
      return v8;
  }
  else
  {
    v8 = -1073741700;
    v9 = 3221225596LL;
  }
  SepAuditFailed(v9);
  return v8;
}
