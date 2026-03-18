/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x1406101C0
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x14073F684 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x140B8382C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x140B8A4B4 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140B8A63C (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
