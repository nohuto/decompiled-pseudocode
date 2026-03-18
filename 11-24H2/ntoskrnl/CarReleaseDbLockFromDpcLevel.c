/*
 * XREFs of CarReleaseDbLockFromDpcLevel @ 0x1406195CC
 * Callers:
 *     CarAddUniqueViolation @ 0x14061907C (CarAddUniqueViolation.c)
 *     CarCleanDbLockContext @ 0x1406192D4 (CarCleanDbLockContext.c)
 *     CarDeleteDriverRuleViolations @ 0x14061937C (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x140619430 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x1406194C0 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140619618 (CarWriteEarlyRuleViolationEvents.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
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
