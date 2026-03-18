/*
 * XREFs of ExpWnfCheckCrossScopeAccess @ 0x1408E6080
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1407AFFD8 (ExpNtDeleteWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1408E34F0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408E4380 (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x140AD2130 (NtQueryWnfStateNameInformation.c)
 * Callees:
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExpWnfLookupPermanentName @ 0x14091BC30 (ExpWnfLookupPermanentName.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfCheckCrossScopeAccess(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  _QWORD *v3; // rdi
  void *v4; // rbx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *AccessStatus; // [rsp+80h] [rbp+10h] BYREF
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
  v4 = (void *)v3[2];
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
