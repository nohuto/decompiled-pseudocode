/*
 * XREFs of ViPtRaiseIrqlSafe @ 0x14061195C
 * Callers:
 *     CarAddUniqueViolation @ 0x14061907C (CarAddUniqueViolation.c)
 *     CarDeleteDriverRuleViolations @ 0x14061937C (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x140619430 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x1406194C0 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140619618 (CarWriteEarlyRuleViolationEvents.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140B8BD84 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140B8BF6C (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140B8C55C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140B8C614 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140B8C740 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall ViPtRaiseIrqlSafe(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // di

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result < 2u && (*(_BYTE *)(a1 + 9) & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      result = KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    *(_BYTE *)(a1 + 9) |= 1u;
    *(_BYTE *)(a1 + 8) = CurrentIrql;
  }
  return result;
}
