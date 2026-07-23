/*
 * XREFs of RtlGuardIsExportSuppressedAddress @ 0x180009774
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x180009654 (RtlGuardGrantSuppressedCallAccess.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x18002422C (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x180147D80 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x1800ED530 (RtlpGetTargetRvaFlag.c)
 */

char __fastcall RtlGuardIsExportSuppressedAddress(void *a1)
{
  RtlpGetTargetRvaFlag(a1);
  return 0;
}
