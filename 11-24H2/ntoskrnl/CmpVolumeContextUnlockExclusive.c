/*
 * XREFs of CmpVolumeContextUnlockExclusive @ 0x1407D8B50
 * Callers:
 *     CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x1406F9250 (CmpVolumeManagerCreateContextsForWellKnownVolumes.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407D88F8 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

__int64 __fastcall CmpVolumeContextUnlockExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 56;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
  return KeAbPostRelease(v1);
}
