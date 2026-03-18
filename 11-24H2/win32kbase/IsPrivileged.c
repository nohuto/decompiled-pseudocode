/*
 * XREFs of IsPrivileged @ 0x1401647E0
 * Callers:
 *     HasPrivilege @ 0x1401AD4C0 (HasPrivilege.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dsds @ 0x1401AD55C (WPP_RECORDER_AND_TRACE_SF_Dsds.c)
 */

bool __fastcall IsPrivileged(PEPROCESS Process, PETHREAD Thread, PPRIVILEGE_SET RequiredPrivileges)
{
  char v5; // si
  BOOLEAN v6; // r15
  bool v7; // bp
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+60h] [rbp-38h] BYREF

  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  SeCaptureSubjectContextEx(Thread, Process, &SubjectSecurityContext);
  v5 = 1;
  v6 = SePrivilegeCheck(RequiredPrivileges, &SubjectSecurityContext, 1);
  SePrivilegeObjectAuditAlarm(0LL, &SubjectSecurityContext, 0LL, RequiredPrivileges);
  SeReleaseSubjectContext(&SubjectSecurityContext);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v5 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetProcessId(Process);
    UserSessionState = W32GetUserSessionState(v8);
    LOBYTE(v10) = v7;
    LOBYTE(v11) = v5;
    WPP_RECORDER_AND_TRACE_SF_Dsds(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69400),
      v6 != 0,
      1);
  }
  return v6 != 0;
}
