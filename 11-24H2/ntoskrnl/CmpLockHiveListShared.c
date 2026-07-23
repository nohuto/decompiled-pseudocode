/*
 * XREFs of CmpLockHiveListShared @ 0x1408405B8
 * Callers:
 *     CmpGetNextHive @ 0x14084051C (CmpGetNextHive.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpGetNextActiveHive @ 0x1408E280C (CmpGetNextActiveHive.c)
 *     CmpGetLastHive @ 0x140930D0C (CmpGetLastHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 CmpLockHiveListShared()
{
  char *v0; // rbx
  signed __int64 result; // rax

  v0 = (char *)KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&CmpHiveListHeadLock, 0, v0, (__int64)&CmpHiveListHeadLock);
  if ( v0 )
    v0[10] = 1;
  return result;
}
