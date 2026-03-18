/*
 * XREFs of RtlBeginReadTickLock @ 0x14029D200
 * Callers:
 *     KiUpdateTime @ 0x14029B7C0 (KiUpdateTime.c)
 *     KiUpdateTimeAssist @ 0x14029EBAC (KiUpdateTimeAssist.c)
 *     RtlGetMultiTimePrecise @ 0x1404970A0 (RtlGetMultiTimePrecise.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1404EDA40 (PpmParkCalculateCoreParkingMask.c)
 *     KeQueryProcessAvailableCpus @ 0x1405B82AC (KeQueryProcessAvailableCpus.c)
 *     KeQuerySystemAvailableCpus @ 0x1405B836C (KeQuerySystemAvailableCpus.c)
 *     KeCpuSetQueryUnparkRecommendationEx @ 0x1405BF94C (KeCpuSetQueryUnparkRecommendationEx.c)
 *     KeQueryCpuSetInformation @ 0x140A76E8C (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBeginReadTickLock(__int64 *a1)
{
  __int64 result; // rax

  for ( result = *a1; (*a1 & 1) != 0; result = *a1 )
    _mm_pause();
  return result;
}
