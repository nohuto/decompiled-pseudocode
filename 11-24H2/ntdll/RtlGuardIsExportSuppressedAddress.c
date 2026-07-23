/*
 * XREFs of RtlGuardIsExportSuppressedAddress @ 0x1800E7AA0
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180033EAC (LdrpUnsuppressAddressTakenIat.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x1800E7980 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x180144B80 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x1800E7AD8 (RtlpGetTargetRvaFlag.c)
 */

char __fastcall RtlGuardIsExportSuppressedAddress(void *a1)
{
  RtlpGetTargetRvaFlag(a1);
  return 0;
}
