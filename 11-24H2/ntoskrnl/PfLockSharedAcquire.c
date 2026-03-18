/*
 * XREFs of PfLockSharedAcquire @ 0x14047FC44
 * Callers:
 *     FsRtlLookupPerStreamContextInternal @ 0x14025F860 (FsRtlLookupPerStreamContextInternal.c)
 *     VmPinMemoryRange @ 0x14079EC80 (VmPinMemoryRange.c)
 *     VmUnpinMemoryRange @ 0x14079EF60 (VmUnpinMemoryRange.c)
 *     PfCheckDeprioritizeImage @ 0x1408E6188 (PfCheckDeprioritizeImage.c)
 *     PfQuerySuperfetchInformation @ 0x140933148 (PfQuerySuperfetchInformation.c)
 *     PfSnBeginAppLaunch @ 0x140960934 (PfSnBeginAppLaunch.c)
 *     PfSnIsHostingApplication @ 0x140961C24 (PfSnIsHostingApplication.c)
 *     PfSnGetPrefetchInstructions @ 0x140970C24 (PfSnGetPrefetchInstructions.c)
 *     PfpRpCHashDeleteEntries @ 0x140A289F4 (PfpRpCHashDeleteEntries.c)
 *     PfSnQueryPrefetcherInformation @ 0x140A43C78 (PfSnQueryPrefetcherInformation.c)
 *     VmpTracingEnabledCallback @ 0x140A840D0 (VmpTracingEnabledCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PfLockSharedAcquire(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)a1, 0LL);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)a1, 0, v3, (__int64)a1);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
