/*
 * XREFs of RtlpAcquireBootStatusLock @ 0x1404A7CE0
 * Callers:
 *     PopBootStatGet @ 0x140A1C0B0 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A1C6F8 (PopBootStatSet.c)
 *     RtlUnlockBootStatusData @ 0x140A1CA60 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140A7A490 (RtlLockBootStatusData.c)
 *     PopBootStatRestoreDefaults @ 0x140AA6644 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *RtlpAcquireBootStatusLock()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&RtlpBootStatHandleLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlpBootStatHandleLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&RtlpBootStatHandleLock, result, (__int64)&RtlpBootStatHandleLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
