/*
 * XREFs of PfLockSharedRelease @ 0x1402054C4
 * Callers:
 *     VmPinMemoryRange @ 0x14078F8C0 (VmPinMemoryRange.c)
 *     VmUnpinMemoryRange @ 0x14078FBA0 (VmUnpinMemoryRange.c)
 *     VmpUnpinMemoryRange @ 0x1407903DC (VmpUnpinMemoryRange.c)
 *     PfSnBeginAppLaunch @ 0x1408261B4 (PfSnBeginAppLaunch.c)
 *     PfSnIsHostingApplication @ 0x1408274A4 (PfSnIsHostingApplication.c)
 *     PfCheckDeprioritizeFile @ 0x1408B5CCC (PfCheckDeprioritizeFile.c)
 *     PfCheckDeprioritizeImage @ 0x1408B6190 (PfCheckDeprioritizeImage.c)
 *     PfQuerySuperfetchInformation @ 0x140932B10 (PfQuerySuperfetchInformation.c)
 *     PfSnGetPrefetchInstructions @ 0x140987464 (PfSnGetPrefetchInstructions.c)
 *     PfpRpCHashDeleteEntries @ 0x140A1F018 (PfpRpCHashDeleteEntries.c)
 *     PfSnQueryPrefetcherInformation @ 0x140A3F3AC (PfSnQueryPrefetcherInformation.c)
 *     VmpTracingEnabledCallback @ 0x140A80370 (VmpTracingEnabledCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 */

void __fastcall PfLockSharedRelease(volatile signed __int64 *BugCheckParameter2)
{
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
