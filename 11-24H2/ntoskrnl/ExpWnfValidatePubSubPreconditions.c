/*
 * XREFs of ExpWnfValidatePubSubPreconditions @ 0x1409D92F0
 * Callers:
 *     NtQueryWnfStateData @ 0x140901E30 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 * Callees:
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall ExpWnfValidatePubSubPreconditions(
        ACCESS_MASK DesiredAccess,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        NTSTATUS AccessStatus)
{
  unsigned int v5; // ebx
  void *v10; // r15
  __int64 result; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+58h] [rbp-40h] BYREF

  v5 = 0;
  if ( AccessStatus )
    goto LABEL_4;
  v10 = *(void **)(a2 + 16);
  GrantedAccess = 0;
  AccessStatus = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  if ( !DesiredAccess
    || (SeCaptureSubjectContext(&SubjectSecurityContext),
        SeAccessCheck(
          v10,
          &SubjectSecurityContext,
          0,
          DesiredAccess,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
          1,
          &GrantedAccess,
          &AccessStatus),
        SeReleaseSubjectContext(&SubjectSecurityContext),
        result = (unsigned int)AccessStatus,
        AccessStatus >= 0) )
  {
LABEL_4:
    v12 = *(_QWORD **)(a2 + 8);
    if ( !v12 )
      goto LABEL_5;
    if ( !a4 )
      return 3221225485LL;
    v13 = *v12 - *a4;
    if ( *v12 == *a4 )
      v13 = v12[1] - a4[1];
    if ( v13 )
    {
      return 3221225485LL;
    }
    else
    {
LABEL_5:
      if ( a3 > *(_DWORD *)a2 )
        return (unsigned int)-1073741811;
      return v5;
    }
  }
  return result;
}
