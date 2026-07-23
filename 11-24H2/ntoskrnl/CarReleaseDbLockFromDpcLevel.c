/*
 * XREFs of CarReleaseDbLockFromDpcLevel @ 0x140617B8C
 * Callers:
 *     CarAddUniqueViolation @ 0x14061763C (CarAddUniqueViolation.c)
 *     CarCleanDbLockContext @ 0x140617894 (CarCleanDbLockContext.c)
 *     CarDeleteDriverRuleViolations @ 0x14061793C (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x1406179F0 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x140617A80 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140617BD8 (CarWriteEarlyRuleViolationEvents.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall CarReleaseDbLockFromDpcLevel(__int64 a1)
{
  char v1; // al
  PRTL_AVL_TABLE v3; // rcx

  v1 = *(_BYTE *)(a1 + 9);
  if ( (v1 & 2) != 0 )
  {
    v3 = CarDb;
    if ( (v1 & 4) != 0 )
    {
      CarDb[1].OrderedPointer = 0LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v3[1].BalancedRoot.Balance);
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&CarDb[1].BalancedRoot.Balance);
    }
    *(_BYTE *)(a1 + 9) &= ~2u;
    *(_QWORD *)a1 = 0LL;
  }
}
