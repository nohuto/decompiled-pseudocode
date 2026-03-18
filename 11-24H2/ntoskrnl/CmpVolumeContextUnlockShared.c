/*
 * XREFs of CmpVolumeContextUnlockShared @ 0x140A46358
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407D88F8 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeContextCanHiveSectionBeExtended @ 0x140A46274 (CmpVolumeContextCanHiveSectionBeExtended.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140A462C0 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

__int64 __fastcall CmpVolumeContextUnlockShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 56);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
