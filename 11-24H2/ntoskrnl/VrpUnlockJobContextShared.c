/*
 * XREFs of VrpUnlockJobContextShared @ 0x140928C08
 * Callers:
 *     VrpTranslatePath @ 0x1409276F0 (VrpTranslatePath.c)
 *     VrpPostEnumerateKey @ 0x1409284D8 (VrpPostEnumerateKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

__int64 __fastcall VrpUnlockJobContextShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return KeLeaveCriticalRegionThread();
}
