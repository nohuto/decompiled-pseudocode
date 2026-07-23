/*
 * XREFs of CarDeleteDriverRuleViolations @ 0x14061793C
 * Callers:
 *     VfTargetDriversRemove @ 0x1403E4B7C (VfTargetDriversRemove.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403D9CC0 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x14060FF1C (ViPtRaiseIrqlSafe.c)
 *     CarAcquireDbLockAtDpcLevelSafe @ 0x1406175BC (CarAcquireDbLockAtDpcLevelSafe.c)
 *     CarCleanDbLockContext @ 0x140617894 (CarCleanDbLockContext.c)
 *     CarReleaseDbLockFromDpcLevel @ 0x140617B8C (CarReleaseDbLockFromDpcLevel.c)
 */

_UNKNOWN **__fastcall CarDeleteDriverRuleViolations(unsigned __int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  BOOLEAN i; // dl
  unsigned __int64 v6; // rcx
  _RTL_AVL_TABLE *v7; // rbx
  _QWORD *v8; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( CarDb )
  {
    v9 = 0LL;
    BYTE9(v9) = 4;
    ViPtRaiseIrqlSafe((__int64)&v9);
    CarAcquireDbLockAtDpcLevelSafe((__int64)&v9);
    if ( CarDbInitialized )
    {
      for ( i = 1; ; i = 0 )
      {
        v7 = CarDb;
        v8 = RtlEnumerateGenericTableAvl(CarDb, i);
        if ( !v8 )
          break;
        v6 = v8[1];
        if ( v6 >= a1 && v6 < a1 + a2 )
          RtlDeleteElementGenericTableAvl(v7, v8);
      }
    }
    CarReleaseDbLockFromDpcLevel(&v9);
    return (_UNKNOWN **)CarCleanDbLockContext((__int64)&v9);
  }
  return result;
}
