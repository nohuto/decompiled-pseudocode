/*
 * XREFs of ExpWnfCheckCrossScopeAccess @ 0x1408AE824
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1407BF7A8 (ExpNtDeleteWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1408ABBD0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x140AE3050 (NtQueryWnfStateNameInformation.c)
 * Callees:
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExpWnfLookupPermanentName @ 0x14085ACA8 (ExpWnfLookupPermanentName.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfCheckCrossScopeAccess(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  PSECURITY_DESCRIPTOR *v3; // rdi
  PSECURITY_DESCRIPTOR v4; // rbx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR *AccessStatus; // [rsp+80h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+18h] BYREF

  AccessStatus = 0LL;
  v1 = (a1 >> 6) & 0xF;
  if ( (_DWORD)v1 == 3 )
    return 0LL;
  if ( (_DWORD)v1 != 1 || ((a1 >> 4) & 3) != 0 )
    goto LABEL_13;
  result = ExpWnfLookupPermanentName(a1, &AccessStatus);
  if ( (int)result < 0 )
    return result;
  v3 = AccessStatus;
  GrantedAccess = 0;
  LODWORD(AccessStatus) = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v4 = v3[2];
  SeCaptureSubjectContext(&SubjectContext);
  SeAccessCheck(
    v4,
    &SubjectContext,
    0,
    0x10u,
    0,
    0LL,
    (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
    1,
    &GrantedAccess,
    (PNTSTATUS)&AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  ExFreePoolWithTag(v3, 0x20666E57u);
  result = (unsigned int)AccessStatus;
  if ( (int)AccessStatus >= 0 )
    return 0LL;
  if ( (_DWORD)AccessStatus == -1073741790 )
  {
LABEL_13:
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
      return 3221225569LL;
    return 0LL;
  }
  return result;
}
