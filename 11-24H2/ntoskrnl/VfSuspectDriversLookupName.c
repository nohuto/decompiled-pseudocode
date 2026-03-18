/*
 * XREFs of VfSuspectDriversLookupName @ 0x140B9AE84
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140B8A038 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140B8A250 (VfDriverEnableVerifier.c)
 * Callees:
 *     ViSuspectDriversLookupEntry @ 0x140B9B1A4 (ViSuspectDriversLookupEntry.c)
 */

_BOOL8 __fastcall VfSuspectDriversLookupName(const UNICODE_STRING *a1)
{
  return ViSuspectDriversLookupEntry(a1) != 0;
}
