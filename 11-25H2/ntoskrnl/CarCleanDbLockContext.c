/*
 * XREFs of CarCleanDbLockContext @ 0x14060D314
 * Callers:
 *     CarAddUniqueViolation @ 0x14060D0BC (CarAddUniqueViolation.c)
 *     CarDeleteDriverRuleViolations @ 0x14060D3BC (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x14060D470 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x14060D500 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x14060D658 (CarWriteEarlyRuleViolationEvents.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     CarReleaseDbLockFromDpcLevel @ 0x14060D60C (CarReleaseDbLockFromDpcLevel.c)
 */

__int64 __fastcall CarCleanDbLockContext(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdi

  if ( (*(_BYTE *)(a1 + 9) & 2) != 0 )
    result = CarReleaseDbLockFromDpcLevel(a1);
  if ( (*(_BYTE *)(a1 + 9) & 1) != 0 )
  {
    v3 = *(unsigned __int8 *)(a1 + 8);
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), *(_BYTE *)(a1 + 8));
    __writecr8(v3);
    *(_BYTE *)(a1 + 9) &= ~1u;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return result;
}
