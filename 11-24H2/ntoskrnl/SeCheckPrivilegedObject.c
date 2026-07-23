/*
 * XREFs of SeCheckPrivilegedObject @ 0x1408EB21C
 * Callers:
 *     PspAssignPrimaryToken @ 0x140777290 (PspAssignPrimaryToken.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     PspSetProcessPriorityClass @ 0x1408EB3D4 (PspSetProcessPriorityClass.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1403FE430 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SePrivilegeObjectAuditAlarm @ 0x1408EB300 (SePrivilegeObjectAuditAlarm.c)
 */

char __fastcall SeCheckPrivilegedObject(__int64 a1, int a2, int a3, char a4)
{
  char v4; // bl
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v11; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+54h] [rbp-1Ch]
  __int64 v13; // [rsp+58h] [rbp-18h] BYREF
  int v14; // [rsp+60h] [rbp-10h]

  v14 = 0;
  v4 = 1;
  v13 = a1;
  v11 = 1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v12 = 1;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a4 )
  {
    ClientToken = SubjectContext.ClientToken;
    if ( SubjectContext.ClientToken )
    {
      if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
      {
        v4 = 0;
        goto LABEL_5;
      }
    }
    else
    {
      ClientToken = SubjectContext.PrimaryToken;
    }
    v4 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v13, v11, v12, a4);
LABEL_5:
    SePrivilegeObjectAuditAlarm(a2, (unsigned int)&SubjectContext, a3, (unsigned int)&v11, v4, a4);
  }
  SeReleaseSubjectContext(&SubjectContext);
  return v4;
}
