/*
 * XREFs of CarReleaseDbLockFromDpcLevel @ 0x14060D60C
 * Callers:
 *     CarAddUniqueViolation @ 0x14060D0BC (CarAddUniqueViolation.c)
 *     CarCleanDbLockContext @ 0x14060D314 (CarCleanDbLockContext.c)
 *     CarDeleteDriverRuleViolations @ 0x14060D3BC (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x14060D470 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x14060D500 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x14060D658 (CarWriteEarlyRuleViolationEvents.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
