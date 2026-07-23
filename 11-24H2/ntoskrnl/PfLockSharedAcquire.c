/*
 * XREFs of PfLockSharedAcquire @ 0x14047A884
 * Callers:
 *     FsRtlLookupPerStreamContextInternal @ 0x14028FE70 (FsRtlLookupPerStreamContextInternal.c)
 *     VmPinMemoryRange @ 0x14079ED90 (VmPinMemoryRange.c)
 *     VmUnpinMemoryRange @ 0x14079F070 (VmUnpinMemoryRange.c)
 *     PfQuerySuperfetchInformation @ 0x1408F5C60 (PfQuerySuperfetchInformation.c)
 *     PfSnBeginAppLaunch @ 0x1409483F4 (PfSnBeginAppLaunch.c)
 *     PfSnIsHostingApplication @ 0x1409496E4 (PfSnIsHostingApplication.c)
 *     PfSnGetPrefetchInstructions @ 0x140959434 (PfSnGetPrefetchInstructions.c)
 *     PfCheckDeprioritizeImage @ 0x1409DC928 (PfCheckDeprioritizeImage.c)
 *     PfpRpCHashDeleteEntries @ 0x140A1D3B8 (PfpRpCHashDeleteEntries.c)
 *     PfSnQueryPrefetcherInformation @ 0x140A39508 (PfSnQueryPrefetcherInformation.c)
 *     VmpTracingEnabledCallback @ 0x140A7EBF0 (VmpTracingEnabledCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PfLockSharedAcquire(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)a1, 0LL);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)a1, 0, v3, (__int64)a1);
  if ( v3 )
    v3[10] = 1;
  return result;
}
