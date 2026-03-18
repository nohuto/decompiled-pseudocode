/*
 * XREFs of RtlpAcquireBootStatusLock @ 0x1404A8B8C
 * Callers:
 *     PopBootStatGet @ 0x140A3F048 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A3F42C (PopBootStatSet.c)
 *     RtlUnlockBootStatusData @ 0x140A3F7A0 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140A7C200 (RtlLockBootStatusData.c)
 *     PopBootStatRestoreDefaults @ 0x140AABC04 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 RtlpAcquireBootStatusLock()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)&RtlpBootStatHandleLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlpBootStatHandleLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&RtlpBootStatHandleLock, result, (__int64)&RtlpBootStatHandleLock);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
