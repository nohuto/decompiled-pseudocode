/*
 * XREFs of PfLockSharedRelease @ 0x14047DE88
 * Callers:
 *     VmPinMemoryRange @ 0x14079ED90 (VmPinMemoryRange.c)
 *     VmUnpinMemoryRange @ 0x14079F070 (VmUnpinMemoryRange.c)
 *     VmpUnpinMemoryRange @ 0x14079F8AC (VmpUnpinMemoryRange.c)
 *     PfQuerySuperfetchInformation @ 0x1408F5C60 (PfQuerySuperfetchInformation.c)
 *     PfSnBeginAppLaunch @ 0x1409483F4 (PfSnBeginAppLaunch.c)
 *     PfSnIsHostingApplication @ 0x1409496E4 (PfSnIsHostingApplication.c)
 *     PfSnGetPrefetchInstructions @ 0x140959434 (PfSnGetPrefetchInstructions.c)
 *     PfCheckDeprioritizeImage @ 0x1409DC928 (PfCheckDeprioritizeImage.c)
 *     PfCheckDeprioritizeFile @ 0x1409DCA6C (PfCheckDeprioritizeFile.c)
 *     PfpRpCHashDeleteEntries @ 0x140A1D3B8 (PfpRpCHashDeleteEntries.c)
 *     PfSnQueryPrefetcherInformation @ 0x140A39508 (PfSnQueryPrefetcherInformation.c)
 *     VmpTracingEnabledCallback @ 0x140A7EBF0 (VmpTracingEnabledCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall PfLockSharedRelease(signed __int64 *BugCheckParameter2)
{
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
