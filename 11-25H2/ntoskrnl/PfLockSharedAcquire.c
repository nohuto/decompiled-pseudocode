/*
 * XREFs of PfLockSharedAcquire @ 0x14020739C
 * Callers:
 *     FsRtlLookupPerStreamContextInternal @ 0x1402058E0 (FsRtlLookupPerStreamContextInternal.c)
 *     VmPinMemoryRange @ 0x14078F8C0 (VmPinMemoryRange.c)
 *     VmUnpinMemoryRange @ 0x14078FBA0 (VmUnpinMemoryRange.c)
 *     PfSnBeginAppLaunch @ 0x1408261B4 (PfSnBeginAppLaunch.c)
 *     PfSnIsHostingApplication @ 0x1408274A4 (PfSnIsHostingApplication.c)
 *     PfCheckDeprioritizeImage @ 0x1408B6190 (PfCheckDeprioritizeImage.c)
 *     PfQuerySuperfetchInformation @ 0x140932B10 (PfQuerySuperfetchInformation.c)
 *     PfSnGetPrefetchInstructions @ 0x140987464 (PfSnGetPrefetchInstructions.c)
 *     PfpRpCHashDeleteEntries @ 0x140A1F018 (PfpRpCHashDeleteEntries.c)
 *     PfSnQueryPrefetcherInformation @ 0x140A3F3AC (PfSnQueryPrefetcherInformation.c)
 *     VmpTracingEnabledCallback @ 0x140A80370 (VmpTracingEnabledCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PfLockSharedAcquire(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire(a1, 0LL, 0LL);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(a1, 0LL, v3, a1);
  if ( v3 )
    *(_BYTE *)(v3 + 10) = 1;
  return result;
}
