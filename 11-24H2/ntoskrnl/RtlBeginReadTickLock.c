/*
 * XREFs of RtlBeginReadTickLock @ 0x1402ABCF0
 * Callers:
 *     KiUpdateTime @ 0x1402AA2B0 (KiUpdateTime.c)
 *     KiUpdateTimeAssist @ 0x1402AD69C (KiUpdateTimeAssist.c)
 *     RtlGetMultiTimePrecise @ 0x140491A30 (RtlGetMultiTimePrecise.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1404E5250 (PpmParkCalculateCoreParkingMask.c)
 *     KeQueryProcessAvailableCpus @ 0x1405B588C (KeQueryProcessAvailableCpus.c)
 *     KeQuerySystemAvailableCpus @ 0x1405B594C (KeQuerySystemAvailableCpus.c)
 *     KeCpuSetQueryUnparkRecommendationEx @ 0x1405BCF7C (KeCpuSetQueryUnparkRecommendationEx.c)
 *     KeQueryCpuSetInformation @ 0x140A70FAC (KeQueryCpuSetInformation.c)
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
