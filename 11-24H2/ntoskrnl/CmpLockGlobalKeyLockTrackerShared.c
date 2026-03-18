/*
 * XREFs of CmpLockGlobalKeyLockTrackerShared @ 0x1406F51B8
 * Callers:
 *     CmpGlobalLockKeyForWrite @ 0x140A66C2C (CmpGlobalLockKeyForWrite.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 CmpLockGlobalKeyLockTrackerShared()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&CmpKeyLockTracker, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpKeyLockTracker, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&CmpKeyLockTracker, 0, v1, (__int64)&CmpKeyLockTracker);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
