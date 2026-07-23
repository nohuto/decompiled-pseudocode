/*
 * XREFs of EtwpAccessCheck @ 0x14083669C
 * Callers:
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1408331C0 (EtwpCheckCurrentUserProcessAccess.c)
 *     EtwpNotifyGuid @ 0x140834644 (EtwpNotifyGuid.c)
 *     EtwpCheckGuidAccess @ 0x140836754 (EtwpCheckGuidAccess.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 * Callees:
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall EtwpAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ACCESS_MASK DesiredAccess,
        struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdx
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+90h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+20h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  if ( a3 )
  {
    p_SubjectSecurityContext = a3;
  }
  else
  {
    SeCaptureSubjectContext(&SubjectSecurityContext);
    p_SubjectSecurityContext = &SubjectSecurityContext;
  }
  SeAccessCheck(
    SecurityDescriptor,
    p_SubjectSecurityContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&EtwpGenericMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  if ( !a3 )
    SeReleaseSubjectContext(&SubjectSecurityContext);
  return (unsigned int)AccessStatus;
}
