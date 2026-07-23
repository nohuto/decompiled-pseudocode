/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x14060E780
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x14073D5B4 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x140B8582C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x140B8C4B4 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140B8C63C (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
