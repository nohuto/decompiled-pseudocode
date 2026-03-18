/*
 * XREFs of RtlWriteAcquireTickLock @ 0x140274A4C
 * Callers:
 *     KiUpdateProcessAvailableCpuState @ 0x140267998 (KiUpdateProcessAvailableCpuState.c)
 *     KiUpdateTime @ 0x140272C80 (KiUpdateTime.c)
 *     KiUpdateTimeAssist @ 0x140275E04 (KiUpdateTimeAssist.c)
 *     KiUpdateSystemTime @ 0x1404A6F80 (KiUpdateSystemTime.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405B47C4 (KiUpdateSystemAvailableCpuState.c)
 *     KeSetTagCpuSets @ 0x1405BBEBC (KeSetTagCpuSets.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140B47CE0 (KiAddCpuToSystemCpuPartition.c)
 *     KiCreateCpuSetForProcessor @ 0x140B47D90 (KiCreateCpuSetForProcessor.c)
 *     KiCalibrateTimeAdjustment @ 0x140B5BAB0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWriteAcquireTickLock(signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt

  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 1) != 0 )
  {
    result = *a1;
LABEL_6:
    _mm_pause();
  }
  v2 = result;
  result = _InterlockedCompareExchange64(a1, result + 1, result);
  if ( v2 != result )
    goto LABEL_6;
  return result;
}
