/*
 * XREFs of CmpLockGlobalKeyLockTrackerExclusive @ 0x1407DDF88
 * Callers:
 *     CmpGlobalUnlockKeyForWrite @ 0x1407DDE90 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x140A66C2C (CmpGlobalLockKeyForWrite.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 CmpLockGlobalKeyLockTrackerExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)&CmpKeyLockTracker, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpKeyLockTracker, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpKeyLockTracker, result, (__int64)&CmpKeyLockTracker);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
