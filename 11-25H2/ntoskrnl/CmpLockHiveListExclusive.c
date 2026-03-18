/*
 * XREFs of CmpLockHiveListExclusive @ 0x140A58CA8
 * Callers:
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x140465784 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x140498D80 (CmpUnJoinClassOfTrust.c)
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x1407BEDF8 (CmpLoadHiveVolatile.c)
 *     CmpDeleteHive @ 0x1408488CC (CmpDeleteHive.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *CmpLockHiveListExclusive()
{
  __int64 *result; // rax
  __int64 *v1; // rbx

  result = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
  v1 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, result, (__int64)&CmpHiveListHeadLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
