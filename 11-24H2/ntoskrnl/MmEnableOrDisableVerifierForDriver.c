/*
 * XREFs of MmEnableOrDisableVerifierForDriver @ 0x140B82CD0
 * Callers:
 *     VfVolatileApplyDifVerification @ 0x140614864 (VfVolatileApplyDifVerification.c)
 *     VfVolatileRemoveDifVerification @ 0x1406149E0 (VfVolatileRemoveDifVerification.c)
 * Callees:
 *     VfDriverEnableDisableVerifier @ 0x140B8A1C0 (VfDriverEnableDisableVerifier.c)
 */

__int64 __fastcall MmEnableOrDisableVerifierForDriver(__int64 a1, _DWORD *a2)
{
  *a2 = 0;
  return VfDriverEnableDisableVerifier();
}
