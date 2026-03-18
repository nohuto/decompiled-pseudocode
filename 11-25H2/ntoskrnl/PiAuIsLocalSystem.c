/*
 * XREFs of PiAuIsLocalSystem @ 0x1408D042C
 * Callers:
 *     IopDeviceInterfaceFilterCallback @ 0x1408CEAE0 (IopDeviceInterfaceFilterCallback.c)
 *     PiCMMandatoryFilterCallback @ 0x1408CFBC0 (PiCMMandatoryFilterCallback.c)
 * Callees:
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
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
