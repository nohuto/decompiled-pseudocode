/*
 * XREFs of CmpLockHiveListExclusive @ 0x140A52D38
 * Callers:
 *     CmpLoadKeyCommon @ 0x14045ABA8 (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x14045B070 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x14049267C (CmpUnJoinClassOfTrust.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x1407CEB00 (CmpLoadHiveVolatile.c)
 *     CmpDeleteHive @ 0x140840A1C (CmpDeleteHive.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *CmpLockHiveListExclusive()
{
  char *result; // rax
  char *v1; // rbx

  result = (char *)KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
  v1 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, result, (__int64)&CmpHiveListHeadLock);
  if ( v1 )
    v1[10] = 1;
  return result;
}
