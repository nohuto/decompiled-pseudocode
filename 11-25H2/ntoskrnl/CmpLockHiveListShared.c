/*
 * XREFs of CmpLockHiveListShared @ 0x140848578
 * Callers:
 *     CmpGetNextActiveHive @ 0x140848344 (CmpGetNextActiveHive.c)
 *     CmpGetNextHive @ 0x1408484DC (CmpGetNextHive.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpGetLastHive @ 0x1409118B0 (CmpGetLastHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 CmpLockHiveListShared()
{
  __int64 *v0; // rbx
  signed __int64 result; // rax

  v0 = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(
               (signed __int64 *)&CmpHiveListHeadLock,
               0,
               v0,
               (unsigned __int64)&CmpHiveListHeadLock);
  if ( v0 )
    *((_BYTE *)v0 + 10) = 1;
  return result;
}
