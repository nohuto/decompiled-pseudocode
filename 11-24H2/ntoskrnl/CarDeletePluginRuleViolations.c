/*
 * XREFs of CarDeletePluginRuleViolations @ 0x1406179F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403D9CC0 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x14060FF1C (ViPtRaiseIrqlSafe.c)
 *     CarAcquireDbLockAtDpcLevelSafe @ 0x1406175BC (CarAcquireDbLockAtDpcLevelSafe.c)
 *     CarCleanDbLockContext @ 0x140617894 (CarCleanDbLockContext.c)
 *     CarReleaseDbLockFromDpcLevel @ 0x140617B8C (CarReleaseDbLockFromDpcLevel.c)
 */

_UNKNOWN **__fastcall CarDeletePluginRuleViolations(int a1)
{
  _UNKNOWN **result; // rax
  BOOLEAN i; // dl
  _RTL_AVL_TABLE *v4; // rbx
  _DWORD *v5; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( CarDb )
  {
    v6 = 0LL;
    BYTE9(v6) = 4;
    ViPtRaiseIrqlSafe((__int64)&v6);
    CarAcquireDbLockAtDpcLevelSafe((__int64)&v6);
    if ( CarDbInitialized )
    {
      for ( i = 1; ; i = 0 )
      {
        v4 = CarDb;
        v5 = RtlEnumerateGenericTableAvl(CarDb, i);
        if ( !v5 )
          break;
        if ( *v5 == a1 )
          RtlDeleteElementGenericTableAvl(v4, v5);
      }
    }
    CarReleaseDbLockFromDpcLevel(&v6);
    return (_UNKNOWN **)CarCleanDbLockContext((__int64)&v6);
  }
  return result;
}
