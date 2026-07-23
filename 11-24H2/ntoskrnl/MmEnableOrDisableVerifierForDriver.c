/*
 * XREFs of MmEnableOrDisableVerifierForDriver @ 0x140B84CD0
 * Callers:
 *     VfVolatileApplyDifVerification @ 0x140612E24 (VfVolatileApplyDifVerification.c)
 *     VfVolatileRemoveDifVerification @ 0x140612FA0 (VfVolatileRemoveDifVerification.c)
 * Callees:
 *     VfDriverEnableDisableVerifier @ 0x140B8C1C0 (VfDriverEnableDisableVerifier.c)
 */

__int64 __fastcall MmEnableOrDisableVerifierForDriver(__int64 a1, _DWORD *a2)
{
  *a2 = 0;
  return VfDriverEnableDisableVerifier();
}
