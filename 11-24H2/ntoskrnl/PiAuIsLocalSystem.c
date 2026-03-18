/*
 * XREFs of PiAuIsLocalSystem @ 0x1408D294C
 * Callers:
 *     IopDeviceInterfaceFilterCallback @ 0x1408D1170 (IopDeviceInterfaceFilterCallback.c)
 *     PiCMMandatoryFilterCallback @ 0x1408D21F0 (PiCMMandatoryFilterCallback.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408D25A0 (PiUEventApplyAdditionalFilters.c)
 * Callees:
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall PiAuIsLocalSystem(PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext, BOOLEAN *a2)
{
  PSECURITY_DESCRIPTOR v3; // rsi
  KPROCESSOR_MODE AccessMode; // al
  PSECURITY_SUBJECT_CONTEXT p_SubjectContext; // rdx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  v3 = PiAuLocalSystemSecurityObject;
  *a2 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  AccessMode = 1;
  if ( !v3 )
    return 3221225485LL;
  if ( !SubjectSecurityContext )
  {
    SeCaptureSubjectContext(&SubjectContext);
    AccessMode = KeGetCurrentThread()->PreviousMode;
  }
  p_SubjectContext = &SubjectContext;
  if ( SubjectSecurityContext )
    p_SubjectContext = SubjectSecurityContext;
  *a2 = SeAccessCheck(
          v3,
          p_SubjectContext,
          0,
          0xF0000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&PiAuLocalSystemSecurityMapping,
          AccessMode,
          &GrantedAccess,
          &AccessStatus);
  if ( !SubjectSecurityContext )
    SeReleaseSubjectContext(&SubjectContext);
  if ( AccessStatus < 0 )
    *a2 = 0;
  return 0LL;
}
