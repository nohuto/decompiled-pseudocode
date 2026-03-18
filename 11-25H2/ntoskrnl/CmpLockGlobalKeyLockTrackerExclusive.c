/*
 * XREFs of CmpLockGlobalKeyLockTrackerExclusive @ 0x1407CE7C8
 * Callers:
 *     CmpGlobalUnlockKeyForWrite @ 0x1407CE6D0 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x140A63F1C (CmpGlobalLockKeyForWrite.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *CmpLockGlobalKeyLockTrackerExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&CmpKeyLockTracker, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpKeyLockTracker, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&CmpKeyLockTracker, result, (__int64)&CmpKeyLockTracker);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
