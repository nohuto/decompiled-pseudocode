/*
 * XREFs of PfLockSharedRelease @ 0x140482C98
 * Callers:
 *     VmPinMemoryRange @ 0x14079EC80 (VmPinMemoryRange.c)
 *     VmUnpinMemoryRange @ 0x14079EF60 (VmUnpinMemoryRange.c)
 *     VmpUnpinMemoryRange @ 0x14079F79C (VmpUnpinMemoryRange.c)
 *     PfCheckDeprioritizeFile @ 0x1408E5C40 (PfCheckDeprioritizeFile.c)
 *     PfCheckDeprioritizeImage @ 0x1408E6188 (PfCheckDeprioritizeImage.c)
 *     PfQuerySuperfetchInformation @ 0x140933148 (PfQuerySuperfetchInformation.c)
 *     PfSnBeginAppLaunch @ 0x140960934 (PfSnBeginAppLaunch.c)
 *     PfSnIsHostingApplication @ 0x140961C24 (PfSnIsHostingApplication.c)
 *     PfSnGetPrefetchInstructions @ 0x140970C24 (PfSnGetPrefetchInstructions.c)
 *     PfpRpCHashDeleteEntries @ 0x140A289F4 (PfpRpCHashDeleteEntries.c)
 *     PfSnQueryPrefetcherInformation @ 0x140A43C78 (PfSnQueryPrefetcherInformation.c)
 *     VmpTracingEnabledCallback @ 0x140A840D0 (VmpTracingEnabledCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

void __fastcall PfLockSharedRelease(signed __int64 *BugCheckParameter2)
{
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
