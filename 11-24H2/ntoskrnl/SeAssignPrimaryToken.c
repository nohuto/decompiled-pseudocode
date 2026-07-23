/*
 * XREFs of SeAssignPrimaryToken @ 0x140A4A3CC
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140ACAA98 (PspInitializeProcessSecurity.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     SepAuditingForSubCategory @ 0x1404683D8 (SepAuditingForSubCategory.c)
 *     SepAuditAssignPrimaryToken @ 0x140791B48 (SepAuditAssignPrimaryToken.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140791F38 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SeDeassignPrimaryToken @ 0x1408FF694 (SeDeassignPrimaryToken.c)
 *     ObInitializeFastReference @ 0x140A4A4A0 (ObInitializeFastReference.c)
 */

__int64 __fastcall SeAssignPrimaryToken(__int64 a1, _BYTE *a2)
{
  char v4; // al
  PACCESS_TOKEN PrimaryToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+60h] [rbp+8h] BYREF

  v4 = SepAuditingForSubCategory(134, 1);
  v8 = v4;
  if ( dword_140F049E8 )
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
  return ObInitializeFastReference(a1 + 584, a2);
}
