/*
 * XREFs of CmpVolumeContextLockExclusive @ 0x1407D8DF8
 * Callers:
 *     CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x1406F6E90 (CmpVolumeManagerCreateContextsForWellKnownVolumes.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407D8E48 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall CmpVolumeContextLockExclusive(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  char *result; // rax
  char *v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 56);
  result = (char *)KeAbPreAcquire(a1 + 56, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    v3[10] = 1;
  return result;
}
