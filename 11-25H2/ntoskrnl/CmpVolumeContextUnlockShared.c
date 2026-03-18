/*
 * XREFs of CmpVolumeContextUnlockShared @ 0x140A41E94
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C9108 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeContextCanHiveSectionBeExtended @ 0x140A41DB0 (CmpVolumeContextCanHiveSectionBeExtended.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140A41DFC (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 */

__int64 __fastcall CmpVolumeContextUnlockShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 56);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
