/*
 * XREFs of EtwpCovSampReleaseSamplerRundown @ 0x140922E54
 * Callers:
 *     EtwpCovSampImageNotify @ 0x1409228E0 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x140922AE8 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140922D10 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140924BD4 (EtwpCovSampSampleBufferProcess.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x140A0E7A0 (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall EtwpCovSampReleaseSamplerRundown(__int64 a1)
{
  unsigned __int64 v1; // rtt
  __int64 result; // rax

  if ( a1 )
  {
    _m_prefetchw(&stru_140EFEFA0);
    v1 = stru_140EFEFA0.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v1 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&stru_140EFEFA0,
                 (stru_140EFEFA0.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                 stru_140EFEFA0.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&stru_140EFEFA0);
    return KeLeaveCriticalRegionThread();
  }
  return result;
}
