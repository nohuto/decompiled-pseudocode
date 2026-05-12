/*
 * XREFs of RaidCallerIsAdmin @ 0x14008B354
 * Callers:
 *     RaUnitGetContiguousPhysicalAddressIoctl @ 0x140093884 (RaUnitGetContiguousPhysicalAddressIoctl.c)
 *     RaUnitUnlockContiguousPhysicalPagesIoctl @ 0x14009D110 (RaUnitUnlockContiguousPhysicalPagesIoctl.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018169C (RaidAdapterDiagnosticIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x140188188 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

BOOLEAN RaidCallerIsAdmin()
{
  void *PrimaryToken; // rcx
  BOOLEAN IsAdmin; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  IsAdmin = SeTokenIsAdmin(PrimaryToken);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return IsAdmin;
}
