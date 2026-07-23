/*
 * XREFs of CarDeleteRuleViolationDB @ 0x14060D500
 * Callers:
 *     CarCleanup @ 0x14060A53C (CarCleanup.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403E0EB0 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403EAAD0 (RtlDeleteElementGenericTableAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x14060599C (ViPtRaiseIrqlSafe.c)
 *     CarAcquireDbLockAtDpcLevelSafe @ 0x14060D03C (CarAcquireDbLockAtDpcLevelSafe.c)
 *     CarCleanDbLockContext @ 0x14060D314 (CarCleanDbLockContext.c)
 *     CarReleaseDbLockFromDpcLevel @ 0x14060D60C (CarReleaseDbLockFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void CarDeleteRuleViolationDB()
{
  BOOLEAN i; // dl
  _RTL_AVL_TABLE *v1; // rbx
  PVOID v2; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( CarDb )
  {
    v3 = 0LL;
    BYTE9(v3) = 4;
    ViPtRaiseIrqlSafe((__int64)&v3);
    CarAcquireDbLockAtDpcLevelSafe((__int64)&v3);
    if ( CarDbInitialized )
    {
      for ( i = 1; ; i = 0 )
      {
        v1 = CarDb;
        v2 = RtlEnumerateGenericTableAvl(CarDb, i);
        if ( !v2 )
          break;
        RtlDeleteElementGenericTableAvl(v1, v2);
      }
      CarDbInitialized = 0;
    }
    CarReleaseDbLockFromDpcLevel(&v3);
    CarCleanDbLockContext((__int64)&v3);
    if ( CarDb )
    {
      ExFreePoolWithTag(CarDb, 0x4E726143u);
      CarDb = 0LL;
    }
  }
}
