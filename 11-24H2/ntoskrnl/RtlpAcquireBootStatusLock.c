/*
 * XREFs of RtlpAcquireBootStatusLock @ 0x1404A2FAC
 * Callers:
 *     PopBootStatGet @ 0x140A348F8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A34CDC (PopBootStatSet.c)
 *     RtlUnlockBootStatusData @ 0x140A35050 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140A76500 (RtlLockBootStatusData.c)
 *     PopBootStatRestoreDefaults @ 0x140AA6BD8 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *RtlpAcquireBootStatusLock()
{
  struct _KTHREAD *CurrentThread; // rax
  char *result; // rax
  char *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (char *)KeAbPreAcquire((__int64)&RtlpBootStatHandleLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlpBootStatHandleLock, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&RtlpBootStatHandleLock, result, (__int64)&RtlpBootStatHandleLock);
  if ( v2 )
    v2[10] = 1;
  return result;
}
