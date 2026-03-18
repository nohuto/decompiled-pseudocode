/*
 * XREFs of ExpWnfCheckCallerAccess @ 0x140A01000
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1407AFFD8 (ExpNtDeleteWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A13B0C (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateNameInformation @ 0x140AD2130 (NtQueryWnfStateNameInformation.c)
 * Callees:
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExpWnfCheckCallerAccess(PSECURITY_DESCRIPTOR SecurityDescriptor, ACCESS_MASK DesiredAccess)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  if ( !DesiredAccess )
    return 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  SeAccessCheck(
    SecurityDescriptor,
    &SubjectSecurityContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  SeReleaseSubjectContext(&SubjectSecurityContext);
  return (unsigned int)AccessStatus;
}
