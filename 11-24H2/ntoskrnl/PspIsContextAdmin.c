/*
 * XREFs of PspIsContextAdmin @ 0x1408E917C
 * Callers:
 *     EtwQueryProcessTelemetryCoverage @ 0x1406F8D64 (EtwQueryProcessTelemetryCoverage.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1408EA030 (PspSetEnergyTrackingStateJobTree.c)
 *     EtwSetProcessTelemetryCoverage @ 0x1409047E8 (EtwSetProcessTelemetryCoverage.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SeLockSubjectContext @ 0x140868470 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408684D0 (SeUnlockSubjectContext.c)
 *     SeTokenIsAdmin @ 0x1408E91E0 (SeTokenIsAdmin.c)
 */

BOOLEAN PspIsContextAdmin()
{
  PACCESS_TOKEN PrimaryToken; // rcx
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
