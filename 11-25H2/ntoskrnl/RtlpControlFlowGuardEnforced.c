/*
 * XREFs of RtlpControlFlowGuardEnforced @ 0x14025D570
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x1405E4858 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14025D590 (VslGetNestedPageProtectionFlags.c)
 */

__int64 RtlpControlFlowGuardEnforced()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags(0LL) >> 7) & 1;
}
