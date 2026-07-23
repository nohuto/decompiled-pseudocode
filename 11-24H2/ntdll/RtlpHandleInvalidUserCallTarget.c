/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x180144B80
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x18011F680 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180036070 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800E7950 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800E79F8 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x1800E7AA0 (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010E270 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlFailFast2 @ 0x18011F8A0 (RtlFailFast2.c)
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
