/*
 * XREFs of EtwpCovSampReleaseSamplerRundown @ 0x140900574
 * Callers:
 *     EtwpCoverageSamplerUnloadImage @ 0x1408E6A9C (EtwpCoverageSamplerUnloadImage.c)
 *     EtwpCovSampImageNotify @ 0x140900000 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x140900208 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140900430 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1409022F4 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall EtwpCovSampReleaseSamplerRundown(__int64 a1)
{
  unsigned __int64 v1; // rtt
  __int64 result; // rax

  if ( a1 )
  {
    _m_prefetchw(&stru_140EFEC80);
    v1 = stru_140EFEC80.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v1 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&stru_140EFEC80,
                 (stru_140EFEC80.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                 stru_140EFEC80.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&stru_140EFEC80);
    return KeLeaveCriticalRegionThread();
  }
  return result;
}
