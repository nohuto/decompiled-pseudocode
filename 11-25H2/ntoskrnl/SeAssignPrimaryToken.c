/*
 * XREFs of SeAssignPrimaryToken @ 0x140A0E1E4
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140A0C7EC (PspInitializeProcessSecurity.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     SepAuditingForSubCategory @ 0x14046EFD4 (SepAuditingForSubCategory.c)
 *     SepAuditAssignPrimaryToken @ 0x1407828B8 (SepAuditAssignPrimaryToken.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140782CA8 (SepAdtIncorporatePerUserPolicy.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     SeDeassignPrimaryToken @ 0x1408E09A4 (SeDeassignPrimaryToken.c)
 *     ObInitializeFastReference @ 0x140A0CFE4 (ObInitializeFastReference.c)
 */

__int64 __fastcall SeAssignPrimaryToken(__int64 a1, _BYTE *a2)
{
  char v4; // al
  PACCESS_TOKEN PrimaryToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+60h] [rbp+8h] BYREF

  v4 = SepAuditingForSubCategory(134, 1);
  v8 = v4;
  if ( dword_140F04368 )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SepAdtIncorporatePerUserPolicy(0x22u, 1, 0, (__int64)PrimaryToken, &v8);
    SeReleaseSubjectContext(&SubjectContext);
    v4 = v8;
  }
  if ( v4 )
    SepAuditAssignPrimaryToken(a1, (__int64)a2);
  if ( *(_QWORD *)(a1 + 584) )
    SeDeassignPrimaryToken(a1);
  PsReferenceSiloContext(a2);
  a2[204] = 1;
  return ObInitializeFastReference((__int64 *)(a1 + 584), (__int64)a2);
}
