/*
 * XREFs of CmpLockGlobalKeyLockTrackerShared @ 0x1406F31B8
 * Callers:
 *     CmpGlobalLockKeyForWrite @ 0x140A5FA10 (CmpGlobalLockKeyForWrite.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 CmpLockGlobalKeyLockTrackerShared()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&CmpKeyLockTracker, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpKeyLockTracker, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&CmpKeyLockTracker, 0, v1, (__int64)&CmpKeyLockTracker);
  if ( v1 )
    v1[10] = 1;
  return result;
}
