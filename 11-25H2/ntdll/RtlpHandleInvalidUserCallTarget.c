/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x180147D80
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x180122F30 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800096CC (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x180009774 (RtlGuardIsExportSuppressedAddress.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180022E90 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800ED500 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x180115F40 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlFailFast2 @ 0x180123150 (RtlFailFast2.c)
 */

int __fastcall RtlpHandleInvalidUserCallTarget(void *a1)
{
  int result; // eax

  if ( RtlGuardAllowSuppressedCalls && RtlpGuardIsSuppressedAddress(a1) )
    return RtlpGuardGrantSuppressedCallAccess((__int64)a1, 1u);
  if ( !LdrControlFlowGuardEnforcedWithExportSuppression()
    || !RtlGuardIsExportSuppressedAddress(a1)
    || (result = RtlpUnsuppressForwardReferencingCallTarget((__int64)a1), result < 0) )
  {
    RtlFailFast2(0xAu);
  }
  return result;
}
