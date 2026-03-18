/*
 * XREFs of CmpVolumeContextLockExclusive @ 0x1407D88A8
 * Callers:
 *     CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x1406F9250 (CmpVolumeManagerCreateContextsForWellKnownVolumes.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407D88F8 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmpVolumeContextLockExclusive(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 56);
  result = (__int64)KeAbPreAcquire(a1 + 56, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    *(_BYTE *)(v3 + 10) = 1;
  return result;
}
