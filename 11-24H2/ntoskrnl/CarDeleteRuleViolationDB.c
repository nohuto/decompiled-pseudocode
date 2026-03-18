/*
 * XREFs of CarDeleteRuleViolationDB @ 0x1406194C0
 * Callers:
 *     CarCleanup @ 0x1406164FC (CarCleanup.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403EA300 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x14061195C (ViPtRaiseIrqlSafe.c)
 *     CarAcquireDbLockAtDpcLevelSafe @ 0x140618FFC (CarAcquireDbLockAtDpcLevelSafe.c)
 *     CarCleanDbLockContext @ 0x1406192D4 (CarCleanDbLockContext.c)
 *     CarReleaseDbLockFromDpcLevel @ 0x1406195CC (CarReleaseDbLockFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void CarDeleteRuleViolationDB()
{
  BOOLEAN i; // dl
  RTL_AVL_TABLE *v1; // rbx
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
