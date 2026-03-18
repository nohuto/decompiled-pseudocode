/*
 * XREFs of EtwpCovSampReleaseSamplerRundown @ 0x14090C614
 * Callers:
 *     EtwpCovSampImageNotify @ 0x14090C0A0 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x14090C2A8 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x14090C4D0 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampSampleBufferProcess @ 0x14090E394 (EtwpCovSampSampleBufferProcess.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x140A0C120 (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 */

__int64 __fastcall EtwpCovSampReleaseSamplerRundown(__int64 a1)
{
  unsigned __int64 v1; // rtt
  __int64 result; // rax

  if ( a1 )
  {
    _m_prefetchw(&stru_140EFE900);
    v1 = stru_140EFE900.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v1 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&stru_140EFE900,
                 (stru_140EFE900.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                 stru_140EFE900.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&stru_140EFE900);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
