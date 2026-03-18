/*
 * XREFs of RtlWriteAcquireTickLock @ 0x14029D4E4
 * Callers:
 *     KiUpdateProcessAvailableCpuState @ 0x140204268 (KiUpdateProcessAvailableCpuState.c)
 *     KiUpdateTime @ 0x14029B7C0 (KiUpdateTime.c)
 *     KiUpdateTimeAssist @ 0x14029EBAC (KiUpdateTimeAssist.c)
 *     KiUpdateSystemTime @ 0x1404A7710 (KiUpdateSystemTime.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405B86B4 (KiUpdateSystemAvailableCpuState.c)
 *     KeSetTagCpuSets @ 0x1405BFDEC (KeSetTagCpuSets.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140B57C80 (KiAddCpuToSystemCpuPartition.c)
 *     KiCreateCpuSetForProcessor @ 0x140B57D30 (KiCreateCpuSetForProcessor.c)
 *     KiCalibrateTimeAdjustment @ 0x140B6B5B0 (KiCalibrateTimeAdjustment.c)
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
