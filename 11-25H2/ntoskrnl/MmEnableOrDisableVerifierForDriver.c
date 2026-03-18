/*
 * XREFs of MmEnableOrDisableVerifierForDriver @ 0x140B72CF0
 * Callers:
 *     VfVolatileApplyDifVerification @ 0x1406088A4 (VfVolatileApplyDifVerification.c)
 *     VfVolatileRemoveDifVerification @ 0x140608A20 (VfVolatileRemoveDifVerification.c)
 * Callees:
 *     VfDriverEnableDisableVerifier @ 0x140B7A1E0 (VfDriverEnableDisableVerifier.c)
 */

__int64 __fastcall MmEnableOrDisableVerifierForDriver(__int64 a1, _DWORD *a2)
{
  *a2 = 0;
  return VfDriverEnableDisableVerifier();
}
