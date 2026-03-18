/*
 * XREFs of CmpVolumeContextUnlockExclusive @ 0x1407C9360
 * Callers:
 *     CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x1406ED9CC (CmpVolumeManagerCreateContextsForWellKnownVolumes.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C9108 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall CmpVolumeContextUnlockExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 56;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
  return KeAbPostRelease(v1);
}
