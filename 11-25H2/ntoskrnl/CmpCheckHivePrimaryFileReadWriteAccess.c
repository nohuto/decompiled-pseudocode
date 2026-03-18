/*
 * XREFs of CmpCheckHivePrimaryFileReadWriteAccess @ 0x14065C6B4
 * Callers:
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 * Callees:
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     IoGetFileObjectGenericMapping @ 0x140A01AE0 (IoGetFileObjectGenericMapping.c)
 */

BOOLEAN __fastcall CmpCheckHivePrimaryFileReadWriteAccess(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  KPROCESSOR_MODE AccessMode; // bl
  GENERIC_MAPPING *GenericMapping; // rax
  BOOLEAN v4; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  AccessMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  GenericMapping = IoGetFileObjectGenericMapping();
  v4 = SeAccessCheck(
         SecurityDescriptor,
         &SubjectContext,
         0,
         3u,
         0,
         0LL,
         GenericMapping,
         AccessMode,
         &GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  return v4;
}
