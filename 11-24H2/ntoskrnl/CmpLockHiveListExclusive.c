/*
 * XREFs of CmpLockHiveListExclusive @ 0x140A5B428
 * Callers:
 *     CmpLoadKeyCommon @ 0x140464478 (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x140464940 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x140497B6C (CmpUnJoinClassOfTrust.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x1407CE610 (CmpLoadHiveVolatile.c)
 *     CmpDeleteHive @ 0x14084475C (CmpDeleteHive.c)
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 CmpLockHiveListExclusive()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = (__int64)KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
  v1 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, result, (__int64)&CmpHiveListHeadLock);
  if ( v1 )
    *(_BYTE *)(v1 + 10) = 1;
  return result;
}
