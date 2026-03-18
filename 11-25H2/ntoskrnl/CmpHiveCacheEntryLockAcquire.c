/*
 * XREFs of CmpHiveCacheEntryLockAcquire @ 0x1407D5808
 * Callers:
 *     CmpHiveCacheClaimHiveEntry @ 0x1407D54A0 (CmpHiveCacheClaimHiveEntry.c)
 *     CmpHiveCacheCreateHiveEntry @ 0x1407D5598 (CmpHiveCacheCreateHiveEntry.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x1407D58B0 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407D59E0 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407D5AF0 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall CmpHiveCacheEntryLockAcquire(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  __int64 *result; // rax
  __int64 *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 304);
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire(a1 + 304, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return result;
}
