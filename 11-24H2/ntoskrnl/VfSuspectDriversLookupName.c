/*
 * XREFs of VfSuspectDriversLookupName @ 0x140B9CE84
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140B8C038 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140B8C250 (VfDriverEnableVerifier.c)
 * Callees:
 *     ViSuspectDriversLookupEntry @ 0x140B9D1A4 (ViSuspectDriversLookupEntry.c)
 */

_BOOL8 __fastcall VfSuspectDriversLookupName(const UNICODE_STRING *a1)
{
  return ViSuspectDriversLookupEntry(a1) != 0;
}
