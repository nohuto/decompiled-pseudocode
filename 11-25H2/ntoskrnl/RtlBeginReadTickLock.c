/*
 * XREFs of RtlBeginReadTickLock @ 0x140274730
 * Callers:
 *     KiUpdateTime @ 0x140272C80 (KiUpdateTime.c)
 *     KiUpdateTimeAssist @ 0x140275E04 (KiUpdateTimeAssist.c)
 *     RtlGetMultiTimePrecise @ 0x1404975D0 (RtlGetMultiTimePrecise.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1404EA450 (PpmParkCalculateCoreParkingMask.c)
 *     KeQueryProcessAvailableCpus @ 0x1405B43BC (KeQueryProcessAvailableCpus.c)
 *     KeQuerySystemAvailableCpus @ 0x1405B447C (KeQuerySystemAvailableCpus.c)
 *     KeQueryCpuSetInformation @ 0x1407306BC (KeQueryCpuSetInformation.c)
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
