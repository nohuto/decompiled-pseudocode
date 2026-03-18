/*
 * XREFs of CarWriteEarlyRuleViolationEvents @ 0x14060D658
 * Callers:
 *     CarInitLogging @ 0x14060A0E0 (CarInitLogging.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403E0EB0 (RtlEnumerateGenericTableAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x14060599C (ViPtRaiseIrqlSafe.c)
 *     CarEtwWriteBugCheckEvent @ 0x140609B98 (CarEtwWriteBugCheckEvent.c)
 *     CarAcquireDbLockAtDpcLevelSafe @ 0x14060D03C (CarAcquireDbLockAtDpcLevelSafe.c)
 *     CarCleanDbLockContext @ 0x14060D314 (CarCleanDbLockContext.c)
 *     CarReleaseDbLockFromDpcLevel @ 0x14060D60C (CarReleaseDbLockFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

_UNKNOWN **CarWriteEarlyRuleViolationEvents()
{
  _UNKNOWN **result; // rax
  BOOLEAN i; // dl
  __int64 v2; // rbx
  void *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( CarDb && CarLogInitialized )
  {
    v6 = 0LL;
    BYTE9(v6) = 4;
    ViPtRaiseIrqlSafe((__int64)&v6);
    CarAcquireDbLockAtDpcLevelSafe((__int64)&v6);
    if ( CarDbInitialized )
    {
      for ( i = 1; ; i = 0 )
      {
        v4 = RtlEnumerateGenericTableAvl(CarDb, i);
        v5 = v4;
        if ( !v4 )
          break;
        v2 = v4[3];
        if ( v2 )
        {
          CarEtwWriteBugCheckEvent(
            *(_QWORD *)(v2 + 88),
            (const WCHAR *)(v2 + 2),
            *(_DWORD *)(v2 + 80),
            *(const CHAR **)(v2 + 72),
            *(_BYTE *)v2,
            *(_DWORD *)(v2 + 96));
          v3 = *(void **)(v2 + 72);
          if ( v3 )
            ExFreePoolWithTag(v3, 0);
          ExFreePoolWithTag((PVOID)v2, 0);
          v5[3] = 0LL;
        }
      }
    }
    CarReleaseDbLockFromDpcLevel((__int64)&v6);
    return (_UNKNOWN **)CarCleanDbLockContext((__int64)&v6);
  }
  return result;
}
