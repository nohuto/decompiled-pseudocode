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

__int64 __fastcall RtlpHandleInvalidUserCallTarget(__int64 a1)
{
  __int64 result; // rax

  if ( RtlGuardAllowSuppressedCalls && RtlpGuardIsSuppressedAddress(a1) )
    return RtlpGuardGrantSuppressedCallAccess(a1, 1u);
  if ( !LdrControlFlowGuardEnforcedWithExportSuppression()
    || !RtlGuardIsExportSuppressedAddress(a1)
    || (result = RtlpUnsuppressForwardReferencingCallTarget(a1), (int)result < 0) )
  {
    RtlFailFast2(0xAu);
  }
  return result;
}
