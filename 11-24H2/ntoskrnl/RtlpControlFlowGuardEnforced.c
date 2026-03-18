/*
 * XREFs of RtlpControlFlowGuardEnforced @ 0x14027BE24
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x1405F0BAC (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14027BE44 (VslGetNestedPageProtectionFlags.c)
 */

__int64 RtlpControlFlowGuardEnforced()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags(0LL) >> 7) & 1;
}
