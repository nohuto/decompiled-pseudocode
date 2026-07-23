/*
 * XREFs of RtlpControlFlowGuardEnforced @ 0x1402313B4
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x1405EE1EC (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402313D4 (VslGetNestedPageProtectionFlags.c)
 */

__int64 RtlpControlFlowGuardEnforced()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags(0LL) >> 7) & 1;
}
