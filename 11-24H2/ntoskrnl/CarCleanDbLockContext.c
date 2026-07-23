/*
 * XREFs of CarCleanDbLockContext @ 0x140617894
 * Callers:
 *     CarAddUniqueViolation @ 0x14061763C (CarAddUniqueViolation.c)
 *     CarDeleteDriverRuleViolations @ 0x14061793C (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x1406179F0 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x140617A80 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140617BD8 (CarWriteEarlyRuleViolationEvents.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     CarReleaseDbLockFromDpcLevel @ 0x140617B8C (CarReleaseDbLockFromDpcLevel.c)
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
