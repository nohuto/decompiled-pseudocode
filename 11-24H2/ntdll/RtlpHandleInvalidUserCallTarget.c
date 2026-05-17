/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x1801467D0
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x180121450 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlGuardIsExportSuppressedAddress @ 0x180003BFC (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x180003CAC (RtlpGuardGrantSuppressedCallAccess.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009670 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800ECD20 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x180112FB0 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlFailFast2 @ 0x180121670 (RtlFailFast2.c)
 */

__int64 __fastcall RtlpHandleInvalidUserCallTarget(unsigned __int64 a1)
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
