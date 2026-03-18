/*
 * XREFs of CmpLockHiveListShared @ 0x1408442F8
 * Callers:
 *     CmpGetNextHive @ 0x14084425C (CmpGetNextHive.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpGetNextActiveHive @ 0x14090B0EC (CmpGetNextActiveHive.c)
 *     CmpGetLastHive @ 0x14092EBCC (CmpGetLastHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 CmpLockHiveListShared()
{
  _QWORD *v0; // rbx
  signed __int64 result; // rax

  v0 = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&CmpHiveListHeadLock, 0, v0, (__int64)&CmpHiveListHeadLock);
  if ( v0 )
    *((_BYTE *)v0 + 10) = 1;
  return result;
}
